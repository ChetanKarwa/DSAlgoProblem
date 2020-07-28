/*
Link : https://leetcode.com/problems/linked-list-cycle-ii/

Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the linked list where tail connects to. If pos is -1, then there is no cycle in the linked list.

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head)
            return nullptr;
        ListNode *fast = head;
        ListNode *slow = head;
        do{
          if(!slow->next||!fast->next||!fast->next->next)
              return nullptr;
          slow = slow->next;
          fast = fast->next->next;
        }while(fast!=slow);
        fast = head;
        while(slow!=fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return fast;
    }
};