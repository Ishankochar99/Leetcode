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
    void utilright(TreeNode* root,int level,int* max_l,vector<int>*v){
        if(root==NULL){
            return;
        }
        if(level>*max_l){
            v->push_back(root->val);
            *max_l=level;
        }
        utilright(root->right,level+1,max_l,v);
         utilright(root->left,level+1,max_l,v);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        int max_l=0;
        utilright(root,1,&max_l,&v);
        return v;
    }
};
