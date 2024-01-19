class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        int ans=INT_MAX;
        while(l<=h){
            if(nums[l]<=nums[h]){
                ans=std::min(ans,nums[l]);
            }
            int mid=(l+h)/2;
            
            if(nums[l]==nums[mid] && nums[mid]==nums[h]){
                l=l+1;
                h=h-1;
                continue;
            }
            if(nums[l]<=nums[mid]){
                ans=std::min(ans,nums[l]);
                l=mid+1;
            }else{
                ans=std::min(ans,nums[mid]);
                h=mid-1;
            }
        }
        return ans;
    }
};