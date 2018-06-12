extern status initqueue(linkqueue *q);
extern status destroyqueue(linkqueue *q);
extern status enqueue(linkqueue *q, qelemtype e);
extern status dequeue(linkqueue *q, qelemtype *e);
extern void print(qelemtype e);
extern status queuetraverse(linkqueue q, void(*vi)(selemtype));
