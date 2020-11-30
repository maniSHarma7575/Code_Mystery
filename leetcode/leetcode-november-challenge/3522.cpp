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
       stack<int> s1, s2;
        int val1, val2;
        int carry = 0;
        int sum=0;
        ListNode *temp;
        
        ListNode *ans = NULL;
        
        temp = l1;
        
        while(temp != NULL) {
            s1.push(temp->val);
            temp = temp->next;
            
        }
        
        temp = l2;
        while(temp != NULL) {
            s2.push(temp->val);
            temp = temp->next;
            
        }
        
        while(!s1.empty() || !s2.empty()) {
            sum = 0;
            if(!s1.empty()) {
                val1 = s1.top();
                s1.pop();
                sum = sum + val1;
            } 
            
            if(!s2.empty()){
                val2 = s2.top();
                sum = sum + val2;
                s2.pop();
            }
                        
            sum = sum + carry;
            carry = sum / 10;
            
            temp = new ListNode(sum%10);
            temp->next = ans; 
            ans = temp;
            
            
        } // end of stack
        
        if(carry > 0) {
            temp = new ListNode(1);
            temp->next = ans; 
            ans = temp;  
            
        }
        
        return ans;
    }
};