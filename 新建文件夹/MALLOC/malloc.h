#ifndef __MALLOC_H
#define __MALLOC_H
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK 开发板
//内存管理 代码		   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//创建日期:2011/7/5 
//版本：V2.0
//版权所有，盗版必究。
//Copyright(C) 正点原子 2009-2019
//All rights reserved
//********************************************************************************
//V2.0 20111008
//1,大幅修改接口函数,增加多块内存的管理.
////////////////////////////////////////////////////////////////////////////////// 	  

//typedef unsigned long  u32;
//typedef unsigned short u16;
//typedef unsigned char  u8;	  
#ifndef NULL
#define NULL 0
#endif

#define SRAMIN	0	//内部内存池
#define SRAMEX  1	//外部内存池




extern void *(*mymalloc)(u32 size);

extern void (*myfree)(void *point);



#endif













