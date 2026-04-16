class Solution {
public:
    bool isPalindrome(string s) {
        string s2;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                s2+=tolower(s[i]);
            }
        }
        cout << s2;
        int left = 0;
        int right = s2.size()-1;
        while(left<right){
          
            if(s2[left]!=s2[right]){
                return false;
            }else{
                left++;
                right--;
            }
        
        }
        return true;
    }
};
