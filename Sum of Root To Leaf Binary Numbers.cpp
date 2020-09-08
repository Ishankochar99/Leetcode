
class Solution {
public:
    int sum=0;
    int sumRootToLeaf(TreeNode* root) {
        uptoLeafBinary(root,0);
        return sum;
    }
      void  uptoLeafBinary(TreeNode* root, int num) {
        if(root == NULL) {
            return;
        }
        num = num*2 + root->val;
        uptoLeafBinary(root->left,num);
        uptoLeafBinary(root->right,num);
        if(root->left == NULL && root->right == NULL) {
            sum +=num;
        }
    }
};
