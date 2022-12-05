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
    ListNode* middleNode(ListNode* head) {
        ListNode* current = head;
        
        int counter = 0;
        while(current != nullptr){
            current = current->next;
            counter++;
        }
        
        std::cout << counter << std::endl;
        
        
        for(int i = 0; i<(counter/2); i++){
            head = head->next;    
        }
        
        return head;
    }
};