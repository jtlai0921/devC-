#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
   	char bkname[50];
		int price;
		double discount;
		cout << "�п�J�ѦW�G";
		gets(bkname);            // gets_s() for VC++ 
		cout << "�п�J����G";
		cin >> price;
		cout << "�п�J�馩�G";
		cin >> discount;
		cout << "\n===�L�X��Ʀp�U===\n";
		cout << bkname	<< "�O�@���n��~\n";
		cout << " ����G"<< price	<< "\n";
		cout << " �馩�G"<< discount << "\n";
		cout << " �`���G"<< price * discount << "\n";
   	system("PAUSE");
	return 0;
}
