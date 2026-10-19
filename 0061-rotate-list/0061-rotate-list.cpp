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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head==nullptr || head->next == nullptr || k==0){
            return head;
        }
        struct ListNode* temp = head;
        int n=0;
        while(temp!=nullptr){
            temp = temp->next;
            n++;
        }
        temp = head;
        struct ListNode* cur = head->next;
        if(k>=n){
            k = k%n;
            if (k==0){
                return head;
            }
        }
        while(n-k-1>0){
            temp = temp->next;
            cur = cur->next;
            k++;
        }
        cur = temp->next;
        temp->next = nullptr;
        temp = cur;
        while(cur->next!=nullptr){
            cur = cur->next;
        }
        cur->next = head;
        return temp;
    }
};