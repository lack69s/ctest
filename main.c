#include <stdio.h>

static int i = 1;
void foo(void);

int main(void)
{
	int i = 0;
	{
		extern int i;
		printf("external linkage:%d\n", i);
	}
	foo();
	printf("none linkage:%d\n", i);
   return 0;
}

void foo(void)
{
	extern int i;
	printf("internal linkage:%d\n", i);
}