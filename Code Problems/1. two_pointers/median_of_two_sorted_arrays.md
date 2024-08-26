# Median of Two Sorted Arrays

Leetcode Link: https://leetcode.com/problems/median-of-two-sorted-arrays/?envType=list&envId=rabvlt31


# Solution
```c++
using namespace std;

bool hasArrayExhausted(int index, vector<int> arr){
    return index == arr.size();
}

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size = nums1.size() + nums2.size();
        vector<int> merged_array;

        for (int i = 0, j = 0; i < nums1.size() || j < nums2.size();) {
            bool isOnlyIRemaining = !hasArrayExhausted(i, nums1) && hasArrayExhausted(j, nums2);
            bool isOnlyJRemaining = hasArrayExhausted(i, nums1) && !hasArrayExhausted(j, nums2);

            if(!nums1.size()) {
                merged_array = nums2;
                break;
            }

            if(!nums2.size()){
                merged_array = nums1;
                break;
            }

            if(isOnlyIRemaining){
                merged_array.push_back(nums1[i]);
                i++;

                while(!hasArrayExhausted(i, nums1) && (i+j) <= (size/2)){
                    merged_array.push_back(nums1[i]);
                    i++;
                }

                break;
            }

            if(isOnlyJRemaining){
                merged_array.push_back(nums2[j]);
                j++;
                
                while(!hasArrayExhausted(j, nums2) && (i+j) <= (size/2)){
                    merged_array.push_back(nums2[j]);
                    j++;
                }

                break;
            }
            
            if(nums1[i] < nums2[j]){
                merged_array.push_back(nums1[i]);
                i++;
            }else{
                merged_array.push_back(nums2[j]);
                j++;
            }
        }

        int isEvenSize = (size%2) == 0;
        int median = size/2;

        if(isEvenSize){
            return static_cast<double>(merged_array[median] + merged_array[median-1])/2;
        }

        return merged_array[median];
    }
};
```
