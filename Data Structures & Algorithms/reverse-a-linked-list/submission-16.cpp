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
    ListNode* reverseList(ListNode* head) {
       if(head == nullptr) {
        return nullptr;
       }

       // get tail
       ListNode* tail = head;
       while(tail->next != nullptr) {
        tail = tail->next;
       }

       // initialize temps
       ListNode* temp_1 = head->next;
       if(temp_1 == nullptr) {
        return head;
       }
       ListNode* temp_2 = temp_1->next;
       head->next = nullptr;
       
       if(temp_2 == nullptr) {
        temp_1->next = head;
        head = temp_1;
        return head;
       }
       
       while(head != tail) {
        temp_1->next = head;
        head = temp_1;
        temp_1 = temp_2;
        if(temp_2->next != nullptr) {
            temp_2 = temp_2->next;
        }
       } 
       return head;
    }
};
