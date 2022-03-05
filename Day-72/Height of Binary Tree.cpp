// https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1/

//Solution:

class Solution{
    public:
    
    int height(struct Node* node){
        if(node==NULL)  //Base Case
            return 0;
        
        else
            return max(height(node->left),height(node->right))+1;  //recursive call to find height of left & right
    }
};
