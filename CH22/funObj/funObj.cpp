#include <cstdlib>
#include <iostream>
#include <functional>
#include <string>
#include <map>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
   typedef map<string, string, greater<string> >  my_map ;
	my_map container;
	container.insert (my_map::value_type 
		("vb001", "Visual Basic 2017��¦���׽�"));
	container.insert (my_map::value_type 
		("cs001", "Visual C# 2017��¦���׽�"));
	container.insert (my_map::value_type
		("cs002", "Visual C# 2017�{���]�p�g��"));
	my_map::iterator ptr;
	cout << "�Ѹ�\t�ѦW\n";
	cout << "=====================================\n";
	for (ptr=container.begin (); ptr!=container.end(); ptr++){
		cout << ptr->first << "\t" << ptr->second << "\n";
	}
	cout << "\n";
	system("PAUSE");
	return 0;
}
