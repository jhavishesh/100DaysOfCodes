// https://practice.geeksforgeeks.org/problems/preorder-traversal/1/?track=DSA-Foundation-Tree&batchId=197

//Solution:

void preOrder(Node *root ,vector<int> &v)
{   
    if(root!=NULL)
    {
    
    v.push_back(root->data);
    preOrder(root->left,v);
    preOrder(root->right,v);
}
}
vector <int> preorder(Node* root)
{
    vector<int> res;
    
    preOrder(root,res);
    
    return res;
}
