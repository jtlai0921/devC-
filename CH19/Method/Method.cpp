#include <cstdlib>
#include <iostream>

using namespace std;
class Car  {
private:
		int _x, _y;
public:
	void Move(int vX, int vY) {		//定義car類別擁有Move方法
		_x = vX;
		_y = vY;
	}
};


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
 	Car Benz ;
	Benz.Move (100, 200);
  	system("PAUSE");
  	return 0;
}
