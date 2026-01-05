#class ListNode:
#    def __init__(self, val=0, next=None):
#        self.val = val
#        self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        current = None
        new = None
        head = None
        if list1 is None and list2 is None:
            return None
        if list1 is None:
                return list2
        if list2 is None:
            return list1
        if list1.val > list2.val:
            head = ListNode()
            head.val = list2.val
            current = head
            list2 = list2.next
        else:
            head = ListNode()
            head.val = list1.val
            current=head
            list1 = list1.next

        while list1 is not None or list2 is not None:
            if list1 is None:
                new = ListNode()
                new.val = list2.val
                current.next = new
                current = new
                list2 = list2.next
            elif list2 is None:
                new = ListNode()
                new.val = list1.val
                current.next = new
                current = new
                list1 = list1.next
            elif list1.val < list2.val:
                new = ListNode()
                new.val = list1.val
                current.next = new
                current = new
                list1 = list1.next
            else:
                new = ListNode()
                new.val = list2.val
                current.next = new
                current = new
                list2 = list2.next
        return head