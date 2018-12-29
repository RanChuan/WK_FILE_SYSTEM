


#include "define.h"






void *(*mymalloc)(u32 size); 


void (*myfree)(void *point);



	void (*flash_read)(u8 *buff,u32 addr,u32 size);
	void (*flash_write)(u8 *buff,u32 addr,u32 size);
	u8 (*sd_read)(u8*buf,u32 sector,u8 cnt);
	u8 (*sd_write)(u8*buf,u32 sector,u8 cnt); 
	
	u32 (*sd_GetSectorCount)(void);
	u8 (*sd_Initialize)(void);
	void (*sd_Reset)(void);
	u8 (*sd_WaitReady)(void);







