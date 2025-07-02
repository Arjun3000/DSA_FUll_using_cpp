class Solution {
public:
    bool isPalindrome(string s) {
        int str;
        int revstr;

        int i;
        for(i=0;i<s.length();i++)
        {
            if(s[i]>=65&&s[i]<=90)
            {
                str[i] = s[i]-32;
            }
            else if(s[i]>=97&&s[i]<=122)
            {
                str[i] = s[i];
            }
        }

        int j;
        for(i=0,j=l-1;j>=0;i++,j--)
	{
		revstr[i] = str[j];
	}

    if(revstr == str)
    {
        return true;
    }
    else
    {
        return false;
    }
        
    }
};