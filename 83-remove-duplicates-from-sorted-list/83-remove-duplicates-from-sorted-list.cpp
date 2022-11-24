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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == nullptr || head->next == nullptr) return head;
        
        ListNode* startNode = head;
        ListNode* currentNode = head->next;
        
        int currentVal = head->val;
        
        while(currentNode != nullptr){
            if(currentNode->val !=  currentVal){
                 startNode->next = currentNode;
                 currentVal = currentNode->val;
                 startNode = currentNode;
            }
            currentNode = currentNode->next;
        }
        
        startNode->next = nullptr;
     
        return head;
    }
};