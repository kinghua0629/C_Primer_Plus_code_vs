//* two_func.c -- a program using two functions in one file */

#include <stdio.h>
void butler(void);

void butler(void)
{
	printf("You rang, sir?\n");
}

int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}