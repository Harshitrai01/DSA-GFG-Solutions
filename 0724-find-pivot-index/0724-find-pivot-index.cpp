class Solution {
public:
    int pivotIndex(vector<int>& nums){
        
        int n=nums.size();
        int sum=0;
        
        for(auto x:nums){
            sum+=x;
        }
        
        int lsum=0;
        int rsum=sum;
        
        for(int i=0;i<n;i++){
            rsum-=nums[i];
            if(lsum==rsum)
                return i;
            
            lsum+=nums[i];
            
        }
        return -1;
    }
        
};