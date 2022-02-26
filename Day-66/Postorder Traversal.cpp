// https://practice.geeksforgeeks.org/problems/postorder-traversal/1/?track=DSA-Foundation-Tree&batchId=197

//Solution:

void postorder(Node *root,vector<int> &v)
{   
    if(root!=NULL)
    {
        
    
    postorder(root->left,v);
    postorder(root->right,v);
    v.push_back(root->data);
    }
}
vector <int> postOrder(Node* root)
{
  vector<int> res;
  
  postorder(root,res);
  
  return res;
}
