<?php
/**
 * rep2 - �X�^�C���ݒ�
 * for subject.php �X���b�h���X�g�\������
 */

if ($STYLE['a_underline_none'] == 2) {
    $thre_title_underline_css = <<<EOSTYLE
a.thre_title, a.thre_title_new, a.thre_title_fav {
	text-decoration: none;
}
EOSTYLE;
} else {
    $thre_title_underline_css = '';
}

echo <<<EOSTYLE

body {
	margin: 0 0 8px 0;
	padding: 0;
	line-height: 130%;
	background: {$STYLE['sb_bgcolor']} {$STYLE['sb_background']};
	color: {$STYLE['sb_color']};
	font-size: {$STYLE['sb_fontsize']};
}

a:link    { color: {$STYLE['sb_acolor']}; }
a:visited { color: {$STYLE['sb_acolor_v']}; }
a:hover   { color: {$STYLE['sb_acolor_h']}; }

p {
	margin:8px
}
form {
	margin: 0;
	padding: 0;
}
/*
form.check {
}
*/
form#urlform {
	margin: 8px;
}

hr {
	width: 98%;
}

/* p2 info message */
.info{
	color: #777;
}

/* �c�[���o�[ */
table.toolbar {
	width: 100%;
	margin: 0;
	padding: 0;
	border: solid 1px {$STYLE['sb_tool_border_color']};
	background: {$STYLE['sb_tool_bgcolor']} {$STYLE['sb_tool_background']};
}

table.toolbar td {
	margin: 0;
	padding: 4px;
	white-space: nowrap;
	text-align: left;
	vertical-align: middle;
	color: {$STYLE['sb_tool_sepa_color']};
	font-size: {$STYLE['sb_fontsize']};
	line-height: 100%;
}

table.toolbar td.toolbar-title {
	padding-left: 12px;
}
table.toolbar td.toolbar-update {
}
table.toolbar td.toolbar-filter {
}
table.toolbar td.toolbar-edit {
}
table.toolbar td.toolbar-anchor {
	padding-right: 12px;
	text-align: right;
}

table.toolbar a {
	color: {$STYLE['sb_tool_acolor']};
}
table.toolbar a:visited {
	color: {$STYLE['sb_tool_acolor_v']};
}
table.toolbar a:hover {
	color: {$STYLE['sb_tool_acolor_h']};
}

/* �X���b�h���X�g */
table.threadlist {
	width: 100%;
	margin: 0;
	padding: 0;
}

table.threadlist th,
table.threadlist td {
	width: auto;
	margin: 0;
	padding: 4px;
	white-space: nowrap;
	text-align: left;
	font-size: {$STYLE['sb_fontsize']};
	line-height: 100%;
}

table.threadlist tr.tableheader th {
	font-family: "{$STYLE['fontfamily']}";
	font-weight: normal;
	background: {$STYLE['sb_th_bgcolor']} {$STYLE['sb_th_background']};
}

table.threadlist a {
	white-space: nowrap; /* for IE */
}

/* �̖��O */
.itatitle {
	display: inline;
	margin: 0;
	padding: 0;
	font-size: 14px;
	color: {$STYLE['sb_tool_color']};
}
a.aitatitle:link    { color: {$STYLE['sb_tool_acolor']}; }
a.aitatitle:visited { color: {$STYLE['sb_tool_acolor_v']}; }
a.aitatitle:hover   { color: {$STYLE['sb_tool_acolor_h']}; }

/* ���� */
a.narabi { margin: 4px 2px 4px 8px; }
a.narabi:link    { color: {$STYLE['sb_tool_acolor']}; }
a.narabi:visited { color: {$STYLE['sb_tool_acolor_v']}; }
a.narabi:hover   { color: {$STYLE['sb_tool_acolor_h']}; }

/* �V���܂Ƃߓǂ� */
a.matome:link    { color: {$STYLE['sb_tool_acolor']}; }
a.matome:visited { color: {$STYLE['sb_tool_acolor_v']}; }
a.matome:hover   { color: {$STYLE['sb_tool_acolor_h']}; }

/* �V���܂Ƃߓǂ� �V�����X�� */
span.matome_num {
	color: {$STYLE['sb_tool_newres_color']};
}

/* subject�X�V���ԕ\�� */
.time {
	margin: 4px 8px;
	color: {$STYLE['sb_tool_color']}
}

/* �c�[���o�[�́��� */
a.toolanchor:link    { color: {$STYLE['sb_tool_acolor']}; }
a.toolanchor:visited { color: {$STYLE['sb_tool_acolor_v']}; }
a.toolanchor:hover   { color: {$STYLE['sb_tool_acolor_h']}; }

/* ���݂̃\�[�g�`�� */
a.now_sort:link    { color: {$STYLE['sb_now_sort_color']}; }
a.now_sort:visited { color: {$STYLE['sb_now_sort_color']}; }
a.now_sort:hover   { color: {$STYLE['sb_acolor_h']}; }

/* ���݂̃\�[�g�`�� (�t��) */
a.now_sort.rsort { text-decoration: underline overline; }

/* �X���^�C�g�� */
a.thre_title:link    { color: {$STYLE['thre_title_color']}; }
a.thre_title:visited { color: {$STYLE['thre_title_color_v']}; }
a.thre_title:hover   { color: {$STYLE['thre_title_color_h']}; }

/* �X���^�C�g�� �V�K */
a.thre_title_new:link    { color: {$STYLE['sb_thre_title_new_color']}; }
a.thre_title_new:visited { color: {$STYLE['thre_title_color_v']}; }
a.thre_title_new:hover   { color: {$STYLE['thre_title_color_h']}; }

/* �X���^�C�g�� ���C�ɃX�� */
/*
a.thre_title_fav:link    { color: #369; } 
a.thre_title_fav:visited { color: #369; }
a.thre_title_fav:hover   { color: {$STYLE['thre_title_color_h']}; }
*/

{$thre_title_underline_css}

/* ���X�������N */
a.moto_thre { margin-right: 0.5em; }

/* �X���ꗗ�̔ԍ� */
a.info { color: {$STYLE['sb_order_color']}; }
a.info:hover { color: {$STYLE['sb_tacolor_h']}; }

/* �V�����X�� */
a.un_a:link    { color: {$STYLE['sb_newres_color']}; }
a.un_a:visited { color: {$STYLE['sb_newres_color']}; }
a.un_a:hover   { color: {$STYLE['sb_acolor_h']}; }

/* �u-�v�idat�����̃X���j */
.un_n { color: #999; } 
a.un_n:link    { color: #999; }
a.un_n:visited { color: #999; }
a.un_n:hover   { color: {$STYLE['sb_acolor_h']}; }

/* ���ёւ� */
a.te:link    { color: #999; }
a.te:visited { color: #999; }
a.te:hover   { color: {$STYLE['sb_tacolor_h']}; }

/* r �X���b�h���X�g �s */
table.threadlist tr.r1 {
	background: {$STYLE['sb_tbgcolor1']} {$STYLE['sb_tbackground1']};
}
table.threadlist tr.r2 {
	background: {$STYLE['sb_tbgcolor']} {$STYLE['sb_tbackground']};
}
table.threadlist tr.nosubject {
	background: {$STYLE['sb_tbgcolor_nosubject']} {$STYLE['sb_tbackground']};
}

/* t �X���b�h���X�g �e�[�u���� ��{ */
/*
table.threadlist td.t,
table.threadlist th.t {
}
*/

/* te �X���b�h���X�g ���ёւ��� */
table.threadlist th.te,
table.threadlist td.te {
	width: 5em;
}

/* tu �X���b�h���X�g �V�����X���� */
table.threadlist th.tu,
table.threadlist td.tu {
	width: 2.5em;
	text-align: right;
}

/* tn �X���b�h���X�g�̃��X���� */
table.threadlist th.tn,
table.threadlist td.tn {
	width: 2.5em;
	text-align: right;
	color: {$STYLE['sb_ttcolor']};
}

/* tc �X���b�h���X�g �`�F�b�N�{�b�N�X�� */
table.threadlist th.tc,
table.threadlist td.tc {
	width: 1em;
	padding: 0 2px 0 4px;
	text-align: right;
}

/* to �X���b�h���X�g �I�[�_�[�ԍ��� */
table.threadlist th.to,
table.threadlist td.to {
	width: 2.5em;
	text-align: right;
}

/* tl �X���b�h���X�g �^�C�g������ */
/*
table.threadlist th.tl,
table.threadlist td.tl {
}
*/

/* tl �X���b�h���X�g �^�C�g������ */
table.threadlist td.tl {
    padding: 0 4px;
}
table.threadlist td.tl div.el {
	min-width: 10em;
	margin: 0;
	padding: 4px 0;
	overflow: hidden;
	text-overflow: ellipsis;
	-o-text-overflow: ellipsis;
	-webkit-text-overflow: ellipsis;
	white-space: nowrap;
}

/* ti �X���b�h���X�g ���΂₳�� */
table.threadlist th.ts,
table.threadlist td.ts {
	width: 3.5em;
	text-align: right;
}

/* ti �X���b�h���X�g ������ */
table.threadlist th.ti,
table.threadlist td.ti {
	width: 3.5em;
	text-align: right;
}

/* IE��th,td�v�f��white-space:nowrap�������Ȃ��o�O�΍� */
table.threadlist td span.nowrap {
	margin: 0;
	padding: 0;
	white-space: nowrap;
}

EOSTYLE;

/*
 * Local Variables:
 * mode: php
 * coding: cp932
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: nil
 * End:
 */
// vim: set syn=php fenc=cp932 ai et ts=4 sw=4 sts=4 fdm=marker: