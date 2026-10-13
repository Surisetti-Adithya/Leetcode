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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr || head->next->next==nullptr){
            return head;
        }
        struct ListNode* temp = head->next->next;
        struct ListNode* l1 = head;
        struct ListNode* l2 = head->next;
        struct ListNode* t1 = l1;
        struct ListNode* t2 = l2;
        while(temp!=nullptr && temp->next!=nullptr){
            t1->next = temp;
            t1 = temp;
            temp = temp->next;
            t2->next = temp;
            t2 = temp;
            temp = temp->next;
        }
        if(temp!=nullptr){
            t1->next = temp;
            t1 = t1->next;
        }
        t1->next = l2;
        t2->next = nullptr;
        return l1;
    }
};