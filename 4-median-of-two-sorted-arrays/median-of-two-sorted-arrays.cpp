class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        
        vector<int> temp(m+n);
        
        int i=0;//nums1
        int j=0;//nums2
        
        int k=0;//temp
        
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                temp[k++]=nums1[i++];
            }
            else{
                temp[k++]=nums2[j++];
            }
        }
        while(i<m){
            temp[k++]=nums1[i++];
        }
        while(j<n){
            temp[k++]=nums2[j++];
        }
        int size=m+n;
        if(size%2==1){
            //odd
            return temp[size/2];
        }
        return (temp[size/2]+temp[(size/2)-1])/2.0;
    }
};