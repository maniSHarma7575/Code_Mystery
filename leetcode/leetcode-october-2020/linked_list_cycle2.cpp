/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* intersect(ListNode *head){
        ListNode* start=head;
        ListNode* finall=head;
        while(finall!=NULL && finall->next!=NULL){
            start=start->next;
            finall=finall->next->next;
            if(start==finall){
                return start;
            }
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL ||head->next==NULL){
            return NULL;
        }
        ListNode* intercept=intersect(head);
        if(intercept==NULL){
            return NULL;
        }
        ListNode* start=head;
        while(start!=intercept){
            intercept=intercept->next;
            start=start->next;
        }
        return start;
    }
    
};