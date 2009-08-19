#ifndef __CONSOLE_H__
#define __CONSOLE_H__

#include <hypercall-x86_32.h>


int console_init (start_info_t *start);
int console_write (const char* msg);
void console_flush(void);


#endif
