#include<iostream>
using namespace std;
int getsum(int arr[],int n)
{
    if(n==0) return 0;
    if(n==1) return arr[0];

    int remain = getsum(arr+1,size-1);
    int sum = arr[0]+remain;
    return sum;
} 