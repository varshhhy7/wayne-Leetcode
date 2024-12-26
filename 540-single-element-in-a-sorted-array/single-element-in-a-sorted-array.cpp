class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int l= 0;
        int h= n-1;

        while(l<h){
            int mid=l+(h-l)/2;

            //check if the no of elements in the right side are even on odd
            bool isEven;

            if((h-mid)%2==0){
                isEven=true;
            } 
            else {
                isEven = false;
            }
            
            //check your contiguous element(mid+1)
            if(nums[mid]==nums[mid+1]){
                if(isEven){
                    l=mid+2;
                }
                else{
                    h=mid-1;
                }
            }
                else
                {
                    //nums[mid]!=nums[mid+1]
                    if(isEven){
                        h=mid;
                    }
                    else{
                        l=mid+1;
                    }
                }
            }
    return nums[h];
        }
        
    
};