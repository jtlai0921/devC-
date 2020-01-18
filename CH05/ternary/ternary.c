#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age;
	printf("=== 電影購票 ===\n");
	printf("請輸入您的年齡：");
	scanf("%d", &age);
	printf("您要購買票別的是 %s ! ^_^ ... \n", age>=60? "優待票": (0<=age && age<=12 ? "兒童票" : "成人票"));	
    printf("\n\n");
    system("PAUSE");	
	return 0;
}
