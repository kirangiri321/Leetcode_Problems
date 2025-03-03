class Solution {
public:
    bool isPalindrome(int x) {
       int s,n;
       long long sum=0;
       s=x;
       if (x<0)
       return false;
       else{
       while(x>0){
        n=x%10;
        sum=sum*10+n;
        x=x/10;
       }
       
       return sum==s;
        }   
    }
};
