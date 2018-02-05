/*
 * Fifo.h
 *
 *  Created on: 2018/01/04
 *      Author: horad
 */

#ifndef FIFO_H_
#define FIFO_H_

#define FIFO_BUFSIZE	1024

/* FIFOデータ構造 */
typedef struct _TAG_FIFO {
	unsigned char buf[FIFO_BUFSIZE];
	unsigned int size;
	unsigned int read;
	unsigned int write;
}fifo_t;

/* プロトタイプ */
//インスタンス生成
fifo_t *fifo_create(void);
//インスタンス消去
void fifo_delete(fifo_t *obj);
//データを書き込む
unsigned int fifo_write(fifo_t *obj, unsigned char *buf, unsigned int size);
//データを読み込む
unsigned int fifo_read(fifo_t *obj, unsigned char *buf, unsigned int size);
//格納されているデータ数を取得する
unsigned int fifo_length(fifo_t *obj);

#endif /* FIFO_H_ */
