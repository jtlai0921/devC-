#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char usr_id[7];
    char pwd[5];
    printf("\n ==== 帳號 & 密碼檢查 ==== \n");
    printf("\n 1. 請輸入帳號 (限六個字元)：");
	scanf("%s", usr_id);
	printf(" 2. 請輸入密碼 (限四個字元)：");
	scanf("%s", pwd);
	printf("\n");
	if (strcmp(usr_id , "yubest")==0 && strcmp(pwd,"1688")==0)
	{
		printf("\n >>> 帳號 和 密碼正確 ...  ^_^ !!\n");
		printf("\n >>> 歡迎進入本系統...\n\n");
	}
	else
	{
		printf("\n >>> 帳號 或 密碼輸入錯誤 ...  @_@ !!\n");
		printf("\n >>> 無法進入本系統...\n\n");
	}

	system("PAUSE");	
	return 0;
}
