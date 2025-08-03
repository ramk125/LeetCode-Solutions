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
       unordered_map<int, int> inorderMap;
       int postIndex = 0;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        for(int i=0;i<inorder.size();i++)
        {
            inorderMap[inorder[i]]=i;
        }

        postIndex = postorder.size() - 1; 
        return buildSubTree(inorder, postorder, 0, inorder.size() - 1);
    }
    TreeNode* buildSubTree(vector<int>& inorder, vector<int>& postorder, int inStart, int inEnd) {
        
        if (inStart > inEnd) return nullptr;

        int rootVal = postorder[postIndex--];
        TreeNode* root = new TreeNode(rootVal);

        int inIndex = inorderMap[rootVal];


        root->right = buildSubTree(inorder, postorder, inIndex + 1, inEnd);
        root->left = buildSubTree(inorder, postorder, inStart, inIndex - 1);

        return root;
    }
    
};