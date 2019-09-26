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

    nop - doesn’t do anything.

    sub - subtracts the top element of the stack from the second top element of the stack.

    div - divides the second top element of the stack by the top element of the stack.
    
    mul - multiplies the second top element of the stack with the top element of the stack.

    mod - computes the rest of the division of the second top element of the stack by the top element of the stack.
    
    pchar - prints the char at the top of the stack.

    pstr - prints the string starting at the top of the stack.

    rotl - rotates the stack to the top. (The top element of the stack becomes the last one, and the second top element of the stack becomes the first one)
    
    rotr - rotates the stack to the bottom. (The last element of the stack becomes the top element of the stack)

    stack - sets the format of the data to a stack (LIFO).
    
    queue - sets the format of the data to a queue (FIFO).

## Authors:
- David Peralta
- Diego Lopez
