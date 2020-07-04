// LINK : https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/

/*

Ques : Given a linked list, remove the n-th node from the end of list and return its head.


 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
*/

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* second = head;
    while(n>0)
    {
        n--;
        second = second->next;
    }
    ListNode* first = head;
    if(second == nullptr)
        return head->next;
    while(second->next!=nullptr)
    { second = second->next;first = first->next;}
    first->next = first->next->next;
    return head;
}
