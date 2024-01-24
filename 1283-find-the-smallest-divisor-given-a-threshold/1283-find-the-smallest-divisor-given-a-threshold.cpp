class Solution {
public:
    int sum(vector<int>& nums,int div,int threshold){
       int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+ceil((double)(nums[i])/(double)div);
            if(sum>threshold){
                return 0;
            }
        }
        return 1;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int n=nums.size();
        if(n>threshold) return -1;
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(!sum(nums,mid,threshold)){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }
};