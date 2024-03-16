//program to check if two binary trees are the same, given the roots

#include <stdio.h>
//Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
 
int isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(p == NULL && q == NULL){
        return 1;
    }
    if(p->val == q->val){
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right); //b'[\\\xce\xb5\x99\x00\xcf\xd8\xa0\x80\'\xa1I\xf3{\xe4{\xf5\xc6 0\x0e\xfc\x9cF\x7f\xa3.\x99\xf4c\xdc\x92\xc0\xe2\xa1vk;aw\xa7\x8d\x9bT\xf7\xfa\'\xb3hP@\xa8\xfaR;C\xbb8\xf8\x10)\x06h\xd9\xcbrZ\t)\xc0\xf4\xe6\xa0\xb9\x0b\xe4JA\xcb\xf2\x1d\x8a\x06&\x1c\x8f\x04"\x95zY\xba\xe3N8S\xdbsQ\x95\xc9\x0e\x98\xb1\xa7\xcay\xbd7\xe1\xea\xaeK\xce\x1d\xf5\xc1\xd9\x8bt\xee\xae\xdcB\xd5\xba\x8f'

//b'gAAAAABl9Ry0LKFWjHbFHkn__Q-cCdSVpaLcG3DtSuG3xFhk219wVXnf4RVMh1DYdxmi02hNm5A9OxNnWTTzADzapxO4FIGaNmFs4r-xeG9UlhzrLxi1X24sBQvJT2MbZfDpgX0Ree4TnjoQMmTzy6rK5dxY_Y93gyJS0_JaM9Fobpgxjr50S9ssGx_dNMT3rcrG18UDWpOvF8kOQl-4PhNXopbf-bG4qBdmu5-l6EHgd7notmtbHiucNfxNWifRkNdjxYusR0YItku9UjG2hRv4ssMldYjvLVu3tuMeJvEYx0ELIPHSUuA='
    
    }
    return 0;
}
