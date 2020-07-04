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

ListNode* middleNode(ListNode* head) {
    ListNode* temp = head;
    while(1)
    {
        if(temp->next==nullptr)
            return head;
        if(temp->next->next==nullptr)
            return head->next;
        temp = temp->next->next;
        head = head->next;
    }
}
