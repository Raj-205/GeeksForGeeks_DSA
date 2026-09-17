class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
       vector<int>result;
       int ans=1;
       result.push_back(ans);
       for(int i=1;i<n;i++){
           ans*= (n-i);
           ans/=i;
           result.push_back(ans);
       }
       return result; 
    }
};
