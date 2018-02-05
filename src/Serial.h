/*
 * Serial.h
 *
 *  Created on: 2018/01/04
 *      Author: horad
 */
//シリアル通信用プログラム
//
#ifndef SERIAL_H_
#define SERIAL_H_

/* 1次バッファ */
#define SERIAL_TMP_BUFSIZE	128

//シリアル通信用構造体
typedef struct _TAG_SERIAL* serial_t;

/* 関数プロトタイプ */
//シリアル通信用ストリームを開く
serial_t serial_open(char *pname, unsigned int baud);
//シリアル通信用ストリームを閉じる
void serial_close(serial_t obj);
//送信関数
unsigned int serial_send(serial_t obj, unsigned char *buf, unsigned int size);
//受信関数
unsigned int serial_recv(serial_t obj, unsigned char *buf, unsigned int size);



#endif /* SERIAL_H_ */


