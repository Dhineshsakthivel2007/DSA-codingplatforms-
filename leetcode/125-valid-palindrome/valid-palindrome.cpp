class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned="";
        for(char c:s){
            if(isalnum(c)){
                cleaned+=tolower(c);
            }
        }
        string s1=cleaned;
        reverse(s1.begin(),s1.end());
        return cleaned==s1;
    }
};