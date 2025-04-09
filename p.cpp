#include <iostream>
#include <string>
using namespace std;
 class cart{
     private:
      int number[5];
       string *name;
       public:
       cart(int num,string nam){
	   number-num;
	   name=new string[strlen(nam)+1]; }
       cart(const cart& other){
           number[5] = {0};
           name = new string[5];
           for(int i = 0; i < 5; i++){
               number[i] = other.number[i];
               name[i] = other.name[i];
           }
       }
       void setter(int n[5], string *na)
       {
           for (int i=0;i<5;i++){
               number[i]=n[i];
               name[i] = na[i];
           }
       }
       void display()
       {
           for(int i=0;i <5;i++){
             cout<<name[i]<<"  "<<number[i]<<endl;
           }
       }
       ~cart(){
           delete []name;
       }
 };
 int main(){
   cart h(1,"APPLE");
   h.setter({2,3,4,5,6},{"BANANA","ORANGE","PEAR","GRAPE","WATERMELON"});
   h.display();
     system("pause");
     return 0;
 }
