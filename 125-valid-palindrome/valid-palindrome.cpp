class Solution {
public:
    bool isPalindrome(string s) {
        bool flag = false;
        string str = "";
        for(int i=0;i<s.size();i++){
            if((int)s[i]>=48 && (int)s[i]<=57){
                str.push_back(s[i]);
            } 
            else if((int)s[i]>=65 && (int)s[i]<=90){
                str.push_back(char(s[i]+32));
            }
            else if((int)s[i]>=97 && (int)s[i]<=122){
                str.push_back(s[i]);
            }
        }
        string rev=str;
        reverse(rev.begin(),rev.end());
        if(rev==str) return flag = true;
        return flag;
    }
};