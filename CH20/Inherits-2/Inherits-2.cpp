 #include <cstdlib>
 #include <iostream>
 #include <string>
 using namespace std;

 class MathA
 {
 public:
	int GetMax(int a, int b)	//����Ƥ��̤j��
	{
		return  (a>b) ? a:b;
	}
 };

 class MathB
 {
 public:
	int GetAbs(int a)				//���Y�Ƶ����
	{
		return  (a>0) ? a : -(a) ;
	}
};
//MathC�~�Ӧ�MathA�MMathB���O
//�]��MathC���O��GetMax, GetAbs, GetFactorial��k
class MathC: public MathA, public MathB
{
public :
	int GetFactorial(int a)		//�D�Y�ƶ��h
	{
		if (a==0)
		{
			return 1;
		}
		else
		{
			return (a * GetFactorial(a-1));
		}
	}
};


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
  	MathC objC;
		cout << "100�M65�̤j�ƬO�G" << objC.GetMax (100, 65) << endl;
		cout << "-99������ȡG" << objC.GetAbs (-99) << endl;
		cout << "5 ! ���h�G" << objC.GetFactorial (5) << endl;

   	system("PAUSE");
   	return 0;
}