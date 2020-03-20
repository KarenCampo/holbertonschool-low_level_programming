							TASK 0x12. C 

# ***SINGLY LINKED LISTS***

## Resources

* [Linked Lists](https://www.youtube.com/watch?v=udapt4FGY20&feature=youtu.be&t=2m10s)
* [Data Strutures](https://intranet.hbtn.io/concepts/120)

## Some Requirements

* Programs and Functions will be compiled with gcc 4.8.4
* All files should be compiled with Ubuntu 14.04 LTS
* The only C standar library funtions allowed are **malloc**, **free**, and **exit**
* The use of global variables is forbidden

## General Learning Objetives

* When and why using linked lists vs arrays
* How to build and use linked lists

###  When and why using linked lists vs arrays

Both Linked List and Array are used to store linear data of similar type, but an array consumes contiguous memory locations allocated at compile time, at the time of declaration of array, while for a linked list, memory is assigned as and when data is added to it, which means at runtime. This is the most important difference between a linked list. 

**Array** is a datatype which is widely implemented as a **default type**, in almost all the modern programming languages, and is used to store data of similar type.
But there are many usecases, like the one where we don't know the quantity of **data** to be stored, for which advanced data structures are required, and one such data structure is **linked list**.

#### Array

 - Colection of elements of similar data type.
 - supports **Randdom Access**, which means elements can be accessed directly using their index, like *arr[0]* for 1st element, *arr[6]* for 7th element etc. so elements can be accessed in an    array that is **fast** with a constant time complexity of 0(1). 
- In an array, elements are stored in **contiguous memory location** or consecutive manner in the memory.
- In an array, elements are stored in **contiguous memory location** or onseutive manner in the memory
- **Insertion and Deleition** operation takes more time, as the memory locations are consecutive and fixed 
- Memory is allocated right when the array is declared, at **compile time** also known as **Static Memory Allocation**
- Here each element is independent and can be accessed using it's index value.
- This guy can be **single dimensional**, **two dimensional** or **multidimensional** 
- Size of the array must be specified at time of array declaration.
- Array gets memory allocated in the *Stack* memory section.


#### Linked List

- Linked list is an ordered collection of elements of the same type, that are coneceted in between by using pointers.
- This guy supports **Secuencial Access**, means that to access any element/node in a linked list, we have to sequentially traverse the complete linked list, upto that element. 
- Here the element an be stored anywhere in the memory. The adress of the memory location allocated to the new elemt is stored in the previous node of linked list, making a link in between the two nodes.
- **Insertion** and **Deletion** operations are fast here
- Memory is allocated in the *runtime*, as and when a new node is added. It's also known as **Dynamic Memory Allocation**
- Each node points to the next, previous or even both **nodes**which means elements can be acce.
- Linked list can be **Linear(Singly), Doubly** or **Circular** 
- The size of a linked list varies because it grows at runtime, as more nodes are being added to it.
- Linked lists get memory allocation in the **Heap** memory section
-  
### How to Build and Use Linked Lists

 Build the list {1, 2, 3} in the heap and store
 its head pointer in a local stack variable.
 Returns the head pointer to the caller.

~~~ 
 struct node *  BuildOneTwoThree() 
{
	struct node *  head = NULL;
	struct node *  second = NULL;
 	struct node *  third = NULL;
	
	head = malloc(sizeof(struct node)); // allocate 3 nodes in the heap
	second = malloc(sizeof(struct node));
	third = malloc(sizeof(struct node));
	head->data = 1; // setup first node
	head->next = second; // note: pointer assignment rule
	second->data = 2; // setup second node
	second->next = third;
	third->data = 3; // setup third link
	third->next = NULL;


// At this point, the linked list referenced by "head"
// matches the list in the drawing.
	return head;
}
~~~
[Click Here](http://cslibrary.stanford.edu/103/LinkedListBasics.pdf)

See also 
[How to Create a Linked List in C Programming for DUMMIES](https://www.dummies.com/programming/c/how-to-create-a-linked-list-in-c-programming/)
[Linked List vs Array](https://www.geeksforgeeks.org/linked-list-vs-array/)


----------------------------------------------------------------------------------------------
## ***Author***

* [Karen Campo](https://github.com/KarenCampo)
