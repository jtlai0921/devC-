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
	//�w�]�غc���A�S���޼ƪ��غc��
	Employee()			
	{
	}		
	//���غc�������ǤJ�m�W�M�~��
	Employee(string name, int salary)
	{
		this->setName(name);
		this->setSalary(salary); 
	}
	//�Ѻc��, ����delete�ɷ|����Ѻc��
	~Employee()
	{
		cout << "���u->" << this->getName() << "�Q�R���F" << endl;
	}
	void ShowEmployee()
	{
		cout << "���u�m�W�G" << this->getName() << "   �~��G" << this->getSalary() << endl; 
	}
};

int main(int argc, char** argv) {
 	Employee *ptr1, *ptr2;	//�ŧi�ݩ�Employee���O��ptr1��ptr2����
	ptr1 = new Employee;	//�ϥ�new�ʺA�O�m����,���ɰ���w�]�غc��
	ptr1->setName("�����");	//���w�m�W
	ptr1->setSalary(55000);	//���w�~��
	ptr1->ShowEmployee ();	//����Employee���O��ShowEmployee()��k
	//�ϥ�new�ʺA�t�m�O����A�öǤJ�m�W���~��
	ptr2 = new Employee("�p��l", 45000);
	ptr2->ShowEmployee ();	//����Employee���O��ShowEmployee()��k
	cout << "delete ptr1  " ;
	delete ptr1;				//�ϥ�delete�B��l����O����A�ð���Ѻc��
	cout << "delete ptr2  ";
	delete ptr2;				//�ϥ�delete�B��l����O����A�ð���Ѻc��

  	system("PAUSE");
  	return 0;
}
