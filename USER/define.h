
#include "sys.h"




extern void *(*mymalloc)(u32 size);

extern void (*myfree)(void *point);


extern	void (*flash_read)(u8 *buff,u32 addr,u32 size);
extern	void (*flash_write)(u8 *buff,u32 addr,u32 size);
extern	u8 (*sd_read)(u8*buf,u32 sector,u8 cnt);
extern	u8 (*sd_write)(u8*buf,u32 sector,u8 cnt);
	
extern	u32 (*sd_GetSectorCount)(void);
extern	u8 (*sd_Initialize)(void);
extern	void (*sd_Reset)(void);
extern	u8 (*sd_WaitReady)(void);








