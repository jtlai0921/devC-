#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  	float a, b, c;
	printf("1.�п�J A ����G");
	scanf("%f", &a);
	printf("2.�п�J B ����G");
	scanf("%f", &b);
	printf("3.�п�J C ����G");
	scanf("%f", &c);
		
    if((pow(a,2)+pow(b,2))==pow(c,2)||(pow(a,2)+pow(c,2))==pow(b,2)||(pow(b,2)+pow(c,2))==pow(a,2))
      printf("\n >>> �o�O�@�Ӫ����T����!" );
    else
      printf("\n >>> �o���O�@�Ӫ����T����!");
    printf("\n\n");
      
	system("PAUSE");	
	return 0;
}
