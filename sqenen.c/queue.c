#include "queue.h"
status initqueue(linkqueue *q) {  //link queue  init
	(*q).front = (*q).rear = malloc(sizeof(qnode));
	if (!(*q).front) return ERROR;
	return OK;
}

status destroyqueue(linkqueue *q) { //link  queue destroy
	while ((*q).front) {
		(*q).rear = (*q).front->next;
		free((*q).front);
		(*q).front = (*q).rear;
	}
	return OK;
}

status enqueue(linkqueue *q, qelemtype e) {
	queueptr p = malloc(sizeof(qnode));
	if (!p) return ERROR;
	p->next = NULL;
	p->data = e;
	(*q).rear->next = p;
	(*q).rear = p;
	return OK;
}

status dequeue(linkqueue *q, qelemtype *e) {
	queueptr p;
	if ((*q).rear == (*q).front) return ERROR;
	p = (*q).front->next;
	*e = p->data;
	(*q).front->next = p->next;
	if ((*q).rear == p) (*q).rear = (*q).front;
	free(p);
	return OK;
}

void print(qelemtype e) {
	printf("%d\n", e);
}

status queuetraverse(linkqueue q,void (*vi)(qelemtype)) {
	queueptr p = q.front->next;
	while (p) {
		vi(p->data);
		p = p->next;
	}
	return OK;
 }