

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
  	char bkname[]="C&C++程式設計經典";
		int price=600;
		double discount=0.8;
		cout << bkname	<< "是一本好書~\n\n";			//輸出bkname字串
		cout << " 單價："<< price << "\n\n";			//輸出price整數
		cout << " 折扣："<< discount	<< "\n\n";		//輸出discout浮點數
		cout << " 總價："<< price * discount<< "\n\n";	//輸出運算式的結果
   	system("PAUSE");
   	return 0;
}


