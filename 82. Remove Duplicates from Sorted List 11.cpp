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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)
        {
            return head;
        }
           ListNode* curr=new ListNode(0,head);
           ListNode* prev=curr;
           ListNode* temp=head;
            while(temp!=nullptr)
            {
                if(temp->next!=nullptr && temp->next->val==temp->val)
                {
                    while(temp->next!=nullptr && temp->next->val==temp->val)
                    {
                        temp=temp->next;
                    }
                        prev->next=temp->next;   
                }
                else
                {
                    prev=prev->next;
                }
                temp=temp->next;
            }
        // ListNode* newHead = curr->next;
       // delete curr; 
        return curr->next;
    }
};