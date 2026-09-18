class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
       int counteve =0;
       int countodd =0;
       for(int i=0;i<arr.size();i++){
           if(arr[i]%2==0){
               counteve++;
           }
           else{
               countodd++;
           }
       }
       return {countodd,counteve};
    }
};         