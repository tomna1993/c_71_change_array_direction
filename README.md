# c_71_change_array_direction

## DESCRIPTION

Write a function which changes the direction of the given array as below:

```bash
./change_array_direction
Array: [12, 5, 9, 0, 30]
[30, 0, 9, 5, 12]
```

```bash
./change_array_direction
Array: Hello world!
!dlrow olleH
```

The function must work with any type of array (int, char, float ...).
  
- This task can be completed, but it makes the function difficult to understand. It is a better approach to separate it to more functions.

## LEARNING TASKS

- Make errors in the code and try to solve them with the gdb debugger
  - give wrong array length information to the function; check for memory leaks and segmentation faults
  - allocate less memory for the character array and see what happens during debugging