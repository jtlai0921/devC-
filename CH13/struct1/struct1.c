#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

struct product
{
	char no[SIZE];
	char *name;
	int price;
} iPad,iPhone;

int main(int argc, char *argv[]) {
  	char str1[20];
	struct product iMac={"a003","iMac 2 筆電",25000};
	strcpy(iPad.no,"a001");
	iPad.name="iPad 2 平板";
	iPad.price=15000;
	printf(" 請輸入產品編號：");
	gets(iPhone.no);
	printf(" 請輸入產品名稱：");
	gets(str1);
	iPhone.name=str1;
	printf(" 請輸入產品單價：");
	scanf("%d",&iPhone.price);

	printf("\n ====== 產品單價清單 ====== \n\n");
	printf("\t產品編號：%s\n", iPad.no);
	printf("\t產品名稱：%s\n", iPad.name);
	printf("\t產品單價：%d\n\n", iPad.price);

	printf("\t產品編號：");
	puts(iPhone.no);
	printf("\t產品名稱：");
	puts(iPhone.name);
	printf("\t產品單價：%d\n\n", iPhone.price);

	printf("\t產品編號：%s\n", iMac.no);
	printf("\t產品名稱：%s\n", iMac.name);
	printf("\t產品單價：%d\n\n", iMac.price);

	system("PAUSE");	
	return 0;
}
