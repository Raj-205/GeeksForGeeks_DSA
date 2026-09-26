class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int n = a.size();
        int m = b.size();
        int i=0;
        int ans= -1;
        int j=0;
        int count=0;
        while( i<n&& j<m){
            if(a[i]<b[j]){
               ans = a[i];
               i++;
            }
            else{
                ans = b[j];
                j++;
            }
            count++;
            if(count==k) return ans;
        }
        while(i<n){
            ans= a[i];
            i++;
            count++;
            if(count==k) return ans;
        }
        while(j<m){
            ans= b[j];
            j++;
            count++;
            if(count==k) return ans;
        }
        return ans;
    }
};