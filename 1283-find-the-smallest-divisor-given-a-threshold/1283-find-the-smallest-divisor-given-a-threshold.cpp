class Solution {
public:
    int sum(vector<int>& nums,int div,int threshold){
       int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+ceil((double)(nums[i])/(double)div);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int n=nums.size();
        if(n>threshold) return -1;
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            int currentsum=sum(nums,mid,threshold);
            if(currentsum>threshold){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};