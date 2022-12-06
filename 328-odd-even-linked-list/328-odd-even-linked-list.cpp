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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head == nullptr || head->next == nullptr) return head;
        
        ListNode* current = head;
        ListNode* headOdd = nullptr;
        
        ListNode* lastEven = nullptr;
        ListNode* lastOdd = nullptr;
        
        int counter = 0;
        while(current != nullptr){
            if(counter % 2 == 0){
                if(lastEven == nullptr){
                    lastEven = current;
                }else{
                    lastEven->next = current;
                    lastEven = current;
                }
            }else{                
                if(lastOdd == nullptr){
                    lastOdd = current;
                    headOdd = current;
                }else{
                    lastOdd->next = current;
                    lastOdd = current;
                }
            }
            
            counter++;
            
            current = current->next;
        }
        
        lastOdd->next = nullptr;
        lastEven->next = headOdd;
        return head;
    }
};