/********************************************************************************
**
** 文件名:     drv_zigbee.h
** 版权所有:   (c) 2013-2016 
** 文件描述:   zigbee驱动
**
*********************************************************************************
**             修改历史记录
**===============================================================================
**|    日期    |  作者  |  修改记录
**===============================================================================
**| 2016/06/14 | 苏友江 |  创建该文件
********************************************************************************/
#ifndef DRV_ZIGBEE_H
#define DRV_ZIGBEE_H


/*******************************************************************
** 函数名:      drv_zigbee_init
** 函数描述:    
** 参数:        none
** 返回:        none
********************************************************************/
void drv_zigbee_init(void);

INT32S drv_zigbee_write(INT8U* pdata, INT16U datalen);

INT32S drv_zigbee_read(INT8U* pdata, INT16U datalen);

BOOLEAN drv_zigbee_is_connect(void);


#endif /* end of DRV_ZIGBEE_H */
