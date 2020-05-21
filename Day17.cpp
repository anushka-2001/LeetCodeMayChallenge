class Solution {
public:
    bool compare(int a1[], int a2[]) {

	for(int i=0; i<26; i++) 
		if(a1[i]!=a2[i])
			return false;
	return true;
}

vector<int> findAnagrams(string s, string p) {

	int m = s.size();
	int n = p.size();     
	if(s=="" || n>m) return {};
    vector<int>ans;
    int a[26]={0},b[26]={0},c=0;
    for(int i=0;i<n;i++)
    {
        a[s[i]-'a']++;
        b[p[i]-'a']++;
    }
    if(compare(a,b)) ans.push_back(0);
    for(int i=1;i<=m-n;i++)
    {
        a[s[i-1]-'a']--;
        a[s[i+n-1]-'a']++;
        if(compare(a,b)) ans.push_back(i);
    }
    return ans;
}

};