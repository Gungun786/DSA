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
    int pairSum(ListNode* head) {
        int sum=INT_MIN;
  ListNode* slow=head;
  ListNode* fast=head;
        while(fast!=nullptr&&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
    
        }
        ListNode*prev=nullptr;
        

        while(slow!=nullptr){
            ListNode* temp=slow->next;
            slow->next=prev;
            prev=slow;
            slow=temp;
        }
        while(head!=nullptr&&prev!=nullptr){
            int ans=head->val+prev->val;
            head=head->next;
            prev=prev->next;
            sum=max(ans,sum);
            
        }
          return sum;
    }
};