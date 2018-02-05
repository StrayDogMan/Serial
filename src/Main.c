/*
 * Main.c
 *
 *  Created on: 2018/01/04
 *      Author: horad
 */

#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include "Serial.h"

char *devName = "COM1";//COM NAME
unsigned int boudRate = 9600;//通信速度

int main (void)
{
	serial_t obj = serial_open(devName,boudRate);
	unsigned char buf[SERIAL_TMP_BUFSIZE], len;

	if ( obj == NULL ) {
		fprintf(stderr,"オブジェクト生成に失敗");
		return EXIT_FAILURE;
	}

	while (1) {
		len = serial_recv(obj,buf,sizeof(buf));
		if (len) serial_send(obj,buf,len);
		Sleep(1);
		if ( kbhit() )  break;
	}

	serial_close(obj);

	return EXIT_SUCCESS;
}
