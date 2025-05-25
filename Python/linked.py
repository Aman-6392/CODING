class Node:
    def __init__(self,data):
        self.data=data
        self.next=None


node1=Node(10)
node2=Node(20)
node3=Node(30)
node4=Node(40)
node5=Node(50)

node1.next=node2
node2.next=node3
node3.next=node4
node4.next=node5



#Print
current = node1
while current is not None:
    print(current.data,end=" -> ")
    current = current.next
print("None")



#Delete from start
head=node1
if head is not None:
    head=head.next

current = head
while current is not None:
    print(current.data,end=" -> ")
    current = current.next
print("None")



#Delete from end
current=node1
while current.next.next is not None:
    current=current.next
current.next = None

current=head
while current is not None:
    print(current.data,end=" -> ")
    current = current.next
print("None")



#Delete any node
current=head
while current.next.data !=30:
    current = current.next
current.next=current.next.next

current=head
while current is not None:
    print(current.data,end=" -> ")
    current = current.next
print("None")



#add at end
new_node=Node(60)
current = head

while current.next is not None:
    current=current.next
current.next=new_node

current=head
while current is not None:
    print(current.data,end=" -> ")
    current = current.next
print("None")


#Add any
new_node=Node(25)
current=head

while current.next is not None and current.data != 20:
    current=current.next
new_node.next=current.next
current.next=new_node

current=head
while current is not None:
    print(current.data,end=" -> ")
    current = current.next
print("None")
