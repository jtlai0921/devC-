#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str("C&C++程式設計經典");
	int s, e;
	cout << "字串輸出：" << str << endl;
	cout << "字串長度：" << str.length() << endl;
	cout << "請輸入要從第幾個字開始刪除：";
	cin >> s;
	cout << "請問要刪除幾個字：";
	cin >> e;
	str.erase(s, e);					//將str字串中第s個字開始刪除e個字
	cout << "字串刪除後：" << str << endl;
	string input;
	cout << "請輸入要插入的字串：" ;
	cin >> input;
	str.insert(0, input, 0, input.length()); //在str字串中指定的位置插入子字串
	cout << "字串更新：" << str << endl;
	system("PAUSE");
	return 0;
}
