// LINK : https://leetcode.com/problems/add-two-numbers/

/*

Ques : You are given two non-empty linked lists representing two non-negative integers.
The digits are stored in reverse order and each of their nodes contain a single digit.
Add the two numbers and return it as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
*/

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head = l1;

        while(l1->next!=nullptr)
        {
            l1->val = l1->val + carry;
            if(l2)
            {
                l1->val += l2->val;
                l2 = l2->next;
            }
            carry = l1->val/10;
            l1->val = l1->val%10;
            l1 = l1->next;
        }

        if(l2)
        {l1->next = l2->next; l2->next = nullptr;}

        while(l1->next!=nullptr)
        {
            l1->val = l1->val + carry;
            if(l2)
            {
                l1->val += l2->val;
                l2 = l2->next;
            }
            carry = l1->val/10;
            l1->val = l1->val%10;
            l1 = l1->next;
        }

        l1->val = l1->val + carry;
            if(l2!=nullptr)
            {
                l1->val += l2->val;
                l2 = l2->next;
            }
            carry = l1->val/10;
            l1->val = l1->val%10;

        if(carry)
        {
            l1->next = new ListNode(1);
        }
        return head;
    }
