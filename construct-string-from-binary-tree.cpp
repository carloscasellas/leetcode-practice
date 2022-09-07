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
    string tree2str(TreeNode* root) {
        
        string output = to_string(root->val);
        
        if(!root->left && root->right) {
            
            output += "()";
            
        } else {
            
            preOrder(root->left, output);
            
        }
        
        preOrder(root->right, output);
        return output;
        
    }
    
    void preOrder(TreeNode* node, string& output) {
        
        if(!node) return;
        
        output += "(" + to_string(node->val);
        
        if(!node->left && node->right) {
            
            output += "()";
            
        } else {
            
            preOrder(node->left, output);
            
        }
        
        preOrder(node->right, output);
        
        output += ")";
        
        
    }
};

// practiced pre-order traversal with specific conditions