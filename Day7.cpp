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
   int lvx, lvy, px, py;
    void dfs(TreeNode* root, int prevpar, int x, int y, int level)
    {
        if(root == NULL)
            return;
    
        if(root->val == x)
            lvx = level, px = prevpar;
            
        if(root->val == y)
            lvy = level, py = prevpar;
        
        dfs(root->left, root->val, x, y, level + 1);
        dfs(root->right, root->val, x, y, level + 1);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root, -1, x, y, 0);
        return lvx == lvy && px != py ? true : false;
    }
};