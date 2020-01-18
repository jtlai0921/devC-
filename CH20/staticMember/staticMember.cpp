 #include <cstdlib>
 #include <iostream>
 #include <string>
 using namespace std;

 class Car
 {
 public:
	int No;						// 用來記錄是第幾部車
	static int Total ;			// 靜態資料成員(靜態變數)，記錄車子總數
	static void ShowTotalCars()	// 靜態成員函式(靜態方法)
	{
		cout << "現在共有 " << Total << " 部車子" << endl ;
	}
	void ShowMe(string vCarName)
	{
		cout << vCarName << " 是第 " << No << " 部車。" << endl;
	}
	Car()
	{
		Total += 1;
		No = Total;               //記錄車號
	}
	~Car()						//解構式
	{
		Total -= 1;
	}
 };
 int::Car::Total = 0;	//Car類別的靜態資料成員初始值為0


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
 	Car::ShowTotalCars();	// 呼叫靜態成員函式
	Car Benz ;//宣告第一部新車
	cout << "Benz 是第 " << Benz.No << " 部車" << endl;
	Car::ShowTotalCars();	// 呼叫靜態成員函式
	Car BMW ;   //宣告第二部新車
	Car Ford ;// 宣告第三部新車
	BMW.ShowMe("BMW");
	Ford.ShowMe("Ford");
	Car::ShowTotalCars();
	Car *MyCar;      				// 宣告一個 Car 的參考 
	Car::ShowTotalCars();		// 呼叫靜態成員
	MyCar = &BMW;    				// 將 MyCar 指向 BMW
	MyCar->ShowMe("MyCar");
	system("PAUSE");
return 0;

}
