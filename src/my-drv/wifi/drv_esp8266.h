/********************************************************************************
**
** �ļ���:     drv_esp8266.h
** ��Ȩ����:   (c) 2013-2016 
** �ļ�����:   esp8266����������͸��ģʽ�����㿪��������ֻ��֧��һ������
**
*********************************************************************************
**             �޸���ʷ��¼
**===============================================================================
**|    ����    |  ����  |  �޸ļ�¼
**===============================================================================
**| 2016/12/09 | ���ѽ� |  �������ļ�
********************************************************************************/
#ifndef DRV_ESP8266_H
#define DRV_ESP8266_H

/*
********************************************************************************
* ����ģ�����ò���
********************************************************************************
*/
#define AT_PARA_NUM       4
#define AT_PARA_SIZE      30

/*
********************************************************************************
* ����ģ��ṹ
********************************************************************************
*/

typedef struct _At_cmd_t {
	INT8U  cmdid;		                      /* ������� */
	INT8U *cmd;			                      /* ���� */
	INT8U *scuesscode;	                      /* �ɹ��� */
	INT8U *errorcode;	                      /* ʧ���� */
    INT32S timeout;                           /* ��ʱ�ȴ�����λms */                      
	INT8U  paranum;		                      /* ��Ҫ�����ĸ���0Ϊ����Ҫ���� */
	void  *para;                              /* ����ָ�� */
} At_cmd_t;

typedef enum
{
    AT_DOING,
	AT_OK,
	AT_FAIL,
	AT_TIMEOUT,
    AT_INVALID_PARAMS,
} At_ret;

/*******************************************************************
** ������:      drv_esp8266_init
** ��������:    
** ����:        none
** ����:        none
********************************************************************/
void drv_esp8266_init(void);

INT32S drv_esp8266_write(INT8U* pdata, INT16U datalen);

INT32S drv_esp8266_read(INT8U* pdata, INT16U datalen);

BOOLEAN drv_esp8266_is_connect(void);

BOOLEAN drv_esp8266_reset(INT8U delay);

BOOLEAN drv_esp8266_smartconfig(void);

BOOLEAN drv_esp8266_server(char *server);

BOOLEAN drv_esp8266_port(INT16U port);

#endif /* end of DRV_ESP8266_H */
