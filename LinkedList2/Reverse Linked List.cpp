// Link:

/*
Reverse a singly linked list.
*/


/**
 * Definition for singly-linked list.
  struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


 ///////////////////////// ITERATIVELY  ///////////////////////////

class Solution {
public:
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
};

///////////////////////// Recursively  ////////////////////////////

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr||head->next == nullptr)
            return head;
        ListNode* p = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return p;
    }
};
