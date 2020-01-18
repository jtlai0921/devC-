#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <io.h>
#define LEN 100

typedef struct 			/*定義書籍結構*/
{
	char bookid[6];		/*書號*/
	char bookname[30];	/*書名*/
	int price;		/*單價*/
	int qty;		/*單價*/
	char flag[3];	/*刪除旗標*/
}book;

int main(int argc, char *argv[]) {
  	FILE *fptr;
	char fpath[LEN], t_price[10], t_qty[10];
	int fno, fsize, rectot;
	book mybook;
	printf("請選擇項目->1.開新檔  2.開舊檔：");
	if(getche()=='1')
	{
		printf("\n請輸入新檔案路徑：");
		gets(fpath);
		fptr=fopen(fpath, "w+");
	}
	else
	{
		printf("\n請輸入欲開啟的檔案路徑：");
		gets(fpath);
		fptr=fopen(fpath, "a+");
	}
	if(fptr==NULL)
	{
		printf("\n開檔失敗, %s 可能不存在\n", fpath);
		exit(0);
	}
	while(1)
	{
		printf("\n請問是否要繼續新增資料(Y/N)：");
		if(toupper(getche())=='Y')
		{
			printf("\n請輸入要新增的資料->\n");
			printf("書號：");
			gets(mybook.bookid);		
			printf("書名：");
			gets(mybook.bookname );
			printf("單價：");
			gets(t_price);
			mybook.price = atoi(t_price);
			printf("庫存：");
			gets(t_qty);
			mybook.qty = atoi(t_qty);
            /*將結構寫入檔案*/
			fwrite(&mybook, sizeof(mybook), 1, fptr);
		}
		else
		{
			fclose(fptr);
			break;	
		}
	}
	fptr=fopen(fpath, "r");	
	fno=fileno(fptr);
	fsize=filelength(fno);
    /*取得記錄總筆數*/
	rectot=filelength(fileno(fptr))/sizeof(book);	
	printf("\n資料更新完成...");
	printf("\n%s 目前檔案大小 %d Bytes\n", fpath, fsize);
	printf("%s 資料檔內容如下\n", fpath);
	printf("\n記錄總筆數：%d\n", rectot);
	/* 判斷是否還有資料*/
	while(fread(&mybook, sizeof(mybook), 1, fptr)!=NULL)
	{	/*取出一筆記錄，檔案指標再往後移動一筆記錄的長度*/
		printf("%6s %30s %5d %5d\n", 
			mybook.bookid, mybook.bookname, mybook.price, mybook.qty);
	}
	fclose(fptr);
	printf("\n");

    system("PAUSE");	
	return 0;
}
