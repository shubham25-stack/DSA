PROBLEM STATEMENT:</br>
You are given the heads of two sorted linked lists list1 and list2.</br>
</br>
Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.</br>
</br>
Return the head of the merged linked list.</br>
</br></br>

Approach</br>
The given code merges two sorted linked lists into a single sorted linked list. Here’s how it works:</br>
</br>
Initialize a Dummy Node: A dummy node (dummy) is created to simplify the logic of merging the lists. It acts as a placeholder for the </br>t list.</br>
Iterate Through Both Lists:</br>
Compare the values of the current nodes of list1 and list2.</br>
Append the smaller node to the result list and move the pointer of the corresponding list forward.</br>
Move the current pointer in the result list to the newly added node.</br>
Attach Remaining Nodes:</br>
If one of the lists is exhausted, the remaining nodes of the other list are directly attached to </br>
the result list since they are already sorted.</br>
Return the Merged List: The result starts from dummy->next because dummy is a placeholder.</br></br>

Time Complexity: O(m+n), where m and n are the lengths of list1 and list2. Each node is processed once.</br>
</br>
Space Complexity: O(1), as the algorithm only uses a few pointers and rearranges existing nodes without allocating additional memory.</br></br></br></br></br>
</br>

![alt text](image.png)
