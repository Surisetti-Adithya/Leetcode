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
    ListNode* mergeKLists(vector<ListNode*>& n) {
        vector<int> a;
        for (ListNode* i : n) {
            while (i != nullptr) {
                a.push_back(i->val);
                i = i->next;
            }
        }
        sort(a.begin(), a.end());
        ListNode* head = nullptr;
        ListNode* temp = nullptr;
        for (int i : a) {
            ListNode* r = new ListNode(i);
            if (head == nullptr) {
                head = r;
            } 
            else {
                temp->next = r;
            }
            temp=r;
        }
        return head;
    }
};