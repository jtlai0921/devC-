#include <cstdlib>
#include <iostream>

using namespace std;
class Car{		//定義Car類別有X和Y屬性
public:
 int X;
 int Y;
};


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
  Car Benz ;		//宣告Car類別的Benz物件
  Benz.X = 100;	//設定Benz物件的X屬性值等於100
  Benz.Y = 200; 	//設定Benz物件的Y屬性值等於200
  system("PAUSE");
  return 0;

}
