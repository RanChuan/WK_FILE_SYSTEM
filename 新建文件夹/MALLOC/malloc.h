#ifndef __MALLOC_H
#define __MALLOC_H
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEK ������
//�ڴ���� ����		   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//��������:2011/7/5 
//�汾��V2.0
//��Ȩ���У�����ؾ���
//Copyright(C) ����ԭ�� 2009-2019
//All rights reserved
//********************************************************************************
//V2.0 20111008
//1,����޸Ľӿں���,���Ӷ���ڴ�Ĺ���.
////////////////////////////////////////////////////////////////////////////////// 	  

//typedef unsigned long  u32;
//typedef unsigned short u16;
//typedef unsigned char  u8;	  
#ifndef NULL
#define NULL 0
#endif

#define SRAMIN	0	//�ڲ��ڴ��
#define SRAMEX  1	//�ⲿ�ڴ��




extern void *(*mymalloc)(u32 size);

extern void (*myfree)(void *point);



#endif













