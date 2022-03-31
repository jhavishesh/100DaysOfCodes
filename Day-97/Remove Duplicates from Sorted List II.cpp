// https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/


//Solution:

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
     ListNode* curr=head;
      ListNode* temp = new ListNode();
        ListNode* temp2 = temp;
        
        while(head) {
            int count = 0;
            ListNode* temp3 = head;
            while(temp3 && temp3->val == head->val) {
                count++;
                temp3 = temp3->next;
            }
			// if there is only single node of this value
            if(count == 1) {
                temp2->next = head;
                temp2 = temp2->next;
            }
            head = temp3;
        }
        temp2->next = NULL;
        
        return temp->next;
    }
};
