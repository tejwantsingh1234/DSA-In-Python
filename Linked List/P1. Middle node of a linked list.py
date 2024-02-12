#!/usr/bin/env python
# coding: utf-8

# P1. Find Middle Node of a Linked List

# In[2]:


class Node:
    def __init__(self,value):
        self.value = value
        self.next = None


# In[46]:


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
        
    def middle_of_LL(self):
        # Initialize 2 pointers slow and fast 
        slow = self.head
        fast = self.head
        while fast is not None and fast.next is not None:
            slow = slow.next          # slow will move one node at a time
            fast = fast.next.next     # fast will move 2 nodes at a time and once fast reaches end, return slow 
        return slow


# In[52]:


my_linked_list = LinkedList(17)
my_linked_list.append(12)
my_linked_list.append(10)
my_linked_list.append(11)
my_linked_list.append(1)


# In[51]:


my_linked_list.middle_of_LL().value

