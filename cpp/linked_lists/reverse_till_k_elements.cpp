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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode*temp = head;
        int count = 0;

        while(temp!=NULL&&count<k)
        {
            temp = temp->next;
            count++;
        }


        if(count<k) return head;

        ListNode*cur = head;
        ListNode*prev = NULL;
        ListNode*next = NULL;
        
        count = 0;
        while(cur!=NULL&&count<k)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
            count++;
            
        }
        if(next!=NULL)head->next = reverseKGroup(next,k);
        return prev;
    }
};