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
        
      //  ListNode* temp=head;

      if(head==NULL)
      {
        return head;
      }
      else{
        ListNode* current=head;
        while(current!=nullptr && current->next!=nullptr)
        {
           if((current->val)==(current->next->val))
           {
            //head->data=head->next->data;
            ListNode* temp=current->next;
            current->next=current->next->next;
            delete temp;
           }
           else{
            current=current->next;
           }
            //head=head->next;
        }
        return head;
      }

    }
};