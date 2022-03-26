//https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1


//Solution:


    struct Node* reverseList(struct Node *head)
    {
        Node *curr=head;
        Node *prev=NULL;
        
        while(curr)
        {
            Node *temp=curr->next;  //store the next node
            curr->next=prev;   //reverse the link  
            prev=curr;
            curr=temp;
        }
        return prev;  //return the reverse LL Node
    }
