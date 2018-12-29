#include "ff.h"
 
#include "define.h"



typedef struct 
{
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
} function ;







extern FATFS *FatFs[_VOLUMES];



//函数初始化，应用程序传来的函数接口
u32 fun_init(function *f)
{
	mymalloc=f->mymalloc;
	myfree=f->myfree;
	flash_read=f->flash_read;
	flash_write=f->flash_write;
	sd_read=f->sd_read;
	sd_write=f->sd_write;
	sd_GetSectorCount=f->sd_GetSectorCount;
	sd_Initialize=f->sd_Initialize;
	sd_Reset=f->sd_Reset;
	sd_WaitReady=f->sd_WaitReady;
	
	
	
	FatFs[0]=(FATFS*)mymalloc(sizeof(FATFS));
	FatFs[1]=(FATFS*)mymalloc(sizeof(FATFS));
	
	if (!(FatFs[0]&&FatFs[1]))
	{
		myfree(FatFs[0]);
		myfree(FatFs[1]);
		return 0xffffffff;//返回失败
	}
	
	return 0x55aaaa55;
}





















