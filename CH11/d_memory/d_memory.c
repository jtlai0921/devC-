#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *ptr, n, i, search_num, num=-1;
	printf(" 請問要輸入幾個整數：");
	scanf("%d", &n);
	ptr=(int*)malloc(sizeof(int)*n);	   /* 動態配置記憶體 */
	for(i=0;i<n;i++)
	{
		/* 將使用者輸入的資料放入指標ptr目前指向位址的記憶體空間 */
		printf("   第%2d個整數：", i+1);
		scanf("%d", ptr+i);
	}
	printf("\n");
	printf(" 請輸入要搜尋的數值：");
	scanf("%d", &search_num);
	for(i=0;i<n;i++)	/* 循序搜尋法 */
	{
		if(*(ptr+i)==search_num)
		{
			num=i; break;
		}
	}
	printf(" ========================\n");
	if(num==-1)		/* 顯示搜尋的結果 */
	{
		printf(" 沒有這個數字-> %d \n", search_num);
	}
	else
	{
		printf(" %d 是第 %d 個數字! \n", search_num, (num+1));
	}
	free(ptr);		/*釋放記憶體*/
	system("PAUSE");	
	return 0;
}
