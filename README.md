# 📌 Doubly Linked List Library (clsDblLinkedList) ⚡

> **A C++ template-based doubly linked list implementation providing essential list operations such as insertion, deletion, searching, and reversal. 🚀**

---

## 🌟 Project Overview

The `clsDblLinkedList` class is a **doubly linked list** implementation in C++ that allows dynamic data management using nodes connected in both forward and backward directions. This library supports:

- **Insertion** at the beginning, end, or after a specific node 🔄
- **Deletion** of nodes, including first, last, and specific nodes ❌
- **Searching** for elements in the list 🔍
- **List Reversal** to change traversal direction 🔄
- **Fetching & Updating** elements at specific indices 📌
- **Clearing** the entire list in one function call ✨

This class is **generic**, meaning it can store any data type using C++ templates.

---

## ✨ Features

### 🔹 Insertion Operations
- **`InsertAtBeginning(Value)`**: Inserts a node at the start.
- **`InsertAtEnd(Value)`**: Inserts a node at the end.
- **`InsertAfter(Node, Value)`**: Inserts a node after a given node.
- **`InsertAfter(Index, Value)`**: Inserts a node after a given index.

### 🔹 Deletion Operations
- **`DeleteNode(Node)`**: Deletes a specific node.
- **`DeleteFirstNode()`**: Deletes the first node.
- **`DeleteLastNode()`**: Deletes the last node.
- **`Clear()`**: Removes all nodes from the list.

### 🔹 Search & Retrieval
- **`Find(Value)`**: Searches for a node containing a specific value.
- **`GetNode(Index)`**: Retrieves a node at a given index.
- **`GetItem(Index)`**: Returns the value stored in a specific node.

### 🔹 Modification & Utility
- **`UpdateItem(Index, NewValue)`**: Updates the value of a node at a specific index.
- **`Reverse()`**: Reverses the order of the list.
- **`Size()`**: Returns the number of elements in the list.
- **`IsEmpty()`**: Checks if the list is empty.
- **`PrintList()`**: Displays the contents of the list.

---

## 🚀 How It Works

### 🔹 Insertion & Deletion
The class allows adding elements dynamically at different positions and provides efficient deletion methods to manage memory.

### 🔹 Searching & Indexing
Elements can be found using `Find(Value)`, or accessed via index using `GetNode(Index)` and `GetItem(Index)`. Updates are done via `UpdateItem(Index, NewValue)`.

### 🔹 Reversal & Traversal
`Reverse()` swaps the links of all nodes, effectively reversing the list order, while `PrintList()` provides a formatted view of elements.

### 🔹 Memory Management
The class dynamically allocates memory for nodes and properly deletes them when removed.

---

## 📚 Potential Enhancements

- 🏗 **Iterator Support**: Implementing iterators for STL-like traversal.
- ⏳ **Time Complexity Optimization**: Enhancing insertion, deletion, and search operations.
- 🗃️ **Persistent Storage**: Implementing file handling for storing and retrieving list data.
- 🚀 **Thread Safety**: Making the class thread-safe for concurrent operations.

---

## ⚙️ Technologies Used

- **Language**: C++
- **Templates**: Enables the list to store any data type
- **Pointers**: Used for dynamic memory management
- **Doubly Linked List**: Allows bidirectional traversal

---

## 🎯 Learning Outcomes

This project demonstrates:
- ✅ **Dynamic memory allocation & management**
- ✅ **Linked list operations (insert, delete, search, traverse, reverse)**
- ✅ **Use of C++ templates for generic programming**
- ✅ **Efficient pointer-based data structures**

---

## 📜 License

This project is **open-source**. Feel free to modify and enhance it! 🚀

---

## 🤝 Contributing

Contributions are welcome! If you have ideas for improvements, submit a Pull Request.

---

## 🏁 Ready to Explore?

### 🚀 How to Run
1. **Download** the repository.
2. **Include** `clsDblLinkedList.h` in your project.
3. **Compile & Run** your C++ program with a standard compiler (e.g., `g++ main.cpp -o output`).
4. **Test** different operations on the linked list.

---

