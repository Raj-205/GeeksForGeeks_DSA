class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
       int n= a.size();
       int m= b.size();
       int gap = ((n+m)/2) + ((n+m)%2);
       while(gap>0){
           int i=0;
           int j= i+gap;
           while(j<(m+n)){
           if(i<n && j>=n){
               if(a[i]>b[j-n]){
              swap(a[i],b[j-n]);
               }  
           }
           else if(j<n){
               if(a[i]>a[j]){
               swap(a[i],a[j]);
               }
           }
           else{
               if(b[i-n]>b[j-n]){
               swap(b[i-n],b[j-n]);
               }
          }
            i++;
            j++;
           }
           if (gap==1) break;
           gap = gap /2 + gap%2;
       }
        
    }
};