Problem Statements:</br>
Given a binary tree with the following rules:</br>
root.val == 0</br>
For any treeNode:</br>
If treeNode.val has a value x and treeNode.left != null, then treeNode.left.val == 2 * x + 1</br>
If treeNode.val has a value x and treeNode.right != null, then treeNode.right.val == 2 * x + 2</br>
Now the binary tree is contaminated, which means all treeNode.val have been changed to -1.</br>
Implement the FindElements class:</br>
</br>
FindElements(TreeNode* root) Initializes the object with a contaminated binary tree and recovers it.</br>
bool find(int target) Returns true if the target value exists in the recovered binary tree.</br>
</br>
Approach:</br>
The approach for the FindElements class involves:</br></br>

Tree Recovery:</br></br>

The tree is traversed recursively (DFS). Starting with the root node (value = 0), the left child is </br>assigned the value 2 * parent_value + 1 and the right child is assigned 2 * parent_value + 2.</br>
This is done for all nodes to recover their values based on their positions in the tree.</br>
Efficient Querying:</br></br>

All recovered node values are stored in an unordered_set for fast lookup.</br>
The find method checks if a given value exists in this set, offering O(1) average time complexity for </br>queries.</br>
This approach ensures that tree values are efficiently restored and queried in constant time after an </br>initial O(n) setup.</br></br>



Time Complexity:</br>
Constructor (FindElements): O(n), where n is the number of nodes, due to the recursive traversal of the </br>tree.</br>
find(target) method: O(1) on average, due to the fast lookup in the unordered_set.</br></br>

Space Complexity:</br>
O(n), where n is the number of nodes, for storing the recovered values in the unordered_set and the </br>recursion stack during the tree traversal.</br>

</br></br></br></br></br></br></br></br></br></br></br></br>


![alt text](image.png)