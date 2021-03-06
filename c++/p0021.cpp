/* 21. Merge Two Sorted Lists
 * Merge two sorted linked lists and return it as a new list. The new
 * list should be made by splicing together the nodes of the first two lists.
 */
/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
  public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      if (!l1) return l2;
      if (!l2) return l1;
      ListNode *q = NULL, *p = NULL;
      if (l1->val < l2->val) {
        q = l1;
        l1 = l1->next;
      } else {
        q = l2;
        l2 = l2->next;
      }
      p = q;
      while (l1 && l2) {
        if (l1->val < l2->val) {
          p->next = l1;
          p = l1;
          l1 = l1->next;
        } else {
          p->next = l2;
          p = l2;
          l2 = l2->next;
        }
      }
      if (l1) p->next = l1;
      if (l2) p->next = l2;
      return q;
    }
};
