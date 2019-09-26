# C - Stacks, Queues - LIFO, FIFO

This project is a collaboration between David Peralta and Diego Lopez, actual students of Software Engineering at Holberton School. It consists of developing and making a scripting language that is first compiled into Monty byte codes.

The goal of this project is to create an interpreter for Monty ByteCodes files.

## Quick Start

1. Git clone this respository to your local directory.

       $ git clone https://github.com/diegolopezq95/monty.git
  
2. Compile the program.

       $ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
       
3. Now execute.
      
       $ ./monty bytecodes/00.m
       
## Opcode Commands

This interpreter supports the next opcode commands:

    push - pushes an element to the stack.

    pall - prints all the values on the stack, starting from the top of the stack.

    pint - prints the value at the top of the stack.
    
    pop - removes the top element of the stack.
    
    swap - swaps the top two elements of the stack.
    
    add - adds the top two elements of the stack.


## Authors:
- David Peralta
- Diego Lopez
