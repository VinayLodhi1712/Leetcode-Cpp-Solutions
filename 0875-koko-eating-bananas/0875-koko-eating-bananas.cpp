class Solution {
public:
    int FindMax(vector<int> v){
        int n=v.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,v[i]);
        }
        return maxi;
    }
    
    int Totalhours(vector<int>& v, int h, int hourly){
        int totalhour=0;
        for(int i=0;i<v.size();i++){
            totalhour=totalhour+ceil((double)v[i]/hourly);
            if(totalhour>h){
                return 0;
            }
        }
        return 1;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=FindMax(piles);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(!Totalhours(piles,h,mid)){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }
};