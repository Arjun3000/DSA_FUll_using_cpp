/*#include<iostream>
using namespace std;
int main()
{
  int n,i,j;
  cout<<"enter rows : ";
  cin>>n;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
        cout<<"*";
    }
    cout<<endl;
  }
}
#include<iostream>
using namespace std;
int main()
{
  int n,i,j;
  cout<<"enter rows : ";
  cin>>n;
  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
  }
}

#include <iostream>
using namespace std;

int main() {
    int n,i,j;
    cout<<"enter no of rows: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter rows : ";
    cin>>n;

    int i,j,k,l;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(k=0;k<2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l=1;
    cout<<"enter rows : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<l;
            l++;
        }
        cout<<endl;
    }
    

}

#include<iostream>
using namespace std;
int main()
{
    int num,i,j,k,l;
    cout<<"enter the rows : ";
    cin>>num;
    
    for(i=1;i<=num;i++)
    {
        if(i%2!=0)
        {
          k = 1;
        }
        else{
           k = 0;
        }
        for(j=0;j<i;j++)
        {
            cout<<k;
            k = 1 - k;
        }
            cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main()
{
    int num,i,j,k,l;
    cout<<"enter the rows : ";
    cin>>num;


    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<k;
        }
        cout<<endl;
    }

}
#include<iostream>
using namespace std;
int main()
{
    int num,i,j,k,l;
    cout<<"enter the rows : ";
    cin>>num;


    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            cout<<" ";
        }
        for(k=num;k>=num-i+1;k--)
        {
            cout<<k;
        }
        cout<<endl;
    }

}*/