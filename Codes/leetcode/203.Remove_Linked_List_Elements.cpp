class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val == val){
            head=head->next;
        }
        ListNode *cur = head;
        ListNode *pre = NULL;

        while(cur!=NULL){
            if(cur->val == val){
                pre->next = cur->next;
                cur = cur->next;
            }
            else{
                pre = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};