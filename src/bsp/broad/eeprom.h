/********************************************************************************
**
** 文件名:     eeprom.h
** 版权所有:   (c) 2013-2015 
** 文件描述:   实现内部eeprom的驱动
**
*********************************************************************************
**             修改历史记录
**===============================================================================
**|    日期    |  作者  |  修改记录
**===============================================================================
**| 2015/08/27 | 苏友江 |  创建该文件
********************************************************************************/
#ifndef EEPROM_H
#define EEPROM_H

uint32_t eeprom_write_byte(uint8_t num, uint16_t addr, uint8_t *buffer, uint16_t length);

uint32_t eeprom_read_byte(uint8_t num, uint16_t addr, uint8_t *buffer, uint16_t length);

uint8_t eeprom_blank_get(uint16_t size);

#endif

