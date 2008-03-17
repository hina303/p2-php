<?php
/* vim: set fileencoding=cp932 ai et ts=4 sw=4 sts=4 fdm=marker: */
/* mi: charset=Shift_JIS */

/**
 * Submitされた値が妥当なら（フィルタを適用して）返し、そうでなければデフォルト値を適用する
 *
 * ラジオボタンやチェックボックス、HTML_QuickFormのグループには非対応
 * HTML_QuickFormを継承したクラスのメソッドとして実装すべき
 */
function getValidValue($key, $default, $filter = '')
{
    global $qf, $qfe;
    $value = $qf->getSubmitValue($key);
    if (is_null($value) || $qf->getElementError($key)) {
        if ($qfe[$key]->getType() == 'select') {
            $qfe[$key]->setSelected($default);
        } else {
            $qfe[$key]->setValue($default);
        }
        return $default;
    }
    return (strlen($filter) > 0) ? $filter($value) : $value;
}

/**
 * 数値を指定された範囲に無理矢理押し込める関数
 */
function intoRange($int)
{
    $a = func_get_args();
    $r = array_map('intval', $a);
    $g = func_num_args();
    $int = $r[0];
    switch ($g) {
        case 1: return $int;
        case 2: $min = 0; $max = $r[1]; break;
        default: $min = $r[1]; $max = $r[2];
    }
    if ($min > $max) {
        list($min, $max) = array($max, $min);
    }
    return max($min, min($max, intval($int)));
}
