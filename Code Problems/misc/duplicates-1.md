## Duplicates 1

Leet: https://leetcode.com/problems/contains-duplicate/description/?envType=list&envId=rr2ss0g5

```cpp
#include <unordered_map>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;

        for(int i=0; i<nums.size(); i++){
            int key = nums[i];

            map[key] = map[key]+1;
            if(map[key] >= 2){
                return true;
            }
        }

        return false;
    }
};

```