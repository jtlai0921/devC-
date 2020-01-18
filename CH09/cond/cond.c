#include <stdio.h>
#include <stdlib.h>

#define LEVEL 2	/* 只要更改數字，編譯器會依條件選擇編譯 */
#if LEVEL==1		
  #define ROOM "總統套房"
#elif LEVEL==2
  #define ROOM "蜜月套房"
#elif LEVAL==3
  #define ROOM "尊爵雙人房"
#else
  #define ROOM "山水/風情標準房"
#endif

int main(int argc, char *argv[]) {
  	printf(" ===歡迎光臨-華福酒店===\n\n");
	printf(" 您的會員等級是 %d\n", LEVEL);
	printf(" 可以住的房間是 %s\n", ROOM);
	printf("\n");
	system("PAUSE");	
	return 0;
}
