class Solution {
public:
    int mySqrt(int x) {
        double eps=1e-7;
        double lo=1;
        double hi=x,mid;
      while(hi-lo>eps){
         mid=(lo+hi)/2;
        if(mid*mid<x){
          lo=mid;
        }
        else{
          hi=mid;
        }
      }
      return hi;
    }
};