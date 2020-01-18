#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

#include "shopping.h"	/*含入shopping.h標頭檔*/

int main(int argc, char *argv[]) {
  	extern int total;		/*使用shopping.h的total全域變數*/
	char ch;
	int keyin;
	do
	{
		printf("   請輸入購物金額：");
		scanf("%d", &keyin);
		printf("   目前應付總金額：%d\n", buy(keyin));
		printf("是否(y/n)繼續購物：");
		ch=toupper(getche());
		printf("\n\n");
	}while(ch=='Y');	
	printf("謝謝您的購買，總共 %d 元\n", total);
	system("PAUSE");	
	return 0;
}
