#include "queue.h"
#include "queue1.h"
int main() {
	linkqueue q;
	initqueue(&q);
	int i;
	int a[] = { 1,3,5,6,7 };
	for(i=0;i<5;i++) enqueue(&q, a[i]);
	queuetraverse(q, print);
	qelemtype e;
	dequeue(&q, &e);
	printf("%d\n", e);
	destroyqueue(&q);
	system("pause");
	return 0;
}