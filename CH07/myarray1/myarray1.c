#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[10];
	int i, str_num;
	printf("��J�z���^��m�W�G");
	gets(name);  /*��J�r��ñN�C�@�Ӧr���v�@���name�}�C������*/
	printf("%s �z�n^_^\n", name);	/*���name�r��*/
	str_num=strlen(name);	/* strlen()�禡�i�p��r�꦳�X�Ӧr�� */
	printf("\nname�}�C�����p�U�G\n");
	for(i=0; i<str_num; i++)	/* �v�@�L�Xname�C�@�Ӱ}�C�������� */
	{
		printf("name[%d]=%c\n", i, name[i]);
	}
	printf(" \n");
    system("PAUSE");	
	return 0;
}
