#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int postfix(string s)
{
    stack<int>st;
    int i;
    for(i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        else
        {
            int operand2 = st.top();
            st.pop();
            int operand1 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(operand1+operand2);
                break;
            case '-':
                st.push(operand1-operand2);
                break;
            case '*':
                st.push(operand1*operand2);
                break;
            case '/':
                st.push(operand1/operand2);
                break;
            case '^':
                st.push(pow(operand1,operand2));
                break;
            }
        }
    }
    return st.top();
        
}
int prefix(string s)
{
    stack<int> st;
    for(int i = s.length()-1;i>=0;i--)
    {
        if(s[i]>='0' && s [i] <= '9')
        {
            st.push(s[i]-'0');
        }
        else
        {
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(operand1+operand2);
                break;
            case '-':
                st.push(operand1-operand2);
                break;
            case '*':
                st.push(operand1*operand2);
                break;
            case '/':
                st.push(operand1/operand2);
                break;
            case '^':
                st.push(pow(operand1,operand2));
                break;
            }
        }
    }
    return st.top();

}
int main()
{
    string s = "-+9*26/84";
    cout<<"prefix calculation is : "<<prefix(s)<<endl;
    string a  = "532*+";
    cout<<"postfix calculation is : "<<postfix(a)<<endl;

}