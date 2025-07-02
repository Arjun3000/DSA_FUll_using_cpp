unordered_set<char>seen;
int l = 0,right = 0;
int maxlen = 0;
while (right<s.length())
{
    if(seen.find(s[right])==seen.end())
    {
       seen.insert(s[right]);
       maxlen = max(maxlen,right-l+1);
       right++;
    }
    else
    {
        seen.erase(s[l]);
        l++;
    }
    return maxlen;
}
