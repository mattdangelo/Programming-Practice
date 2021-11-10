/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        std::unordered_set<ListNode*> visited;

        while(head != nullptr) {
            if(visited.count(head)) {
                return true;
            }
            else {
                visited.insert(head);
            }
            head = head->next;
        }

        return false;
    }
};