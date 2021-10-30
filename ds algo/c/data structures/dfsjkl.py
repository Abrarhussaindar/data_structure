class Node():
    def __init__(self, data= None, next = None):
        self.data = data
        self.next = next

class Linkedlist():
    def __init__(self):
        self.head = None
    
    def insert_at_begging(self, data):
        node = Node(data, self.head)
        self.head = node

    def print(self):
        if self.head is None:
            print("linked list is empty")
            return
        
        itr = self.head
        llstr = ''

        while itr:
            llstr += str(itr.data) + "--->"
            itr = itr.next
        print(llstr)

if __name__ == '__main__':
    ll = Linkedlist()
    ll.insert_at_begging(1)
    ll.insert_at_begging(2)
    ll.print()