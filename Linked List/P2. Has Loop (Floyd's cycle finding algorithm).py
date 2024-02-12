#!/usr/bin/env python
# coding: utf-8

# Write a method called has_loop that is part of the linked list class.
# 
# The method should be able to detect if there is a cycle or loop present in the linked list.
# 
# You are required to use Floyd's cycle-finding algorithm (also known as the "tortoise and the hare" algorithm) to detect the loop.

# In[2]:


class Node:
    def __init__(self,value):
        self.value = value
        self.next = None
        
class LinkedList:
    def __init__(self,value):
        new_node = Node(value)
        self.head = new_node
        self.tail = new_node
        
    def append(self,value):
        new_node = Node(value)
        if self.head == None:
            self.head = new_node
            self.tail = new_node
        else:
            self.tail.next = new_node
            self.tail = new_node
        
    def has_loop(self):
        slow = self.head
        fast = self.head
        while fast is not None and fast.next is not None:
            slow = slow.next
            fast = fast.next.next
            if fast == slow:
                return True
        return False


# In[3]:


my_linked_list = LinkedList(17)
my_linked_list.append(12)
my_linked_list.append(10)
my_linked_list.append(11)
my_linked_list.append(1)

my_linked_list.has_loop()


# In[4]:


my_linked_list_1 = LinkedList(1)
my_linked_list_1.append(2)
my_linked_list_1.append(3)
my_linked_list_1.append(4)
my_linked_list_1.tail.next = my_linked_list_1.head

print(my_linked_list_1.has_loop() )


# In[ ]:




