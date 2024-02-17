### Two Sum

### Leetcode Link https://leetcode.com/problems/two-sum/description/?envType=list&envId=oizxjoit

### Solution

```c++
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            int current = nums[i];
            int diff = current > target ? current - target : target - current;

            for(int j = i+1; j<nums.size(); j++){
               if(diff == nums[j]){
                   result.push_back(i);
                   result.push_back(j);
                   return result;
               } 
            }
        }

        return result;
    }
};

```