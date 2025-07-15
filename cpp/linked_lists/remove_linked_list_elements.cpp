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

        
        // Remove all head nodes with value == val
        while (head != NULL && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        ListNode* temp = head;
        while (temp != NULL && temp->next != NULL) {
            if (temp->next->val == val) {
                ListNode* del = temp->next;
                temp->next = temp->next->next;
                delete del;
            } else {
                temp = temp->next;
            }
        }
        return head;
    }
};