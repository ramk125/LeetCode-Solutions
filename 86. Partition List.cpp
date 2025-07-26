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
    ListNode* partition(ListNode* head, int x) {
        ListNode* alist=new ListNode();
        ListNode* blist=new ListNode();
        ListNode* small=alist;
        ListNode* big=blist;

        while(head !=nullptr)
        {
            if(head->val<x)
            {
                small->next=head;
                small=small->next;
            }
            else{
                big->next=head;
                big=big->next;
            }
            head=head->next;
        }

        big->next=nullptr;
        small->next=blist->next;

        ListNode* result=alist->next;
        delete alist;
        delete blist;
        return result;
    }
};