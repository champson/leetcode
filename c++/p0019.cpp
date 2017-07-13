/* 19. Remove Nth Node From End of List
 * Given a linked list, remove the nth node from the end of list and return its head.
 *
 * For example,
 *
 * Given linked list: 1->2->3->4->5, and n = 2.
 *
 * After removing the second node from the end, the linked list becomes 1->2->3->5.
 * Note:
 * Given n will always be valid.
 * Try to do this in one pass.
 */

/**
 *  * Definition for singly-linked list.
 *   * struct ListNode {
 *    *     int val;
 *     *     ListNode *next;
 *      *     ListNode(int x) : val(x), next(NULL) {}
 *       * };
 *        */
class Solution {
  public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      if (n <= 0 || head == NULL) return head;
      ListNode *p = head, *q = head;
      while (n-- > 1)
        p = p->next;

      if (p->next == NULL) {
        p = head;
        head = head->next;
        free(p);
        return head;
      }

      while(p->next->next) {
        p = p->next;
        q = q->next;
      }
      p = q->next;
      q->next = p->next;
      free(p);
      return head;
    }
};
