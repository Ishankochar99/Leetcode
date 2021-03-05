class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)return head;
        ListNode* curr=head;
        ListNode* prev=nullptr;
        while(curr){
            if(curr->val==val){
                prev->next=curr->next;
            }else{
                prev=curr;
            }
                curr=curr->next;
        }
        return head;
    }
};
