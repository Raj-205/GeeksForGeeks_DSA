class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
       vector<int>ans;
       int n= arr.size();
       sort(arr.begin(),arr.end());
       for(int i=1;i<n;i++){
             if(arr[i]==arr[i-1]){
               if(ans.empty()||ans.back()!= arr[i]){
                  ans.push_back(arr[i]);
               } 
            }
        }
     return ans;   
    }
};