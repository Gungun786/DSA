class Solution {
public:

    ListNode* rev(ListNode* head) {

        if(head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* newHead = rev(head->next);

        head->next->next = head;
        head->next = nullptr;

        return newHead;
    }

    bool isPalindrome(ListNode* head) {

        if(head == nullptr || head->next == nullptr) {
            return true;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        // Find middle
        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        ListNode* second = rev(slow);

        // Compare
        ListNode* first = head;

        while(second != nullptr) {

            if(first->val != second->val) {
                return false;
            }

            first = first->next;
            second = second->next;
        }

        return true;
    }
};