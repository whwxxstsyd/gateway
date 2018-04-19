/********************************************************************************
**
** 文件名:     comm_send.h
** 版权所有:   (c) 2013-2014 
** 文件描述:   协议封装发送，发送链表管理
**
*********************************************************************************
**             修改历史记录
**===============================================================================
**|    日期    |  作者  |  修改记录
**===============================================================================
**| 2014/10/18 | 苏友江 |  创建该文件
********************************************************************************/
#ifndef COMM_SEND_H
#define COMM_SEND_H

/*
********************************************************************************
* 宏定义
********************************************************************************
*/

#ifndef	 _SUCCESS
#define  _SUCCESS                0
#endif

#ifndef	 _FAILURE
#define  _FAILURE                1
#endif

#ifndef  _OVERTIME
#define  _OVERTIME               2
#endif

/*******************************************************************
** 函数名:     comm_send_init
** 函数描述:   发送模块初始化
** 参数:       无
** 返回:       无
********************************************************************/
void comm_send_init(void);

/*******************************************************************
** 函数名:     comm_send_listsend
** 函数描述:   link数据链表发送
** 参数:       [in] packet : 数据指针
**             [in] ct_send: 发送次数
**             [in] ct_time: 重发等待时间，单位：秒
**             [in] fp     : 发送结果通知
** 返回:       返回流水号，0:表示挂接发送链表失败
********************************************************************/
INT16U comm_send_listsend(Comm_pkt_send_t *packet, INT8U ct_send, INT16U ct_time, void(*fp)(INT16U, Comm_pkt_send_t*, INT8U));

/*******************************************************************
** 函数名:     comm_send_dirsend
** 函数描述:   直接发送，不挂到链表发送
** 参数:       [in] packet : 数据包
** 返回:       发送成功返回true，失败返回false
********************************************************************/
BOOLEAN comm_send_dirsend(Comm_pkt_send_t *packet);

/*******************************************************************
** 函数名:     comm_send_confirm
** 函数描述:   应答确认
** 参数:       [in] flowseq : 流水号
**             [in] result  : 结果，成功 or 失败
** 返回:       成功返回true，失败返回false
********************************************************************/
BOOLEAN comm_send_confirm(INT16U flowseq, INT8U result);

#endif /* end of LINK_SEND_H */

