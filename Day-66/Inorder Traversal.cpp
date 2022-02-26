// https://practice.geeksforgeeks.org/problems/inorder-traversal/1/?track=DSA-Foundation-Tree&batchId=197

//Solution:

 void inorder(Node *root,vector<int> &v)
    {
        if(root!=NULL)
        {   
            inorder(root->left,v);
            v.push_back(root->data);
            inorder(root->right,v);
        }
    }
    vector<int> inOrder(Node* root) {
        
        vector<int> res;
        
        inorder(root,res);
        return res;
    }
