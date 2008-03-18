<?php
/* vim: set fileencoding=cp932 ai et ts=4 sw=4 sts=4 fdm=marker: */
/* mi: charset=Shift_JIS */

require_once P2EX_LIB_DIR . '/ic2/loadconfig.inc.php';
require_once P2EX_LIB_DIR . '/ic2/database.class.php';

class IC2DB_Errors extends IC2DB_Skel
{
    // {{{ properties

    // }}}
    // {{{ constcurtor

    function IC2DB_Errors()
    {
        $this->__construct();
    }

    function __construct()
    {
        parent::__construct();
        $this->__table = $this->_ini['General']['error_table'];
    }

    // }}}
    // {{{ table()

    function table()
    {
        return array(
            'uri'     => DB_DATAOBJECT_STR,
            'errcode' => DB_DATAOBJECT_STR,
            'errmsg'  => DB_DATAOBJECT_STR,
            'occured' => DB_DATAOBJECT_INT,
        );
    }

    // }}}
    // {{{ keys()

    function keys()
    {
        return array('uri');
    }

    // }}}
    // {{{ ic2_errlog_lotate()

    function ic2_errlog_lotate()
    {
        $ini = ic2_loadconfig();
        $error_log_num = $ini['General']['error_log_num'];
        if ($error_log_num > 0) {
            $q_table = $this->_db->quoteIdentifier($this->__table);
            $sql1 = 'SELECT COUNT(*) FROM ' . $q_table;
            $sql2 = 'SELECT MIN(occured) FROM ' . $q_table;
            $sql3 = 'DELETE FROM ' . $q_table . ' WHERE occured = ';

            while (($r1 = $this->_db->getOne($sql1)) > $error_log_num) {
                if (DB::isError($r1)) {
                    return $r1;
                }
                $r2 = $this->_db->getOne($sql2);
                if (DB::isError($r2)) {
                    return $r2;
                }
                $r3 = $this->_db->query($sql3 . $r2);
                if (DB::isError($r3)) {
                    return $r3;
                }
                if ($this->_db->affectedRows() == 0) {
                    break;
                }
            }

        }
        return DB_OK;
    }

    // }}}
    // {{{ ic2_errlog_clean()

    function ic2_errlog_clean()
    {
        return $this->_db->query('DELETE FROM ' . $this->_db->quoteIdentifier($this->__table));
    }

    // }}}
}