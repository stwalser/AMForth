//
// Created by Stefan Walser on 30.03.21.
//

#ifndef AMFORTH_BASICFUNCTIONS_H
#define AMFORTH_BASICFUNCTIONS_H

#include <limits.h>

/**
 * typedefs for function pointers
 */
typedef void (*BASICFUNC)();
typedef int (*CODEPOINTER)(Stack *, int *);

/**
 * adds the top most two numbers on the stack and pushes the result back onto the stack
 */
void ADD();

/**
 * subtracts the top most two numbers on the stack and pushes the result back onto the stack
 */
void SUBTRACT();

/**
 * multiplies the top most two numbers on the stack and pushes the result back onto the stack
 */
void MULTIPLY();

/**
 * divides the top most two numbers on the stack and pushes the result back onto the stack
 */
void DIVIDE();

/**
 * Pops the top element of the stack in prints it to stdout
 */
void PRINTPOPSTACK();

/**
 * Prints content of the whole stack without modifying the stack
 */
void PRINTSTACK();

/**
 * Pushes the current ip on the return stack and sets the ip to the next instruction of the current word
 */
void DOCOLON();

/**
 * Reads in the next token as name and adds a new entry in the dictionary with that name and DOCOLON as basic func
 * Starts compile mode
 */
void COLON();

/**
 * Pops the top value of the stack and sets the ip to its value
 */
void DOSEMI();

/**
 * A macro, that compiles DOSEMI and stops the compile mode
 */
void SEMI();

/**
 * Treats the current entry in ip as number and pushes it on the parameter stack
 * Then the ip gets incremented
 */
void DOLIT();

/**
 * Reads in one token and pushes its address on the stack
 */
void INTERPRET();

/**
 * Pops the address of the current token of the stack and executes it
 */
void EXECUTE();

/**
 * Test branch
 */
void BRANCH0();
#endif //AMFORTH_BASICFUNCTIONS_H
