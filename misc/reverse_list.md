## Reverse Linked List
Leet: https://leetcode.com/problems/reverse-linked-list/?envType=list&envId=rr2ss0g5

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* last = NULL;

        while (curr!= NULL) {
            ListNode* temp = curr->next;
            curr->next=last;
            
            last=curr;
            curr=temp;
        }

        head=last;
        return head;
    }
};
```