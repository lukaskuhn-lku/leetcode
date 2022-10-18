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
        //Either l1 or l2 still has nodes
        bool running = true;
        int carry = 0;
        
        std::stack<int> digits;
        
        while(running){
            int val1 = l1 != nullptr ? l1->val : 0;
            int val2 = l2 != nullptr ? l2->val : 0;
            
            int res = val1 + val2 + carry;
            carry = 0;
            
            //Set carry if needed
            if (res >= 10){
                carry = 1;
                res -= 10;
            }
            
            digits.push(res);
            
            //Set to next if there is one
            l1 = l1 != nullptr ? l1->next : nullptr;
            l2 = l2 != nullptr ? l2->next : nullptr;
            
            //Only continue if there are nodes in any list left
            if(l1 == nullptr && l2 == nullptr){
                running = false;
                if(carry == 1) digits.push(1);
            }
        }
        
        ListNode* lastNode = nullptr;
        while(digits.size() != 0){
            ListNode* node = new ListNode;
            node->next = lastNode;
            node->val = digits.top();
            lastNode = node;
                
            digits.pop();
        }
        
        return lastNode;
    }
};