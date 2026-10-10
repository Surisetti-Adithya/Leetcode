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
    ListNode* sortList(ListNode* head) {
        vector<int> a;
        ListNode* temp = head;
        while(temp!=nullptr){
            a.push_back(temp->val);
            temp=temp->next;
        }
        sort(a.begin(),a.end());
        ListNode* r = nullptr;
        ListNode* t = nullptr;
        for(int i:a){
            ListNode* n = new ListNode(i);
            if (r==nullptr){
                r=n;
                t=n;
            }
            else{
                t->next = n;
                t = n;
            }
        }
        return r;
    }
};