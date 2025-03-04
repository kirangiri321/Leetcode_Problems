class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int l=0,mid,r=x;
        while(l<=r){
            long unsigned mid=(l+r)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid>x){
                r=mid -1;
            }
            else {
                l=mid +1;
            }
        }
         return l-1;   
        
    }
};
