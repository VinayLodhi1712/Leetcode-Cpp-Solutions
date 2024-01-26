class Solution {
public:
    bool possible(vector<int>& bloomDay,int m,int k,int day){
        int n=bloomDay.size();
        int cnt=0;
        int noofbouqets = 0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=day){
                cnt++;
            }
            else{
                noofbouqets+=cnt/k;
                cnt=0;
            }
        }
        noofbouqets+=cnt/k;
        if(noofbouqets>=m) return true;
        else return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if(n< (long)m*k) return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay,m,k,mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};