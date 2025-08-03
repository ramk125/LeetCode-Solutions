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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return nullptr;
        if(!head->next) return new TreeNode(head->val);
        ListNode* start=head;
        ListNode* end=head;
        ListNode* curr=nullptr;

        while(end && end->next)
        { 
            curr=start;
            start=start->next;
            end=end->next->next;
        }
        if(curr) curr->next=nullptr;

        TreeNode* root=new TreeNode(start->val);
        root->left=sortedListToBST((start==head)?nullptr:head);
        root->right=sortedListToBST(start->next); 
        return root;
    }
};