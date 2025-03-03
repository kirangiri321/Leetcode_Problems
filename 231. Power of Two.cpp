class Solution {
public:
    bool isPowerOfTwo(int n) {
        int rem,count=0;
        if(n==1){
            return true;
        }
        else if(n<=0) return false;
        else if(n%2==1) return false;
        else{
            while(n!=1){
                rem=n%2;
                if(rem==1) return false;
                count++;
                n=n/2;
            }
            if(rem==0) return true;
            else return false;
        }
    }
};
