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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        temp = head;
        int u = 0;
        ListNode* prev = head;
        while (temp != NULL) {
            if(u == 0 && u == count - n){
                head = head->next;
                break;
            }
            if (u == count - n) {
                prev->next = temp->next;
            }
            if (n == 1 && count == 1) {
                head = NULL;
                break;
            }
            u++;
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
};