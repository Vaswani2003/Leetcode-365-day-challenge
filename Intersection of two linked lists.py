# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def cover_difference(self,d, A, B):
        cur1, cur2 = A, B

        for i in range(d):
            if cur1 is None:
                return None
            cur1 = cur1.next

        while cur1 is not None and cur2 is not None:
            if cur1 is cur2:
                return cur1
            
            cur1 = cur1.next
            cur2 = cur2.next
        
        return None

    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        len1, len2 = 0,0

        cur1 = headA
        cur2 = headB

        while cur1 is not None:
            cur1 = cur1.next
            len1 += 1

        while cur2 is not None:
            cur2 = cur2.next
            len2 += 1

        if len1 > len2:
            return self.cover_difference(len1-len2, headA, headB)
        else:
            return self.cover_difference(len2-len1, headB, headA)
        
