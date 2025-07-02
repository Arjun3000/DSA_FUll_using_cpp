#include<iostream>
using namespace std;
bool issort(int arr[],int size)
{
    if(size==0|| size == 1) return true;
    if(arr[0]>arr[1]) return false;
    
    else
    {
        return issorted(arr+1,size -1);
        
    }
} 

