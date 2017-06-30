/* 2. Add Two Numbers 
 * You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
 *
 * You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 *
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution1 {
  public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode *fake = new ListNode(0); 
      ListNode *node = fake;
      int carry = 0, val;
      while(l1 && l2) {
        val = l1->val + l2->val + carry;
        carry = val / 10;
        ListNode *n = new ListNode(val % 10); 
        node->next = n;
        node = n;
        l1 = l1->next;
        l2 = l2->next;
      }
      while(l1) {
        val = l1->val+ carry;
        carry = val / 10;
        ListNode *n = new ListNode(val % 10); 
        node->next = n;
        node = n;
        l1 = l1->next;            
      }
      while(l2) {
        val = l2->val+ carry;
        carry = val / 10;
        ListNode *n = new ListNode(val % 10); 
        node->next = n;
        node = n;
        l2 = l2->next;            
      }
      if(carry) {
        ListNode *n = new ListNode(1); 
        node->next = n;   
      }
      node = fake->next;
      delete fake;
      return node;
    }
};

class Solution2 {
  public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode *fake = new ListNode(0); 
      ListNode *node = fake;
      int carry = 0, val, a, b;
      while(l1 || l2) {
        a = l1 ? l1->val : 0;
        b = l2 ? l2->val : 0;
        val = a + b + carry;
        carry = val / 10;
        ListNode *n = new ListNode(val % 10); 
        node->next = n;
        node = n;
        l1 = l1 ? l1->next : NULL;
        l2 = l2 ? l2->next : NULL;
      }
      if(carry) {
        ListNode *n = new ListNode(1); 
        node->next = n;   
      }
      node = fake->next;
      delete fake;
      return node;
    }
};

