/*
Merge Two Sorted Lists

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

*/

// Solution details : Runtime 3ms, Time complexity O(m+n)

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL)     return l2;
        else if(l2 == NULL)    return l1;

        ListNode *head;

        if(l1->val < l2->val){
            head=l1;
            l1 = l1->next;
        }
        else{
            head=l2;
            l2 = l2->next;
        }

        ListNode *cur = head;
        while(l1 && l2){
            if(l1->val < l2->val){
                cur->next = l1;
                l1 = l1->next;
                
            }
            else{
                cur->next = l2;
                l2 = l2->next;
            }
            cur=cur->next;
        }
        if(l1 != NULL){
            cur->next = l1;
        }
        else if(l2 != NULL){
            cur->next = l2;
        }
        return head;
    }
    };
