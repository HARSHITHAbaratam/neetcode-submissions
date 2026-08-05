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
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* sec=slow->next;
        slow->next=nullptr;

        ListNode* ptr=nullptr;
        ListNode* temp;
        while(sec){
           temp=sec->next;
           sec->next=ptr;
           ptr=sec;
           sec=temp;
        }
        ListNode* head2=head;
        while(ptr){
            ListNode* first=head2->next;
            ListNode* second=ptr->next;

            head2->next=ptr;
            ptr->next=first;

            head2=first;
            ptr=second;
        }
         
    }
};
