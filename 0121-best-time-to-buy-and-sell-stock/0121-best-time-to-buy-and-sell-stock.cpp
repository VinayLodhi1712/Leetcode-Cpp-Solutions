class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro=0;
        int mini=INT_MAX;
        int n=prices.size();
        for(int i=0;i<n;i++){
            mini=std::min(mini,prices[i]);
            maxpro=std::max(maxpro,prices[i]-mini);
        }
        return maxpro;
    }
};