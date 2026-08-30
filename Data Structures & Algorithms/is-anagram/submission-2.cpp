class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_multiset<char>s1;
        unordered_multiset<char>s2;
        if(s.size()!=t.size())
        {
            return false;
        }
        for(int i=0;i<s.size();i++)
        {
            s1.insert(s[i]);
        }
        for(int i=0;i<t.size();i++)
        {
            s2.insert(t[i]);
        }
        if(s1==s2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
