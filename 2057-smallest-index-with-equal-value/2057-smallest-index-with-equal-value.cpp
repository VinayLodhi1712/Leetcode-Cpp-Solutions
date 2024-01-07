class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int smallestIndex=-1;
        for(int i=0;i<nums.size();i++){
            if(i%10==nums[i]){
                 if (smallestIndex == -1 || i < smallestIndex) {
                    smallestIndex = i;
                 }          
            }
        }
        return smallestIndex;
    }
};