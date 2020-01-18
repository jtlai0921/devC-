#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class Traffic
{        
protected:
	static int _miles; 			//_miles用來記錄前進的公里數
public:	 
	virtual void SpeedUp()=0;	//SpeedUp為純虛擬函式，表示Traffic為抽象類別
};

int Traffic::_miles = 0;		//_miles靜態成員初始化為0

class Car : public Traffic
{
public:
	void SpeedUp()  				//Car子類別必須覆寫SpeedUp()方法
	{
		_miles += 2;
		cout << "駕駛車子, 加速中, 前進" << _miles <<"公里" << endl;
	}
};
class Airplane : public Traffic
{
public:
	void SpeedUp()				//Airplane子類別必須覆寫SpeedUp()方法
	{
		_miles += 15;
		cout << "駕駛飛機, 加速中, 前進" << _miles << "公里" << endl;
	}
};


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
   Traffic *r;					//r是Taffic類別的物件指標
	Car myCar ;					//myCar是Car的物件實體, 同時繼承Taffic
	Airplane myAirplane ;		//myAirplane是Airplane的物件實體
                               	//同時繼承Taffic
	int input;
	while (true)
	{
		cout <<"請問要駕駛->1.車子  2.飛機  其他.離開：";
		cin >> input ;
		if (input == 1)
		{
			r = &myCar;       	//開車子, r指標指向myCar物件實體的位址
		}
		else if (input == 2)
		{
			r = &myAirplane;  	//開飛機, r指標指向myAirplane物件實體的位址
		}
		else
		{
			break;
		}
		r->SpeedUp();			//呼叫r指標指向物件實體的SpeedUp()方法
		cout << endl;
	}

    system("PAUSE");
    return 0;

}
