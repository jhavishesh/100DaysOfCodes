//https://practice.geeksforgeeks.org/problems/k-distance-from-root/1#

//Solution:

vector<int> vec;
void help(struct Node* root,int k)
{
    if(!root || k<0)return ;
    
    help(root->left,k-1);
    if(k==0){
    vec.push_back(root->data);
    }
    help(root->right,k-1);
}
vector<int> Kdistance(struct Node *root, int k)
{
    vec.clear();
    help(root,k);
    return vec;
}
