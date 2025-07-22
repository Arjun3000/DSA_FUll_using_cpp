#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
       size = size + 1;
       int i = size;
       arr[i] = val;

       while(i>1)
       {
        int parent = i/2;
        if(arr[i] > arr[parent])
        {
            swap(arr[i],arr[parent]);
            i = parent;
        }
        else
        {
            return;
        }
       }
    }
    void print()
    {
        int i;
        for(i = 0;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
   heap h;
   h.insert(20);
   h.insert(10);
   h.insert(8);
   h.insert(5);
   h.insert(7);
   h.print();
   h.insert(11);
   h.print();
}