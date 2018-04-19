/********************************************************************************
**
** �ļ���:     debug_tool.c
** ��Ȩ����:   
** �ļ�����:   ��ģ����Ҫʵ��һЩ�����õ��Ĵ�ӡ��Ϣ����
**
*********************************************************************************
**             �޸���ʷ��¼
**===============================================================================
**| ����       | ����   |  �޸ļ�¼
**===============================================================================
**| 2011/11/26 | ���ѽ� |  ������һ�汾
*********************************************************************************/
#if 0
#include "bsp.h"
#include "sys_includes.h"

static void _put_char(INT8U ch)
{
	while(USART_GetFlagStatus(USART1, USART_FLAG_TC)==RESET);
	USART_SendData(USART1, ch);
}

INT8U hex_to_char(INT8U sbyte)
{
    sbyte &= 0x0F;
    if (sbyte < 0x0A) return (sbyte + '0');
    else return (sbyte - 0x0A + 'A');
}

/*******************************************************************
** ������:     printf_hex
** ��������:   ���ڸ�ʽ���������
** ����:       [in] pdata:  ����ָ��
** ����:       [in] len:    ���ݳ���
** ����:       ��
********************************************************************/
void printf_hex(INT8U *pdata, INT16U len)
{
    INT8U ch;
    
    if (pdata == NULL || len == 0) {
        return;
    }
    if (len > 200) {
        len = 200;
    }

    while (len--) {
        ch = *pdata++;
        _put_char(hex_to_char((INT8U)(ch >> 4)));
        _put_char(hex_to_char(ch));
        _put_char(' ');
    }
}
#endif