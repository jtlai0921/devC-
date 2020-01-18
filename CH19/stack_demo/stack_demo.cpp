#include <cstdlib>
#include <iostream>

using namespace std;

class Stack	//定義Stack堆疊類別
{
private:
       //宣告三個指標
       //full表示堆疊頂端, empty表示堆疊底部, ptr表示目前堆疊移到的位置 
       int *full, *empty,  *ptr; 

public:
      //建構式
      Stack(int n)
      {
         ptr = new int[n];	//動態配置堆疊的數量 
         full = ptr + n ;  	//設定full堆疊頂端 
         empty = ptr;      	//設定empty堆疊底部 
      }
       //將資料放入堆疊的Push()方法 
      void Push(int n)
      {

          if (ptr==full)   	//判斷堆疊是否已滿 
          {
              cout << "    堆疊滿了";
              return;               
          }
          *ptr = n ;       	//將整數存入目前指標指向堆疊的位置 
          cout << "    壓入" << *ptr << "到堆疊內";
          ptr++;          	 	//堆疊指標位置往上移 
       }
       //將堆疊的資料彈出的Pop()方法 
       void Pop()
       {
          if (ptr==empty)  	//判斷堆疊是否已空 
          {
               cout << "    堆疊空了";
               return;                          
          }
          ptr--;          		//堆疊指標位置往下移
          cout << "    由堆疊彈出資料：" <<  *ptr;         
       }
       //印出堆疊的所有資料的PrintStack()方法 
       void PrintStack()
       {
           if (ptr==empty) 	//判斷堆疊是否已空
           {
               cout << "    堆疊內沒有資料";
               return;                
           }
           cout << "    印出堆疊內容：";
           int *lptr;
           lptr = ptr;
           do{     				//由目前堆疊位置開始印資料一直印到堆疊底部 
                if (lptr!=empty)
                {
                    lptr--;
                    cout << *lptr << " ";
                }
                else
                {
                    break;
                }
           }while(1);
           cout << endl;
       }
   };


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
   cout << "請輸入堆疊可存放的數量：";
   int num ;
   cin >> num;
   Stack s(num) ;     //建立Stack堆疊物件s，s物件可存放num個整數資料 
   int sel, input;
   do
   {
        cout << "\n\n=== Stack Operation ===\n";
        cout << "    1. Push Operation \n";
        cout << "    2. Pop Operation \n";
        cout << "    3. Printout Stack \n";
        cout << "    4. Quit \n";
        cout << "======================= \n";
        cout << "    請選擇 [0-3]：";
        cin >> sel ;         
        if (sel == 1)             
        {
             cout << "    請輸入要放入堆疊的資料：";
             cin >> input ;
             s.Push(input);    	//將input輸入的資料放入堆疊中 
        }
        else if (sel == 2)
        {
             s.Pop();          		//由堆疊內彈出資料 
        }
        else if (sel == 3)
        {
              s.PrintStack();   	//印出堆疊內所有的資料 
         }
         else if (sel == 4)
         {
              cout << "    離開系統 \n";
              break;
         }
         else
         {
              cout << "    === Error input(0-3)!! \n";
         }
   } while (1);
   system("PAUSE");
   return 0;
}
