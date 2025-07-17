#include<iostream>
using namespace std;
class student{
    //create private data members
    private:
    string name;
    int id;

    public:
    student(string n, int i)
    {
        name = n;
        id = i;
    }
    
    void setnew(string n, int i)
    {
        name  = n;
        id = i;
    }
    string getnew()
    {
        return name;
    }
};
int main()
{
    student s1("jhon",13);
    cout<<"Before : "<<s1.getnew()<<endl;
    s1.setnew("Raj",14);
    cout<<"After : "<<s1.getnew()<<endl;
}