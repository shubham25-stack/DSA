Problem Statement:</br>
You are given the strings key and message, which represent a cipher key and a secret message, respectively.</br> The steps to decode message are as follows:</br></br>

Use the first appearance of all 26 lowercase English letters in key as the order of the substitution table.</br>
Align the substitution table with the regular English alphabet.</br>
Each letter in message is then substituted using the table.</br>
Spaces ' ' are transformed to themselves.</br>
For example, given key = "happy boy" (actual key would have at least one instance of each letter in the </br>alphabet), we have the partial substitution table of ('h' -> 'a', 'a' -> 'b', 'p' -> 'c', 'y' -> 'd', </br>'b' -> 'e', 'o' -> 'f').</br>
Return the decoded message.</br></br></br>



Approach (in short):</br>
Create a Mapping from key:</br></br>

Iterate through the key string and map each unique character (ignoring spaces) to a letter of the alphabet </br>starting from 'a'.</br>
Use an array mapping[280] to store these mappings.</br>
Decode the message:</br></br>

For each character in the message, if it's a space, keep it as is.</br>
For other characters, use the mapping array to find the corresponding decoded character and build the </br>result string.</br>
Return the Decoded Message:</br>
</br>
After processing the entire message, return the decoded string.</br>
</br>
Time Complexity:</br>
O(k + m), where k is the length of key and m is the length of message.</br>
</br>
Space Complexity:</br>
O(m), where m is the length of the message (for storing the decoded result).</br></br></br></br></br></br></br></br></br>



![alt text](image.png)