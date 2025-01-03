class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        if(n<2)
            return -1;
        int maxi=-1;
        int suffixMax= nums[n-1];
        for(int i=n-2; i>=0 ;i--){
           if(nums[i]<suffixMax){
            maxi =max(maxi,suffixMax-nums[i]);
           }
           suffixMax=max(suffixMax,nums[i]);
        }
        return maxi;
    }
};