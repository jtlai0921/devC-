#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*�ŧicname��ename�r���}�C�ΨӦs��r��*/
    char cname[20],ename[20];
    
	printf("\n�п�J����W�r�G");
	scanf("%s",&cname); 	/*��J�r���ƥؤ���*/
	printf("�A���W�r : %s ", cname);
	printf("\nPlease input your english name�G");
	scanf("%s",&ename);
	printf("Your english name : %s", ename);
	printf("\n\n");

    system("PAUSE");	
	return 0;
}
