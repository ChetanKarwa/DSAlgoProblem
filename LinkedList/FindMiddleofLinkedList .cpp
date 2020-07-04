// LINK : https://leetcode.com/problems/middle-of-the-linked-list/

/*

Ques : Middle of the Linked List.


 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
*/

ListNode* reverseList(ListNode* head) {
    ListNode* prevHead = nullptr;
    while(head!=nullptr)
    {
        ListNode* nextHead = head->next;
        head->next = prevHead;
        prevHead  = head;
        head = nextHead;
    }
    return prevHead;
}
