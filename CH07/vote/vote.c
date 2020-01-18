#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/* name夹皚4簈琍﹎ */
	char *name[]={"㏄地ǎ","糂眔地","眎厩Τ","辩绰"};
	int vote[4][3]=		/* vote皚4簈琍1-3跋眔布计 */
	        	 { 
				   {700,600,300}, 
				   {1000,500,200},
			       {500,700,300},
				   {1200,400,800},
				 };
	/* personTot皚4簈琍眔布计琌簈琍1-3跋羆眔布计 */
	int personTot[4]={0,0,0,0}; 	
	int total=0, i, j;			/* total羆眔布计 */
	printf("\n 簈琍﹎\t材跋\t材跋\t材跋\t羆眔布计\n");
	printf("====================================");
	printf("====================================\n");
	for(i=0;i<4;i++)	
	{
	printf(" %s", name[i]);
		for(j=0;j<3;j++)			
		{
		printf("\t\t%d", vote[i][j]);/*材i簈琍材j跋布计*/
			personTot[i]+=vote[i][j]; 	/* 璸衡材i簈琍眔布计 */
			total+=vote[i][j];		/* 璸衡羆眔布计 */
		}
		printf("\t\t%d", personTot[i]);	/* –簈琍眔布计 */
		printf("\n");
	}
	printf("====================================");
	printf("====================================\n");
	printf("\n");
	for(i=0;i<4;i++)	/* 璸衡4簈琍羆眔布瞯 */
	{
		printf(" %s 眔布瞯%5.2f ", name[i], (float)personTot[i]*100/total);
		printf("\n");
	}
	printf("\n");
	system("PAUSE");	
	return 0;
}
