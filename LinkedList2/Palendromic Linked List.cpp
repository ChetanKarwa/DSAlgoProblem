/*
Link : https://leetcode.com/problems/palindrome-linked-list/
Given a singly linked list, determine if it is a palindrome.
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
    bool isPalindrome(ListNode* first) {
        ListNode* second = first;
        if(!first)
            return true;
        stack<int>s;
        s.push(first->val);
        while(1)
        {
            if(second->next==nullptr)
                break;
            else if(second->next->next==nullptr)
            {
                first = first->next;
                break;
            }
            second = second->next->next;
            first = first->next;
            s.push(first->val);
        }
        while(first)
        {
            if(s.empty()||s.top()!=first->val)
                return false;
            s.pop();
            first = first->next;
        }
        return true;
    }
};