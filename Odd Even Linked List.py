# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        if not head or not head.next:
            return head

        Even = head.next
        evenCur, oddCur = head.next, head

        while evenCur and evenCur.next:

            nextOdd = evenCur.next
            evenCur.next = evenCur.next.next
            oddCur.next = nextOdd

            evenCur = evenCur.next
            oddCur = oddCur.next

        oddCur.next = Even

        return head
        
