## 01. Median of 2 Sorted Arrays of Different Sizes

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1)

### Problem Description

**Task:** Given two sorted arrays a[] and b[], find and return the median of the combined array after merging them into a single sorted array.Examples:Input: a[] = [3, 5, 6, 12, 15], b[] = [3, 4, 6, 10, 10, 12]

#### Examples

##### Example 1

- **Output:**
```text
4.5Explanation: The merged array is [2, 4, 5, 6]. So the median of the merged array is (4 + 5) / 2 = 4.5.
```
- **Explanation:** The merged array is [3, 3, 4, 5, 6, 6, 10, 10, 12, 12, 15]. So the median of the merged array is 6.Input: a[] = [2, 3, 5, 8], b[] = [10, 12, 14, 16, 18, 20]Output: 11Explanation: The merged array is [2, 3, 5, 8, 10, 12, 14, 16, 18, 20]. So the median of the merged array is (10 + 12) / 2 = 11.Input: a[] = [], b[] = [2, 4, 5, 6]

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(log(min(n, m)))
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-11-21 21:41:05
- **Status:** Correct
- **Marks:** 8

```cpp
class Solution {
  public:
    double medianOf2(vector<int>& nums1, vector<int>& nums2) {
      
                int n1 = nums1.size();
                int n2 = nums2.size();
                int n = n1+n2;
                int indx2 = n/2;
                int indx1 = indx2-1;
                int idel1 =-1;
                int idel2 =-1;
                int i=0, j=0;
                int count =0;
                while(i<n1 && j<n2){
                    if(nums1[i]<nums2[j]){
                        if(count == indx1) idel1 = nums1[i];
                        if(count == indx2) idel2 = nums1[i];
                        count++;
                        i++;
                    }
                    else{
                       if(count == indx1) idel1 = nums2[j];
                       if(count == indx2) idel2 = nums2[j];
                        count++;
                        j++;
                    }
                }
                while(i<n1){
                    if(count == indx1) idel1 = nums1[i];
                    if(count == indx2) idel2 = nums1[i];
                    count++;
                    i++;
                }
                while(j<n2){
                    if(count == indx1) idel1 = nums2[j];
                    if(count == indx2) idel2 = nums2[j];
                    count++;
                    j++;
                }
                if(n%2==1){
                    return idel2;
                }
                else{
                    return (idel1 +idel2 )/2.0;     
                }
      
         
    }
};
```

*Generated on: 11/21/2026, 9:41:10 PM*