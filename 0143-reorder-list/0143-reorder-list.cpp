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
    void reorderList(ListNode* head) {
        struct ListNode* temp = head;
        struct ListNode* t1 = head;
        struct ListNode* l2;
        int n=0;
        while(temp!=nullptr){
            n++;
            temp = temp->next;
        }
        //divide in middle

        int m = (n-1) /2; 
        while(m>0){
            t1 = t1->next;
            m--;
        }
        l2 = t1->next;
        t1->next = nullptr;

        //reverse 2nd list

        struct ListNode* c = l2;
        struct ListNode* p = nullptr;
        struct ListNode* nt;
        while(c!=nullptr){
            nt = c->next;
            c->next = p;
            p = c;
            c = nt;
        }

        //join each element of corresponding list

        ListNode* f = head;
        ListNode* s = p;
        while(s!=nullptr){
            ListNode* nextf = f->next;
            ListNode* nexts = s->next;
            f->next = s;
            s->next = nextf;
            f = nextf;
            s = nexts;
        }
    }
};