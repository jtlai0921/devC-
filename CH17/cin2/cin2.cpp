#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
   	char bkname[50];
		int price;
		double discount;
		cout << "請輸入書名：";
		gets(bkname);            // gets_s() for VC++ 
		cout << "請輸入單價：";
		cin >> price;
		cout << "請輸入折扣：";
		cin >> discount;
		cout << "\n===印出資料如下===\n";
		cout << bkname	<< "是一本好書~\n";
		cout << " 單價："<< price	<< "\n";
		cout << " 折扣："<< discount << "\n";
		cout << " 總價："<< price * discount << "\n";
   	system("PAUSE");
	return 0;
}
