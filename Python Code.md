## 01. Row with Max 1s in Rowwise Sorted

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1)

### Problem Description

**Task:** Given a 2D binary array arr[][] consisting of only 1s and 0s. Each row of the array is sorted in non-decreasing order. Find and return the index of the first row that contains the maximum number of 1s. If no such row exists, return -1.Note: The array follows 0-based indexing.Examples:Input: arr[][] = [[0,1,1,1], [0,0,1,1], [1,1,1,1]]

#### Examples

##### Example 1

- **Output:**
```text
-1
```
- **Explanation:** No row contains any 1s, so the output is -1.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n + m)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (3)

#### Solution 1 (C++)

- **Submitted:** 2026-11-23 18:40:41
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
      int ans(vector<int>& mat, int m){
                int low = 0;
                int high = m - 1;
                int result = m;

                while(low <= high){
                    int mid = low + (high - low) / 2;

                    if(mat[mid] >= 1){
                        result = mid;
                        high = mid - 1;
                    }
                    else{
                        low = mid + 1;
                    }
                }
                return result;
            }
    int rowWithMax1s(vector<vector<int>> &mat) {
                int n = mat.size();
                int m = mat[0].size();

                int count_ones = 0;
                int index = -1;

                for(int i = 0; i < n; i++){

                    int res = ans(mat[i], m);

                    int ones = m - res;

                    if(ones > count_ones){
                        count_ones = ones;
                        index = i;
                    }
                }

                return index;
        
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-11-23 18:40:30
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
      int ans(vector<int>& mat, int m){
                int low = 0;
                int high = m - 1;
                int result = m;

                while(low <= high){
                    int mid = low + (high - low) / 2;

                    if(mat[mid] >= 1){
                        result = mid;
                        high = mid - 1;
                    }
                    else{
                        low = mid + 1;
                    }
                }
                return result;
            }
    int rowWithMax1s(vector<vector<int>> &mat) {
                int n = mat.size();
                int m = mat[0].size();

                int count_ones = 0;
                int index = -1;

                for(int i = 0; i < n; i++){

                    int res = ans(mat[i], m);

                    int ones = m - res;

                    if(ones > count_ones){
                        count_ones = ones;
                        index = i;
                    }
                }

                return index;
        
    }
};
```

#### Solution 3 (C++)

- **Submitted:** 2026-11-23 18:40:17
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
      int ans(vector<int>& mat, int m){
                int low = 0;
                int high = m - 1;
                int result = m;

                while(low <= high){
                    int mid = low + (high - low) / 2;

                    if(mat[mid] >= 1){
                        result = mid;
                        high = mid - 1;
                    }
                    else{
                        low = mid + 1;
                    }
                }
                return result;
            }
    int rowWithMax1s(vector<vector<int>> &mat) {
                int n = mat.size();
                int m = mat[0].size();

                int count_ones = 0;
                int index = -1;

                for(int i = 0; i < n; i++){

                    int res = ans(mat[i], m);

                    int ones = m - res;

                    if(ones > count_ones){
                        count_ones = ones;
                        index = i;
                    }
                }

                return index;
        
    }
};
```

*Generated on: 11/23/2026, 6:40:50 PM*
