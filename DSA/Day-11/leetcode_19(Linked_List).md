## Approach: Two-Pass Algorithm

1. Traverse the list to count total nodes.
2. Compute position of node to delete from the beginning: `length - n`.
3. Traverse again to one node before the target and unlink it.

### Time Complexity: O(n)  
### Space Complexity: O(1)

### Highlights:
- Easy to understand and implement
- Safe memory handling with `delete`
