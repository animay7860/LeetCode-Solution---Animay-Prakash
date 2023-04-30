class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int i =0;
        int j =0;
        int n =nums.size();
        int sum =0;
        int mn = INT_MAX; 
        while(j<n){
          sum = sum + nums[j];
          if(sum<k) j++;
          else if(sum>=k){
            while(sum>=k){
            mn = min(mn,j-i+1);
              sum-=nums[i];
              i++;
            }
            j++;
          }
        }
      if(mn==INT_MAX) return 0;
      return mn;
    }
};