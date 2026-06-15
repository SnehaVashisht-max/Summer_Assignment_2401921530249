class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(head==NULL){
            return 0;
        }
        while(fast!=NULL && fast->next!=NULL){
           
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
         slow=slow->next;
        if(slow==fast){
            return 1;
        }
    }
        return 0;
    }
};
