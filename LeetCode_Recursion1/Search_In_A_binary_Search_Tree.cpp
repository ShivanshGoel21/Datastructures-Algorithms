class Solution {
public:
    TreeNode* ansHead;
    void mysearch(TreeNode* root,int val){
        if(root){
            mysearch(root->left,val);
            if(root->val==val) ansHead=root;
            mysearch(root->right,val);
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        ansHead=NULL;
        mysearch(root,val);
        return ansHead;
    }
};
