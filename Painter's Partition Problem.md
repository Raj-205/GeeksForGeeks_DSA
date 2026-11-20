## 01. Painter's Partition Problem

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1)

### Problem Description

**Task:** Given an array arr[] where each element denotes the length of a board, and an integer k representing the number of painters available. Each painter takes 1 unit of time to paint 1 unit length of a board.Each painter can paint only a contiguous sequence of boards (no skipping or splitting allowed).Find the minimum amount of time required to paint all the boards.Examples:Input: arr[] = [5, 10, 30, 20, 15], k = 3

#### Examples

##### Example 1

- **Output:**
```text
1000
```
- **Explanation:** There is only one painter, so the painter must paint all boards sequentially. The total time taken will be the sum of all board lengths, i.e., 100 + 200 + 300 + 400 = 1000.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n * log(sum(arr)))
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-11-20 17:51:55
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
       int n = arr.size();
       long long low = *max_element(arr.begin(), arr.end());
       long long high = accumulate(arr.begin(), arr.end(),0LL);
       while(low<=high){
           long long mid = low +(high-low)/2;
           int pinter =1;
           int currt = 0;
           for(int i=0;i<n;i++){
               if(arr[i]+currt<=mid){
                   currt+=arr[i];
               }
               else{
                   currt = arr[i];
                   pinter++;
               }
           }
           if(pinter<=k){
               high =mid-1;
           }
           else{
               low= mid+1;
           }
       }
       return low;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-11-20 17:46:07
- **Status:** Correct
- **Marks:** 8

```cpp
class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
       int n = arr.size();
       long long low = *max_element(arr.begin(), arr.end());
       long long high = accumulate(arr.begin(), arr.end(),0LL);
       while(low<=high){
           long long mid = low +(high-low)/2;
           int pinter =1;
           int currt = 0;
           for(int i=0;i<n;i++){
               if(arr[i]+currt<=mid){
                   currt+=arr[i];
               }
               else{
                   currt = arr[i];
                   pinter++;
               }
           }
           if(pinter<=k){
               high =mid-1;
           }
           else{
               low= mid+1;
           }
       }
       return low;
    }
};
```

*Generated on: 11/20/2026, 5:51:59 PM*