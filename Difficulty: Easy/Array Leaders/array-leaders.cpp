class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int maxi=0;
        for(int i=arr.size()-1;i>=0;i--){
            maxi = max(maxi,arr[i]);
            if(arr[i]>=maxi){
                ans.push_back(arr[i]);
            }
        }
      reverse(ans.begin(), ans.end());
       return ans; 
    }
};