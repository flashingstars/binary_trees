This folder contains tasks manipulating binary trees.
Programming language of choice is C programming.
A header file conatining the structure and all prototypes used.

0. A function that creates a binary tree node where parent is a pointer to the parent node of the node to create and value is the value to put in the new node.
When created, a node does not have any child.
Return a pointer to the new node or NULL on failure.

1. A function that inserts a node as the left-child of another node where parent is a pointer to the node to insert the left-child in and value is the value to store in the new node.
Return a pointer to the created node or NULL on failure or if parent is NULL.
If parent already has a left-child the new node must take its place and the old left-child must be set as the left-child of the new node.

2. A function that inserts a node as the right-child of another node where parent is a pointer to the node to insert the right-child in and value is the value to store in the new node.
Return a pointer to the created node or NULL on failure or if parent is NULL.
If parent already has a right-child the new node must take its place and the old right-child must be set as the right-child of the new node.

3. A function that deletes an entire binary tree where tree is a pointer to the root node of the tree to delete.
If tree is NULL do nothing.

4. A function that checks if a node is a leaf where node is a pointer to the node to check.
Return 1 if node is a leaf otherwise 0. 
If node is NULL return 0.

5. A function that checks if a given node is a root where node is a pointer to the node to check.
Return 1 if node is a root, otherwise 0.
If node is NULL return 0.

6. A function that goes through a binary tree using pre-order traversal where tree is a pointer to the root node of the tree to traverse and func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
If tree or func is NULL, do nothing.

7. A function that goes through a binary tree using in-order traversal where tree is a pointer to the root node of the tree to traverse and func is a pointer to a function to call for each node. The value of the node must be passed as a parameter to this function.
If tree or func is NULL do nothing

8. A function that goes through a binary tree using post-order traversal where tree is a pointer to the root node of the tree to traverse and func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function. 
If tree or func is NULL do nothing.

9. A function that measures the height of a binary tree where tree is a pointer to the root node of the tree to measure the height. 
If the tree is NULL return 0.

10. A function that measures the depth of a node in a  binary tree where tree is a pointer to the node  to measure the depth.
If tree is NULL return 0.

11. A function that measures the size of a binary tree where tree is a pointer to the root node of the tree to measure the size.
If tree is NULL return 0.

12. A function that counts the leaves in a binary tree where tree is a pointer to the root node of the tree to count the number of leaves.
If tree is NULL return 0. A NULL pointer is not a leaf.

13. A function that counts the nodes with at least 1 child in a binary tree where tree is a pointer to the root node of the tree to count the number of nodes.
If tree is NULL return 0.

14.  A function that measures the balance factor of a binary tree where tree is a pointer to the root node of the tree to measure the balance factor.
If tree is NULL return 0.

15. A function that checks if a binary tree is full where tree is a pointer to the root node of the tree to check.
If tree is NULL return 0.

16. A function that checks if a binary tree is perfect where tree is a pointer to the root node of the tree to check.
If tree is NULL return 0.

17. A function that finds the sibling of a node where node is a pointer to the node to find the sibling. Return a pointer to the sibling node.
If node is NULL or the parent is NULL return NULL. If node has no siblings return NULL.

18. A function that finds the uncle of a node where node is a pointer to the node to find the uncle. Return a pointer to the uncle node.
If node is NULL return NULL. If node has no uncle return NULL.

