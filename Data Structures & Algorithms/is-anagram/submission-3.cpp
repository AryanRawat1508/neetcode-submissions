class Solution {
public:
    bool isAnagram(string s, string t) {
        int ch[26];
        for(int i=0;i<s.size();i++)
        {
            ch[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            ch[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(ch[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
};
