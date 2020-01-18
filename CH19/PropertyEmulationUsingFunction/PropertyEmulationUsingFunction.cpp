#include <cstdlib>
#include <iostream>

using namespace std;
class Car  {
private:
	int _speed;

public:
  	int GetSpeed(){
		return _speed;
}
	void SetSpeed(int vSpeed){
		if (vSpeed < 0) {			// 速度不得低於 0
			vSpeed = 0;		    
		}
		if (vSpeed > 200) {	// 速度不得高於 200
			vSpeed = 200;	           
		}
		_speed = vSpeed;
	}
};


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
 	Car Benz ;
	Benz.SetSpeed(500);		// 速度值超過 200
	cout << Benz.GetSpeed () << endl;
  	system("PAUSE");
  	return 0;
}
