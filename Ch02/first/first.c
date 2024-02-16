// first.c
#include <stdio.h>
int main(void)
{
	int num;
	printf("What's your favourite number?\n");
	scanf_s("%d", &num);
	printf("I'm a simple ");
	printf("computer.\n");
	printf("My fvourite number is %d because it's the first.\n", num);
	return 0;
}