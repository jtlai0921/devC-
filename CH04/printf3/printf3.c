#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("==1234567890\n");
	printf("1. %8d\n",123);
	printf("2. %8d\n",-123);
	printf("3. %-8d\n",123);
	printf("4. % -8d\n",123);
	printf("5. %-8d\n",-123);
	printf("6. %+8d\n",123);
	printf("7. %+8d\n",-123);
	printf("8. %-+8d\n",123);
	printf("9. %-+8d\n",-123);
	printf("10 %08d\n",123); 
	printf("11 %08d\n",-123);
	printf("12 %-08d\n",123);
	printf("13 %-08d\n",-123);
	printf("14 %+08d\n",-123);
	printf("15 %-+08d\n",-123);
	printf("16 % -8d\n",123);
	printf("17 % -2d\n",-123);
	system("PAUSE");	
	return 0;
}
