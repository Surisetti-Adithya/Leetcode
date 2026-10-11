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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        int c=0;
        int s,a,b;
        while(t1!=nullptr || t2!=nullptr || c!=0){
            a = (t1 != nullptr) ? t1->val : 0;
            b = (t2 != nullptr) ? t2->val : 0;
            s = a+b+c;
            ListNode* n = new ListNode(s%10);
            c = s/10;
            if(head==nullptr){
                head = n;
                tail = n;
            }
            else{
                tail->next = n;
                tail = n;
            }
            if(t1!=nullptr) t1 = t1->next;
            if(t2!=nullptr) t2 = t2->next;
        }
        return head;
    }
};