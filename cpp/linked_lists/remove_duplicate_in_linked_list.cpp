**
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
    ListNode* deleteDuplicates(ListNode* head) {

        if (head == NULL || head->next == NULL) {

            return head;

        }

        ListNode* slow = head;

        

        while (slow!= NULL&&slow->next!=NULL) {

            if (slow->val == slow->next->val) {

                ListNode* fast = slow->next;
                slow->next = slow->next->next;
                delete fast;
            } else {
                slow = slow->next;
            }
        }
        return head;
    }
};