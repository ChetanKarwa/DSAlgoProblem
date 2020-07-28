/*
Link : https://leetcode.com/problems/merge-two-sorted-lists

Merge two sorted linked lists and return it as a new sorted list. 
The new list should be made by splicing together the nodes of the first two lists.
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==nullptr)
            return l2;
        if(l2==nullptr)
            return l1;
        if(l1->val > l2->val)
        {
            swap(l1,l2);
        }
        ListNode* head = l1;
        while(l1!=nullptr&&l2!=nullptr)
        {
            if(l1->next==nullptr||l1->next->val>=l2->val)
            {
                ListNode* temp = l2;
                l2 = l2->next;
                temp->next = l1->next;
                l1->next = temp;
            }
            l1 = l1->next;
        }
        return head;
    }
};