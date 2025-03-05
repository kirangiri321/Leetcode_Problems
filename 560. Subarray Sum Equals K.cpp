class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int n=nums.size();
        int sum=0;
        
        for (int i=0;i<n;i++){
            sum=nums[i];    
            if(sum==k) {
                count++;    //gives output in case of a num matches
            }
            for(int j=i+1;j<n;j++){
                 sum=sum+nums[j];   //traverse in the array
                 if(sum==k) {
                    count++;
                 }
                 
            }
           
        }
        return count;   
    }
};
