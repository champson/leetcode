/* 23. Merge k Sorted Lists
 * Merge k sorted linked lists and return it as one sorted list.
 * Analyze and describe its complexity.
 */
/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct compareNode {
  bool operator()(const ListNode* lhs, const ListNode* rhs) const {
    return lhs->val > rhs->val;
  }
};
class Solution {
  public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
      priority_queue<ListNode*, vector<ListNode*>, compareNode> q;
      ListNode head(0), *p = &head;
      for (ListNode * l : lists) {
        if (l) q.push(l);
      }
      while (!q.empty()) {
        p->next = q.top();
        p = p->next;
        if (p->next)
          q.push(p->next);
        q.pop();            
      }

      return head.next;
    }
};
