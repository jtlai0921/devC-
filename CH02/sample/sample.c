#include <stdio.h>
#include <stdlib.h>
# define MSG1 " 金    額 : "   	/* 程式中 "金   額:" 以MSG1符號取代 */
# define MSG2 " 稅    金 : "   	/* 程式中 "稅    金:" 以MSG2符號取代 */
# define MSG3 " 含稅金額 : "   	/* 程式中 "含稅金額:" 以MSG3符號取代 */
# define TAX_RATE 0.05       	/* 程式中 稅率 5%=0.05 以Tax_Rate符號取代 */

int price=2000;   /* 宣告price售價為全域整數變數並設定初值 */
float get_tax(void);  /* 宣告get_tax()為自訂函式  */

int main(int argc, char *argv[]) {
	float total;    /* 宣告total含稅金額為區域變數，資料型別為浮點數 */
	printf(" %s %d \n\n" , MSG1, price);  /* 顯示未稅金額 */
	total = price + get_tax();        	 /* 將售價加稅金 存入total變數中 */
	printf(" %s %.2f \n\n" , MSG3, total); /* 顯示含稅金額 */
	
	system("PAUSE");		 /* 暫停執行以觀看執行結果 */
	return 0;
}
float get_tax()  /* 計算稅金 */
{
	float tax;              /* 宣告tax稅金為區域變數，資料型別為浮點數 */
	tax=price*TAX_RATE;  /* 將售價乘以稅率存入tax 變數 */
	printf(" %s %.2f \n" , MSG2, tax);  /* 顯示稅金 */
	return(tax);       /* 將tax稅金傳回main()主函式 呼叫處*/
}
