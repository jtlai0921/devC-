#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char usr_id[7];
    char pwd[5];
    printf("\n ==== �b�� & �K�X�ˬd ==== \n");
    printf("\n 1. �п�J�b�� (�����Ӧr��)�G");
	scanf("%s", usr_id);
	printf(" 2. �п�J�K�X (���|�Ӧr��)�G");
	scanf("%s", pwd);
	printf("\n");
	if (strcmp(usr_id , "yubest")==0 && strcmp(pwd,"1688")==0)
	{
		printf("\n >>> �b�� �M �K�X���T ...  ^_^ !!\n");
		printf("\n >>> �w��i�J���t��...\n\n");
	}
	else
	{
		printf("\n >>> �b�� �� �K�X��J���~ ...  @_@ !!\n");
		printf("\n >>> �L�k�i�J���t��...\n\n");
	}

	system("PAUSE");	
	return 0;
}
