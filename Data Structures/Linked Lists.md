# Linked Lists

Abstract Data Type (ADT) is a useful tool for specifying the logical properties of a data type. An ADT is a collection of values and set of operations on those values.

- A list of elements of type T is a finite sequence of elements of type T together with operations of —- create, update, delete, testing for null/empty, finding size, and traversing.

## Linked Lists

A linked list is a series of nodes linked to each other.

- Each node contains an object, and at least one link to another node.
- The first node is called the ‘Head’ node, and last node is called ‘tail’ node.
- The last node (tail) contains null as part of its link to mark the end of the list.
- The insertion is of constant time O(1) operation, such that insertion is either at the head or the tail.
- We chose to always maintain pointers (or more aptly references) to the node(s) at the head and tail of the linked list and so performing a traditional insertion to either the front or back of the linked list is an O(1) operation
- ***Random insertion is excluded except when insertion is before a node that is neither head or tail.*** 
When the node we are inserting before is somewhere in the middle of the linked list (known as random insertion) the complexity is O(n).
- Deletion & Searching are both O(n).
- Linked List is the second most used data structure after array.

**Why Linked List?**

1. Insertion is O(1), except for random insertion.
2. The list is dynamically resized, thus it incurs no copy penalty like an array

or vector would eventually incur.

 

![linked-list.png](linked-list.png)

## Singly Linked List

A node in singly linked list contains —-

1. Value or Data
2. Reference to next node

![image.png](singly-linked-list.png)

```cpp
#include <iostream>
#include <cstdlib>

using namespace std;

// Structure of the node
class Node{
  public: 
  Node *next;
  int data;
};

// Structure of the Linked List
class LinkedList{
  public: 
  int length;
  Node *head;

  LinkedList();
  ~LinkedList();
  
  bool isEmpty();
  int size();
  
  // Linked List Operations
  void insert(int data);
  void remove(int key);
  Node* search(int key);
  void traverse();
  void reverse_traverse();
 };
 
// Constructor Definitions
LinkedList::LinkedList(){
  this->length = 0;
  this->head = NULL;
}

// Destructor Definitions
LinkedList::~LinkedList(){ 
	cout << "The list is been deleted"; 
}

bool LinkedList::isEmpty() {
  if (this->length == 0 && this->head == NULL) {
    return true;
  } else {
    return false;
  }
}

int LinkedList::size(){ 
	return this->length; 
}

// Class Function Definitions
void LinkedList::insert(int data) {
  Node *node = new Node();
  node->data = data;
  node->next = nullptr;

  Node *temp = head;
  if (temp == NULL) {
    head = node;
  } else {
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = node;
  }

  this->length = this->length + 1;
}

void LinkedList::remove(int key) {
  Node *temp = head;
  bool found = false;

  if (head->data == key) {
    head = head->next;
    delete temp;
    cout << "\n Node " << key << " deleted successfully \n";
    found = true;
  } else {
    while (temp->next != NULL) {
      // temp!=NULL produces segmentation fault
      if (temp->next->data == key) {
        Node *link = temp->next;
        temp->next = link->next;
        delete link;
        found = true;
        cout << "\n Node " << key << " deleted successfully \n";
      }
      temp = temp->next;
    }
    if (!found)
      cout << "\n Node with key " << key << " does not exist \n";
  }

  this->length = this->length - 1;
}

Node *LinkedList::search(int key) {
  if (head->data == key)
    return head;

  Node *temp = head;
  bool found = false;

  while (temp != NULL) {
    if (temp->data == key)
      return temp;
    temp = temp->next;
  }

  if (!found)
    return NULL;
}

void LinkedList::traverse() {
  Node *temp = head;

  cout << "\n\nTraversing the Linked List -- \n\n";
  cout << "Size: " << this->size();
  cout << "\n\nItems: ";

  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "\n\n";
}

// 
void LinkedList::reverse_traverse() {
  Node *temp = head;
  // Last Element, marks the end of the list
  Node *tail = NULL;

  if (this->isEmpty()) {
    cout << "\nThe list is empty. Nothing to traverse. \n";
  }

  cout << "\n\nReverse Traversing the Linked List -- \n\n";
  cout << "Size: " << this->size();
  cout << "\n\nItems: ";

  while (temp != tail) {

    // Iterate to the end of the list to get the previous node
    // If the next element is tail, reset temp to start of the list, &
    // re-iterate
    if (temp->next == tail) {
      tail = temp;
      cout << tail->data << " ";
      temp = head;
    }

    // Last or Ending Iteration
    // Since, temp is being reset very often, we cannot use it to identify
    // whether it is the last iteration.
    // We do this with additional check of if the next item is tail
    if (temp == head && temp->next == tail) {
      cout << temp->data << " ";
    }
    temp = temp->next;
  }
}

// Main()
int main() {
  LinkedList *l = new LinkedList();
  for (int i = 0; i < 8; i++) {
    l->insert((rand() % 10) + 1);
  }

  cout << "\n\nSearch: " << (l->search(8))->data << endl;

  cout << "\nEmpty: " << l->isEmpty() << endl;
  cout << " \nSize: " << l->size();
  l->traverse();
  l->reverse_traverse();

  cout << endl;
  l->remove(6);
  l->remove(8);

  return 0;
}
```

Linked List (Implementation) : [https://replit.com/@pavittarx/LinkedLists#main.cpp](https://replit.com/@pavittarx/LinkedLists#main.cpp)

### Complexity Analysis - Singly Linked List

| Operation | Complexity |
| --- | --- |
| Insertion | O(1) |
| Random Insertion | O(n) [Not Implemented] |
| Traversing | O(n) |
| Searching | O(n) |
| Reverse Traversing | O(n.logn) [above implementation) |
| Deletion | O(n) |

## Doubly Linked List

A node within doubly linked list also keeps track of the previous node. 

- **Searching** & **Traversal** are completely same in both Singly & Doubly Linked List.
- A list is similar to an array in sense that it contains objects in linear order.
- **Insertion** & **Deletion** in list is O(1), but retrieving elements is expensive O(n).
- Lists are usually building blocks of more complex data structures such as Stacks, Queues.

| Insertion | If n is not the first node, bind the previous pointer to last node. |
| --- | --- |
| Deletion | Previous pointer needs to be updated properly |
| Reverse Traversal | Same as traversal, except that we start at the tail node. |

```cpp
#include <cstdlib>
#include <iostream>

using namespace std;

class Node {

public:
  int data;
  Node *prev;
  Node *next;
};

class DLinkedList {
public:
  int length;
  Node *head;
  Node *tail;

  DLinkedList();
  ~DLinkedList();

  bool isEmpty();
  int size();

  void insert(int key, string at);
  void remove(int key);
  void traverse();
  void reverse_traverse();
  // Node *search(int key);
};

// Constructor Definitions
DLinkedList::DLinkedList() {
  this->length = 0;
  this->head = NULL;
}

// Destructor Definitions
DLinkedList::~DLinkedList() { cout << "The list is been deleted"; }

bool DLinkedList::isEmpty() {
  if (this->length == 0 && this->head == NULL) {
    return true;
  } else {
    return false;
  }
}

int DLinkedList::size() { return this->length; }

void DLinkedList::insert(int key, string at = "end") {
  Node *node = new Node();
  node->data = key;
  node->prev = NULL;
  node->next = NULL;

  if (this->head == NULL) {
    this->head = node;
    this->tail = node;
    return;
  }

  if (at == "start") {
    node->next = this->head;
    this->head->prev = node;
    this->head = node;
  }

  if (at == "end") {
    this->tail->next = node;
    node->prev = this->tail;
    this->tail = node;
  }
}

void DLinkedList::traverse() {
  Node *temp = head;
  cout << "\n ---------------------- \n";
  cout << "Traversing the LIST ::: \n";
  cout << "Items: ";

  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

void DLinkedList::reverse_traverse() {
  Node *temp = tail;
  cout << "\n ---------------------- \n";
  cout << "[REVERSE] Traversing the LIST ::: \n";
  cout << "Items: ";

  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->prev;
  }
}

void DLinkedList::remove(int key) {
  Node *temp = head;

  while (temp->data != key) {
    temp = temp->next;
  }

  if (temp->data == key) {
    // temp->next->prev = temp->prev;
  } else {
    cout << "The data element you are trying to delete does not exist.";
  }
}

int main() {
  DLinkedList *list = new DLinkedList();

  cout << "Implementing Doubly Linked List" << endl;
  cout << "INITIAL Insert";

  list->insert(10);
  list->insert(7);
  list->insert(6);
  list->insert(2);

  list->traverse();
  list->reverse_traverse();

  list->remove(10);
  list->remove(2);

  list->traverse();

  return 0;
}
```

## **Linked List Insights & Tips**

- There are two types of list related problems —
    1. Implement your own list.
    2. Exploit the list in standard library.
- List problems often have a brute-force solution that uses $O(n)$ space, but a subtler solution that uses **existing list nodes** to reduce space complexity to $O(1)$
- The problems on lists are conceptually simple and is more about cleanly coding what is specified, rather than designing an algorithm.
- Consider using **Dummy head** (sentinel) to avoid having to check for empty lists. This simplifies code and make bugs less likely.
- It’s easy to forget **update next (also previous for doubly list)** for the head and tail.
- Algorithms operating on singly linked list often beneft from using two iterators, ane ahead of the other, or one advancing quicker than the other.  ****

---

### **References**

1. **DSA** - Granville Barnett, Luca Del Tongo
2. **Elements of Programming Interviews (C++)** - Adnan Aziz, Tsung-Hsien Lee, Amit Prakash