#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*宣告cname及ename字元陣列用來存放字串*/
    char cname[20],ename[20];
    
	printf("\n請輸入中文名字：");
	scanf("%s",&cname); 	/*輸入字元數目不拘*/
	printf("你的名字 : %s ", cname);
	printf("\nPlease input your english name：");
	scanf("%s",&ename);
	printf("Your english name : %s", ename);
	printf("\n\n");

    system("PAUSE");	
	return 0;
}
