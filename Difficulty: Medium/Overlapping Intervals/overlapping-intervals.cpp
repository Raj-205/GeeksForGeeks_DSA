class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
     int n= arr.size();
     sort(arr.begin(), arr.end());
     vector<vector<int>>ans;
     for(int i=0;i<n;i++){
         if(ans.empty()){
             ans.push_back(arr[i]);
         }
         else{
             vector<int>&x = ans.back();
             int end= x[1];
             if(arr[i][0]<=end){
                 x[1]= max(x[1], arr[i][1]);
             }
             else{
                 ans.push_back(arr[i]);
             }
         }
     }
    return ans;
    }
};