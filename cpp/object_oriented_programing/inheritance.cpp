#include<iostream>
using namespace std;
class Animal{
    public:
    void eat()
    {
        cout<<"eat..."<<endl;
    }
};
class dog : public Animal{
    public:
    void tail()
    {
        cout<<"have tail..."<<endl;
    }
};
class lion : public dog{
    public:
    void roar()
    {
        cout<<"Roar..."<<endl;
    }
};
int main()
{
   lion l1;
   cout<<"loin can ";l1.eat();
   cout<<"loin can ";l1.tail();
   cout<<"loin can ";l1.roar();
   
}