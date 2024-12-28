class Solution {
public:

   int sumByD(vector<int>& arr,int div){
    int sum=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        sum=sum+ceil((double)(arr[i])/(double)(div));
    }
    return sum;
   }


    int smallestDivisor(vector<int>& arr, int threshold ) {
     
      

          int start=1, end=*max_element(arr.begin(),arr.end());
          while(start<=end){
            int mid = start+(end-start)/2;
            if(sumByD(arr,mid) <=threshold){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
          }
          return start;
    }
};