#include <stdio.h>
using namespace std;

struct point{ int x; };

int main() {
	struct point* p;
	struct point q;
	(*(&q)).x = 2;
	p = &q;
	q.x = (&q)->x - 1;

	printf("%d", p->x);

	return 0;
}