// User function Template for C++
class Solution {
  public:
    bool searchPattern(string& txt, string& pat) {
        // your code here
        int l = txt.length();
        int len = pat.length();
        int i;
        for(i=0;i<=l-len;i++)
        {
            int j = 0;
            while(j<len&&txt[i+j]==pat[j])
            {
                j++;
            }
            if(j==len)
            {
                return true;
            }
        }
        return false;
        
    }
};
