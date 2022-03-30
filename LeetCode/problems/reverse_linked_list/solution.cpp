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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) {
            return nullptr;
        }
        
        ListNode* prev = nullptr;
        
        ListNode* ptr = head;
        while(ptr != nullptr) {
            ListNode* temp = ptr->next;
            ptr->next = prev;
            prev = ptr;
            ptr = temp;
        }
        
        return prev;
    }
};