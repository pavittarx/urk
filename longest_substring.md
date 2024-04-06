Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/?envType=list&envId=oizxjoit

```cpp

#include<set>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = 0;
        set<char> s_set = {};

        int l = 0;

        for (int r=0; r<s.size();r++){  
            auto pos = s_set.find(s[r]);
            auto exists = pos != s_set.end();

            int dist = 0;

            if(exists){
                while(s[l] != s[r]){
                    s_set.erase(s[l]);
                    l++;
                }

                if(s[l] == s[r]){
                    l++;
                    s_set.insert(s[r]);
                }
            }

            if(!exists){
                s_set.insert(s[r]);
            }

            int newLength = r-l +1;

            if(length < newLength){
                length = newLength;
            }
        }

        return length;
    }
};

```