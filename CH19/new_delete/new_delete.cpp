#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
class Employee
{
private :
	string _name;
	int _salary;
	
public :
	void setName(string value) {
	    _name = value;
	}
	string getName() {
	    return _name;
	}
	void setSalary(int value){
		if (value < 22000 || value > 60000){
			_salary = 22000;
		}else{
			_salary = value;
		}
	}
	int getSalary(){
		return _salary;
	}
	void print(){
		cout << getName() << "\t" << getSalary()  << endl;		
	}
	//預設建構式，沒有引數的建構式
	Employee()			
	{
	}		
	//此建構式必須傳入姓名和薪資
	Employee(string name, int salary)
	{
		this->setName(name);
		this->setSalary(salary); 
	}
	//解構式, 執行delete時會執行解構式
	~Employee()
	{
		cout << "員工->" << this->getName() << "被刪除了" << endl;
	}
	void ShowEmployee()
	{
		cout << "員工姓名：" << this->getName() << "   薪資：" << this->getSalary() << endl; 
	}
};

int main(int argc, char** argv) {
 	Employee *ptr1, *ptr2;	//宣告屬於Employee類別的ptr1及ptr2指標
	ptr1 = new Employee;	//使用new動態記置憶體,此時執行預設建構式
	ptr1->setName("王鍵民");	//指定姓名
	ptr1->setSalary(55000);	//指定薪資
	ptr1->ShowEmployee ();	//執行Employee類別的ShowEmployee()方法
	//使用new動態配置記憶體，並傳入姓名及薪資
	ptr2 = new Employee("小桃子", 45000);
	ptr2->ShowEmployee ();	//執行Employee類別的ShowEmployee()方法
	cout << "delete ptr1  " ;
	delete ptr1;				//使用delete運算子釋放記憶體，並執行解構式
	cout << "delete ptr2  ";
	delete ptr2;				//使用delete運算子釋放記憶體，並執行解構式

  	system("PAUSE");
  	return 0;
}
