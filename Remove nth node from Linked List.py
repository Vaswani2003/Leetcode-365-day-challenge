# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        cur = head
        result = ListNode(0,head)
        while n and cur:
            cur = cur.next
            n -= 1

        anchor = result

        while cur:
            anchor = anchor.next
            cur = cur.next

        anchor.next = anchor.next.next

        return result.next
        
