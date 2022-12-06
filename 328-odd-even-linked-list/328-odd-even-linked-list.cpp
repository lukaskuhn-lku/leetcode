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
             // Return the empty list if the head is null
          if (!head)
          {
            return nullptr;
          }

          // Create pointers to the first and second nodes of the list
          ListNode* odd = head;
          ListNode* even = head->next;

          // Create a pointer to the start of the even nodes
          ListNode* even_head = even;

          // Traverse the list and reorder the nodes
          while (even && even->next)
          {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
          }

          // Append the even nodes to the end of the odd nodes
          odd->next = even_head;

          return head;
    }
};