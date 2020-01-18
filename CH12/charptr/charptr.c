#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i,k, max, min, max_index=0, min_index=0;
	int price[5]={400,320,350,150,280};
	char *name[5]={"王牌蛋糕","小王煎餅","牛肉肉干","精緻蛋捲","胖胖果汁"};
	printf(" 產品名稱\t單價\n");
	printf(" ===================\n");
	for(i=0;i<5;i++)		/*印出產品及單價*/
	{
		printf(" %s\t%d\n", name[i], price[i]);
	}
	max=price[0];
	min=price[0];
	for(i=1,k=1;i<5;i++,k++)
	{
		if(price[i]>max)
		{
			max=price[i]; 	/*將目前陣列元素存入max變數*/
			max_index=i;	/*將目前找出最大值的註標存入此變數*/
		}
		if(price[i]<min)
		{
			min=price[k];	/*找出最小值*/
			min_index=k; 	/*找出最小值在第幾個元素*/
		}
	}
	printf("\n");
	printf(" 最 貴 的產品: %s, 單價 : %d\n",name[max_index], 
		price[max_index]);
	printf(" 最便宜的產品 :%s, 單價 : %d\n",name[min_index], 
		price[min_index]);
	printf("\n");
	system("PAUSE");	
	return 0;
}
