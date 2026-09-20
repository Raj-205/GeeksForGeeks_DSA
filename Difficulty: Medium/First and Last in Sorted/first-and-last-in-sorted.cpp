class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
       vector<int>ans;
       int n= arr.size();
       int first=-1;
       int last=-1;
       for(int i=0;i<n;i++){
           if(arr[i]== x){
               first =i;
               int j= i+1;
               while(j<=n){
                   if(arr[j]!= x){
                       last = j-1;
                       break;
                   }
                     j++;  
               }
               break;
           }
       }
      ans={first,last};
      return ans;  
    }
};