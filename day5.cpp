//Day5
class Solution {
public:
    int firstUniqChar(string s) {
      /*  char ch;
        
        for(int i =0;i<s.length()-1;i++)
        { int count=0;
            ch=s[i];
         if(ch>='a' && ch<='z'){
            for(int j=i+1;j<s.length();j++)
            { char ch1=s[j];
                if(ch==ch1)
                {
                    count++;
                }
             }
            if(count==0)
            {
                return i;
                break;
            }}
        }
        return -1;*/
        map<char,int> mp;
        for(int i =0;i<s.length();i++)
            mp[s[i]]++;
        for(int i =0;i<s.length();i++)
        {
            if(mp[s[i]]==1)
                return i;
            
        }
        return -1;
    }
};