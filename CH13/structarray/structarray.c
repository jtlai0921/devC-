#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX 3
struct product
{
	char no[5];
	char title[20];
	int price;
};

int main(int argc, char *argv[]) {
	int i, num=-1;
	struct product cd[MAX];
	char price[5];
	char keyin[5];
	printf(" ====  CD�ۤ��n�J�@�~ ==== \n\n");
	for (i=0;i<MAX; i++)
	{
		printf(" �� %d �iCD�s���G", i+1);
		gets(cd[i].no);
		printf("        CD���Y�G");
		gets(cd[i].title);
		printf("        ��  ���G");
		gets(price);
		cd[i].price=atoi(price);  /* �ϥ�atoi()�禡�N�r���ন��� */
		printf("\n");
	}
	printf("\n");
	printf(" �п�J�d�M��CD�s���G");
	gets(keyin);
	/* �`�Ƿj�M�k */
	for(i=0; i<3; i++)
	{
		if(strcmp(cd[i].no,keyin)==0)
		{
			num=i;
			break;
		}
	}
	/* ��ܴ`�Ƿj�M�k�����G */
	if(num==-1)
	{
		printf("\n   �d�L����� ! ....");
	}
	else
	{
		printf("\n�z�n�䪺CD �ԲӸ�Ʀp�U: \n");
		printf(" 1. CD �s�� : %s \n", cd[num].no);
		printf(" 2. CD ���Y : %s \n", cd[num].title);
		printf(" 3. ��   �� : %d \n", cd[num].price);
	}
	printf(" \n\n");

	system("PAUSE");	
	return 0;
}