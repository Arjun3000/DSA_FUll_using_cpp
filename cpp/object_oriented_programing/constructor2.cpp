#include<iostream>
using namespace std;
class student
{
  public:
  string name;
  int age;
  int roll_no;

  student(string name, int age, int roll_no)
  {
   name = name ;
   age = age;
   roll_no = roll_no;
     
    cout<<name<<" is "<<age<<" years old and his roll no is "<<roll_no<<endl;

  }

};
int main()
{
   student s1("Arjun",21,2);
   student s2("Raman",22,3);
}