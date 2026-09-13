class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
       int zero = 0;
       for(int j=0;j<arr.size();j++){
           if(arr[j]!=0){
               swap(arr[j], arr[zero]);
               zero++;
           }
           
       }
      
    }
};