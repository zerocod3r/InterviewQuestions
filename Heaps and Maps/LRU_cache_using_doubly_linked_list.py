# Design and implement a data structure for LRU (Least Recently Used) cache. It should support the following operations: get and set.

# get(key) - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.
# set(key, value) - Set or insert the value if the key is not already present. When the cache reaches its capacity, it should invalidate the least recently used item before inserting the new item.
# The LRU Cache will be initialized with an integer corresponding to its capacity. Capacity indicates the maximum number of unique keys it can hold at a time.

# Definition of “least recently used” : An access to an item is defined as a get or a set operation of the item. “Least recently used” item is the one with the oldest access time.

# Input : 
         # capacity = 2
         # set(1, 10)
         # set(5, 12)
         # get(5)        returns 12
         # get(1)        returns 10
         # get(10)       returns -1
         # set(6, 14)    this pushes out key = 5 as LRU is full. 
         # get(5)        returns -1 



class Node:
    
    def __init__(self, key, value):
        self.key = key
        self.value = value
        self.prev = None
        self.next = None


class LRUCache:

    # @param capacity, an integer
    def __init__(self, capacity):
        self.capacity = capacity
        self.cache = {}
        self.head = Node(0, 0)
        self.tail = Node(0, 0)
        self.head.next = self.tail
        self.tail.prev = self.head
    
    def add_ll(self, key, value):
        node = Node(key, value)
        p = self.tail.prev
        p.next = node
        self.tail.prev = node
        node.next = self.tail
        node.prev = p
    
    def remove_ll(self, node):
        p = node.prev
        n = node.next
        p.next = n
        n.prev = p

    # @return an integer
    def get(self, key, updated_value=None):
        if key not in self.cache.keys():
            return -1
        else:
            current = self.head
            while True:
                if current.key == key:
                    break
                else:
                    current = current.next
            ans = current.value
            self.remove_ll(current)
            if updated_value:
                self.add_ll(key, updated_value)
            else:
                self.add_ll(key, ans)
            return ans

    # @param key, an integer
    # @param value, an integer
    # @return nothing
    def set(self, key, value):
        if key not in self.cache.keys():
            if len(self.cache) < self.capacity:
                node = Node(key, value)
                self.add_ll(key, value)
                self.cache[key] = value
            else:
                n = self.head.next
                self.remove_ll(n)
                del self.cache[n.key]
                self.add_ll(key, value)
                self.cache[key] = value
        else:
            self.cache[key] == value
            self.get(key, value)
