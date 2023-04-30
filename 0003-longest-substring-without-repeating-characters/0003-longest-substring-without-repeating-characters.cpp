class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        set<char> st;
        int i=0,j=0;
        int ans=0;
        while(i<n and j<n){
          if(st.find(s[i])==st.end()){
            st.insert(s[i]);
            i++;
            int temp=st.size();
            ans=max(ans,temp);
          }
          else{
               st.erase(s[j]);
               j++;
          }
        }
      return ans;
    }
};