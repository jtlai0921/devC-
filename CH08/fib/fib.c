#include <stdio.h>
#include <stdlib.h>

int fib(int);

int main(int argc, char *argv[]) {
    printf("\n 費氏 f(6)第六項係數為： %d\n", fib(6));
	printf("\n 費氏 f10)第十項係數為： %d\n\n", fib(10));
    system("PAUSE");	
	return 0;
}
int fib(int n)
{
	if(n==1 || n==2)			/* 若n為1或2，執行第13行 */
	{
		return 1;				/* f(1)=1   f(2)=1   */
	}
	else						/* 若n>2則執行第17行  */
	{
		return fib(n-1)+fib(n-2);  /*呼叫函式自己本身  */
	}
}

