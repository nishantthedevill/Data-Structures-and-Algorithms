/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
int counts(ListNode* head){
     ListNode* curr=head;
     int m=0;
        while(curr!=NULL){
            curr=curr->next;
            m++;
        }
        return m;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       if(head==NULL)
       return NULL;
        else if(head->next==NULL)
        return NULL;
        else {
        ListNode* curr=head;
        
        int i=counts(head);
        int pos=i-n;
        int count=1;
        if(pos==0)
        return head->next;
        
        while(count<pos){
            curr=curr->next;
            count++;
        }
        ListNode* temp = curr->next;
        curr->next=curr->next->next;
        
        delete temp;
        }
        return head;
    }
};