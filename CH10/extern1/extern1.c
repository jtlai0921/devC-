#include <stdio.h>
#include <stdlib.h>

void fun1();
void fun2();

int main(int argc, char *argv[]) {
  	extern int i;  /* 宣告外部變數 */
	printf("==>  in main()  i=%d\n",i++);
	fun1();
	fun2();
	system("PAUSE");	
	return 0;
}
void fun1()
{
	extern int i;
	printf("==>  in fun1()  i=%d\n",i++);
}

int i=10;          /* 宣告全域變數 */

void fun2()
{
	printf("==>  in fun2()  i=%d\n",i);
}
