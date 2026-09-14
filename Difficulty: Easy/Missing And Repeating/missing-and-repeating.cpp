class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
     long long n= arr.size();
     long long total = (n*(n+1))/2;
     long long sqrtotal = (n*(n+1)*(2*n+1))/6;
     long long arrtotal=0,sqrarrtotal=0;
     for(long long x: arr){
         arrtotal+=x;
         sqrarrtotal+=(x*x);
     }
     long long diff = arrtotal-total;
     long long sqrdiff= sqrarrtotal- sqrtotal;
     long long  diffsum=  sqrdiff/diff;
     long long  dupli = (diff + diffsum)/2;
     long long miss = diffsum - dupli;
      return {dupli,miss};
    }
};