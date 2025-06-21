#include<iostream>
using namespace std;
class student
{
  //variables mainly called as data members
  public:
  string name;
  int age;
  int ID;
  //member function which tells the behavior of the class
  void getname()
  {
    cout<<"name of the student is : "<<name<<endl;
  }
  string getname2(){
    return name;
  }
};
int main()
{
   student s1;
   student s2;

   s1.name = "Arjun";
   s2.name = "Raman";
   s1.age = 21;
   s2.age = 20;
   s1.ID = 1234;
   s2.ID = 2345;
   
   cout<<s1.name<<" "<<s1.ID<<" "<<s1.age<<endl;
   cout<<s2.name<<" "<<s2.ID<<" "<<s2.age<<endl;
   
   s1.getname();
   cout<<"name of the student is : "<<s2.getname2()<<endl;
}