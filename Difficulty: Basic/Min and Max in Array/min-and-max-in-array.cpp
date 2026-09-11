class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
      int maxi=0;
      int mini=INT_MAX;
      for(int i=0;i<arr.size();i++){
          maxi = max(maxi,arr[i]);
          mini = min(mini,arr[i]);
      }
      return {mini,maxi};
    }
};