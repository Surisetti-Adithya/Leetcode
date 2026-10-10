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
    ListNode* deleteMiddle(ListNode* head) {
        if (head==NULL || head->next==NULL){
            return nullptr;
        }
        ListNode* p = head;
        ListNode* s = head;
        ListNode* f = head;
        while(f && f->next){
            p = s;
            s = s->next;
            f = f->next->next;
        }
        p->next = s->next;
        return head;
    }
};