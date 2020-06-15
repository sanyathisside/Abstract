# Abstract
## Basic concepts


<hr/>

### CHARACTER ARRAY
 * In case of integer array, on printing the array name directly we get the address of array, whereas  in case of char array we get the elements of the array unless it finds a NULL. (This is because of operator overloading).
 * In case of character array we don't need to use loop to take input.
 * Reading Sentences:
     * cin doesnot input spaces.
     * use cin.get() [It reads a single character at a time].
     * cin.getline(array,maxlength,delimiter).
 * Palindromic String:
     * Start comparing with the first and last character.
     
 * Remove consecutive duplicate characters from a string.
 * Find the largest string and it's length.
     
<hr/>

## Memory Allocation in C++
 * Static Allocation
    * Also known as compile time allocation
    * Sizes and locations are fixed during the compile time.
    * Fast but less flexible.
    * Allocation and deallocation is done by compiler itself.
 * Dynamic
    * Also known as run time allocation
    * Allows to define memory size during execution of the program.
    * Uses heap memory. (Dynamic part of the memory).
    * Reusable memory.
    * new is used to allocate the memory, delete is used to free the memory.
    * Allocation and deallocation is done by programmer.
    

<hr/>

## Pointers
 
### &
 * Finds address of variable.
 * Returns address in hexadecimal value.
 * It doesn't work for character variables.
    * It will return the char value instead of address.
    * This is because of operator <<.
    * To get the address we can do explicit typecasting! cout<<(void*)&ch;
    

### <a href="https://github.com/sanya2508/Abstract/blob/master/pointer.cpp">Storing address</a>
 * To store the address of another variable we need to create a pointer variable.
 * It will be of the type datatype* variablename
     * Example: int* y = &x (Declaration with innitialization)
 * Space occupied to store the address of variable will be same irrespective of datatype.
 

### <a href="https://github.com/sanya2508/Abstract/blob/master/dereference%20operator.cpp">Dereference opearator ( * )</a>
  * '& ' Bucket ---> Address
  * '* ' Address ---> Bucket
  * cout<<* (&x);

### <a href="https://github.com/sanya2508/Abstract/blob/master/pass%20by%20reference%20using%20pointer.cpp">Pass by reference using pointer</a>

<hr/>

## Order Complexity Analysis
 * Time complexity (higher preference)
 * Space complexity
 
 
