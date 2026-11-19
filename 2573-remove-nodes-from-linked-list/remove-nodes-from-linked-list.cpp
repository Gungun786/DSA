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
ListNode* reverse(ListNode* head){
    if(head==nullptr||head->next==nullptr){
        return head;
    }
    ListNode* curr=head;
    ListNode* prev=nullptr;
    while(curr!=nullptr){
        ListNode* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}
    ListNode* removeNodes(ListNode* head) {
      head=reverse(head);
      
      ListNode*curr=head;
      int maxi=curr->val;
      while(curr!=nullptr&&curr->next!=nullptr){
        if(curr->next->val<maxi){
            curr->next=curr->next->next;
        }else{
            
            curr=curr->next;
            maxi=curr->val;
        }
      }
      head=reverse(head);
      return head;
    }
};