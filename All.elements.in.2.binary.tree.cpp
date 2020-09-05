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
    void preorder1(TreeNode* root1,vector<int>&res){
         if(!root1){
        return;
    }
    res.push_back(root1->val);
    preorder1(root1->left,res);
    preorder1(root1->right,res);
    return;
    }
     vector<int> merge(vector<int>& list1, vector<int>& list2 )
    {
        int size1 = list1.size();
        int size2 = list2.size();

        vector<int> result (size1 + size2);

        int i = 0, j = 0, k = 0;
        while(i < size1 && j < size2)
        {
            if(list1[i] < list2[j])
                result[k++] = list1[i++];

            else
                result[k++] = list2[j++];
        }

        while(i<size1)
            result[k++] = list1[i++];
        while(j<size2)
            result[k++] = list2[j++];

        return result;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>res1,res2;
        preorder1(root1,res1);
        preorder1(root2,res2);
        vector<int>res=merge(res1,res2);
        sort(res.begin(),res.end());
        return res;
    }
};
