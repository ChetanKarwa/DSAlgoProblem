/*
Link : https://leetcode.com/problems/rotate-list/

Given a linked list, rotate the list to the right by k places, where k is non-negative.
*/


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
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||!head->next)
            return head;
        ListNode* slow = head;
        int num = 0;
        ListNode* fast = head;
        while(k--){
            fast = fast->next;
            num++;
            if(!fast)
            {
                k = k%num;
                fast = head;
            }
        }
        slow = head;
        while(fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }
        fast->next = head;
        head = slow->next;
        slow->next = nullptr;
        return head;
    }
};

