//constructor is a special member function which called automatically when an object is created
//it will have same name as class
//have no return type
#include<iostream>
using namespace std;
class student
{
  public:
  int age;
  string name;

  
  student(int i,string j)//constructor same name as class with no return type
  {
    age = i;
    name = j;
    cout<<"hello world!"<<endl;
    cout<<i<<" "<<j<<endl;
  }
};
int main()
{
   student s1(20,"Arjun");
   student s2(21,"Raman");
   //cout<<s1.age()<<" "<<s1.name()<<endl;

}

