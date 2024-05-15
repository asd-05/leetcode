class Solution {
public:
    bool isPalindrome(int x) {
        long ans = 0;
        int m = x;
        if (x < 0 || (x != 0 && x % 10 == 0)) {
            return false;
        }
        while(x!=0){
            int digit = x%10;
            ans = (ans*10)+digit;
            x = x/10;
        }
        if (ans == m){
            return true;
        }
        else{
            return false;
        }
    }
};