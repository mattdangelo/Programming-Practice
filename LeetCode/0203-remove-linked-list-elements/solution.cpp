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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) {
            return nullptr;
        }
        
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* next = head->next;

        while(current != nullptr) {
            if(current->val == val) {
                if(prev == nullptr) {
                    head = head->next;
                }
                else {
                    prev->next = next;
                }
            }
            else {
                prev = current;
            }
            current = next;
            next = next == nullptr ? nullptr : next->next;
        }

        return head;
    }
};
