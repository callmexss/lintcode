/*
 * File:          带环链表.cpp
 * File Created:  Wednesday, 10th October 2018 8:35:33 pm
 * Author:        xss (callmexss@126.com)
 * Description:   Lintcode 102
 * -----
 * Last Modified: Wednesday, 10th October 2018 8:35:33 pm
 * Modified By:   xss (callmexss@126.com)
 * -----
 */

//Definition of singly-linked-list:
class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode(int val)
  {
    this->val = val;
    this->next = NULL;
  }
}

/**
 * 使用快慢双指针fast, slow。
 * 其中slow从head开始, fast 从head.next开始。
 * slow每次走两步，fast每次走两步。
 * 如果有环，fast和slow会相遇。
 * 即 if slow is fast，return True; otherwise, return False;
 */

class Solution
{
public:
  /**
     * @param head: The first node of linked list.
     * @return: True if it has a cycle, or false
     */
  bool hasCycle(ListNode *head)
  {
    // write your code here
    // 快指针从head.next开始，所以首先判断head和head.next是否为空
    if (head == NULL || head->next == NULL)
    {
      return false; // 没有环
    }

    ListNode *fast, *slow;
    fast = head->next;
    slow = head;
    // next有空则一定不是环
    while (fast != NULL && fast->next != NULL)
    {
      if (fast == slow)
      {
        return true;
      }
      fast = fast->next->next;
      slow = slow->next;
    }
    return false;
  }

};