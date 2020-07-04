// LINK : https://leetcode.com/problems/delete-node-in-a-linked-list/

/*

Ques : Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.


 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
*/

void deleteNode(ListNode* node) {

        node->val = node->next->val;
        node->next = node->next->next;
    }
