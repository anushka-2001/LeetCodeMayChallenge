//Day3
class Solution {
public:
   
    bool canConstruct(string ransomNote, string magazine) {
        /*int r = ransomNote.length();
        int m = magazine.length();
        int lookup[64] ;
        for(int i = 0;i<m;i++){
        if(lookup[int(magazine[i])-64]==0)
            lookup[int(magazine[i])-64]=1;
            
        else
           lookup[int(magazine[i]-64)]++;
            
        }
        for(int i =0;i<r;i++)
        { 
            if(lookup[int(ransomNote[i])-64]<=0)
                return false;
            
            
            else
               lookup[int(ransomNote[i])-64]--;
            
            }
    return true;}*/
    unordered_map<char, int> m;
        for (char a : magazine) ++m[a];
        for (char a : ransomNote){
            if (--m[a] < 0) return false;
        }
        return true;
    }
    /*std::map<char, int> count;
    int r = ransomNote.length();
        int m = magazine.length();
    for(int i=0; i<m; i++) {
        ++count[magazine[i]];
    }
    for(const auto kvp : count) {
        std::cout << kvp.first << " occurs " << kvp.second << " times\n";*/
};
     
