/*#include<iostream>
using namespace std;
class stack{
    public:

    string a;
    int top;

    stack(int val)
    {
        top = -1;
    }

    void push(string val)
    {
        if(top == 999)
        {
            cout<<"stack overflow";
            return;
        }
    }
    
    void print()
    {
        if(top == -1 )
        {
            cout<<"it is empty";
        }
        for(int i = 0;i<=top;i++)
        {
            top++;
            cout<<a;
        }
    }
};
int main()
{
    string a;
    cout<<"enter the string : ";
    cin.getline(a,100);

    cout<<a;
}
*/
#include<iostream>
#include<stack>
using namespace std;
void revstring(string s)
    {
        stack<string>st;
        int i;
        for(i = 0;i<s.length();i++)
        {
            string word = "";
            while(i<s.length() && s[i]!=' ')
            {
                word += s[i];
                i++;
            }
            st.push(word);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main()
{
    string s = "the sky is blue";
    revstring(s);
}


