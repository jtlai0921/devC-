#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
		char bkname[30];				// 宣告bkname字元陣列(字串)
		int price;					// 宣告price整數變數
		double discount;				// 宣告discount浮點變數
		cout << "請輸入書名：";
		cin >> bkname;				// 將鍵盤輸入的資料指定給bkname
		cout << "請輸入單價：";
		cin >> price;				// 將鍵盤輸入的資料指定給price
		cout << "請輸入折扣：";
		cin >> discount;				// 將鍵盤輸入的資料指定給discount
		cout << "\n===印出資料如下===\n";
		cout << bkname	<< "是一本好書~\n";
		cout << " 單價："<< price	<< "\n";
		cout << " 折扣："<< discount << "\n";
		cout << " 總價："<< price * discount << "\n";
    	system("PAUSE");
    	return 0;
}
