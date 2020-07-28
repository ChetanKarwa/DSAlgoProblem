/*
Link : https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list

You are given a doubly linked list which in addition to the next and previous pointers, it could have a child pointer, which may or may not point to a separate doubly linked list. These child lists may have one or more children of their own, and so on, to produce a multilevel data structure, as shown in the example below.

Flatten the list so that all the nodes appear in a single-level, doubly linked list. You are given the head of the first level of the list.

*/

/*
 Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatit(Node* head,Node* prevNext)
    {
        while(head)
        {
            if(head->child)
            {
                Node* currNext = head->next;
                head->next = head->child;
                head->child->prev = head;
                head->child = nullptr;
                head = flatit(head,currNext);
            }
            else if(!head->next)
            {
                if(prevNext)
                {
                head->next = prevNext;
                prevNext->prev = head;
                }
                return head;
            }
            else
                head =  head->next;
        }
        return head;
    }
    
    
    
    Node* flatten(Node* head) {
        Node* first = head;
        while(head)
        {
            if(head->child)
            {
                Node* prevNext = head->next;
                head->next = head->child;
                head->child->prev = head;
                head->child = nullptr;
                head = flatit(head,prevNext);
            }
            head = head->next;
        }
        return first;
    }
};