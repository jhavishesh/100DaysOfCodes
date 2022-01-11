/* https://practice.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1 */

//Solution:

class Solution
{
    public:

    void helper(Node *root, vector<int> &v){
        if(!root){
            v.push_back(-1);
            return;
        }
        v.push_back(root->data);
        helper(root->left, v);
        helper(root->right, v);
    }
    vector<int> serialize(Node *root) 
    {
        vector<int> v;
        helper(root, v);
        
        return v;
    }
    
    int i=0;
    Node * deSerialize(vector<int> &A)
    {
        if(A.size() == 0){
            return NULL;
        }
        if(A[i] == -1){
            i++;
            return NULL;
        }
        
        Node *root = new Node(A[i++]);
        root->left = deSerialize(A);
        root->right = deSerialize(A);
        
        return root;
    }

};
