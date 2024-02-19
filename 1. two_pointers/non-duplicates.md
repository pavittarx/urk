## Remove Duplicates from Sorted Array

Leetcode Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

## Solution
```c++
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;

        while(j<nums.size()){
            if(nums[i] == nums[j]){
                j++;
                continue;
            }

            if(j-i > 1){
                i++;
                nums[i]=nums[j];
                j++;
            }
        }

        
        return i+1;
    }
};
```
