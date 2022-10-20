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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* resultNode = nullptr;
        ListNode* head = nullptr;
        
        //Run through both list simultaneously and pick the one which is lower
        while(list1 != nullptr || list2 != nullptr){            
            ListNode* node = new ListNode;
            
            if(list1 != nullptr && list2 != nullptr){
                if(list1->val <= list2->val){
                    node->val = list1->val;
                    list1 = list1->next;
                }else{
                    node->val = list2->val;  
                    list2 = list2->next;
                }
            // Only list1 has elements left
            }else if(list1 != nullptr && list2 == nullptr){
                node->val = list1->val;
                list1 = list1->next;
            // Only list2 has elements left
            }else if(list2 != nullptr && list1 == nullptr){
                node->val = list2->val;
                list2 = list2->next;
            }
            
            //std::cout << node->val << std::endl;
            
            if(resultNode == nullptr){
                resultNode = node;
                head = resultNode;
            }else{
                resultNode->next = node;
                resultNode = resultNode->next;
            }
            
            std::cout << resultNode->val << std::endl;
        }
        
        return head;
    }
};