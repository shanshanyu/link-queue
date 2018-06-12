#ifndef SQUEUE_H
#define SQUEUE_H
#include <stdio.h>
#include <stdlib.h>
#define OK 1
#define ERROR 0
typedef int status;
typedef int qelemtype;
typedef struct qnode {
	qelemtype data;
	struct qnode *next;
}qnode,*queueptr;

typedef struct {
	queueptr front;
	queueptr rear;
}linkqueue;
#endif