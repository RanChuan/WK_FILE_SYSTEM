

; 函数向量表
                AREA    RESET, DATA, READONLY
                EXPORT  __Vectors
                EXPORT  __Vectors_End
                EXPORT  __Vectors_Size
				IMPORT  	fun_init
				IMPORT  	f_mount
				IMPORT     	f_open
				IMPORT     	f_read
				IMPORT		f_lseek
				IMPORT		f_close
				IMPORT		f_opendir
				IMPORT		f_readdir
				IMPORT		f_stat
				IMPORT		f_write
				IMPORT		f_getfree
				IMPORT		f_truncate
				IMPORT		f_sync
				IMPORT		f_unlink
				IMPORT		f_mkdir
				IMPORT		f_chmod
				IMPORT		f_utime
				IMPORT		f_rename
				IMPORT		f_chdrive
				IMPORT		f_chdir
;				IMPORT		f_getcwd
;				IMPORT		f_forward
				IMPORT		f_mkfs
;				IMPORT		f_fdisk
				IMPORT		f_putc
				IMPORT		f_puts
				IMPORT		f_printf
				IMPORT		f_gets

__Vectors       DCD     fun_init               ; 初始化函数
				DCD     f_mount 
				DCD     f_open
				DCD     f_read
				DCD		f_lseek
				DCD		f_close
				DCD		f_opendir
				DCD		f_readdir
				DCD		f_stat
				DCD		f_write
				DCD		f_getfree
				DCD		f_truncate
				DCD		f_sync
				DCD		f_unlink
				DCD		f_mkdir
				DCD		f_chmod
				DCD		f_utime
				DCD		f_rename
				DCD		f_chdrive
				DCD		f_chdir
				DCD		0;f_getcwd
				DCD		0;f_forward
				DCD		f_mkfs
				DCD		0;f_fdisk
				DCD		f_putc
				DCD		f_puts
				DCD		f_printf
				DCD		f_gets
__Vectors_End

__Vectors_Size  EQU  __Vectors_End - __Vectors

                AREA    |.text|, CODE, READONLY
                
                

                 END

;******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE*****
