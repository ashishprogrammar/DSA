🔁 Problem 1721: Swapping Nodes in a Linked List
Link: LeetCode 1721

Problem Statement:
Given the head of a singly linked list and an integer k, swap the values of the k-th node from the beginning and the k-th node from the end.

Input Example:
head = [1,2,3,4,5] , k = 2

Output:
[1, 4, 3, 2, 5]

Approach Used:

Traverse the linked list and store all node values in a vector.

Swap the values at positions k - 1 and size - k in the vector.

Traverse the linked list again and update each node’s value with the modified vector values.

Why this approach?
This method is simple and avoids complex pointer manipulations. It works well when only values need to be swapped and not actual nodes.
