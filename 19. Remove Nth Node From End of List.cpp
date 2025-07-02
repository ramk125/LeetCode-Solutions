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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // int curr=0;
        // if(head==nullptr)
        // return NULL;

        // ListNode* temp=head;
        // while(temp->next !=nullptr)
        // {
        //    if(curr==n)
        //    {
        //     ListNode* del=temp->next;
        //     temp->next=temp->next->next;
        //     delete del;
        //     break;
        //    }
        //    curr++;
        //    temp=temp->next;
        // }

        int len=0;
        if(head==nullptr) return nullptr;

        ListNode* temp=head;
        while(temp !=nullptr)
        {
            len++;
            temp=temp->next;
        }

        if(n==len)
        {
            ListNode* del=head;
            head=head->next;
            delete del;
            return head;
        }
        temp=head;
        for(int i=0;i<len-n-1;i++)
        {
            temp=temp->next;
        }
        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete del;

        return head;
    }
};