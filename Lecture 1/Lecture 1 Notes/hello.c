// sandbox.cs50.io

// this include is for including strings and get_string
#include <cs50.h>
// this has printf included
#include <stdio.h>

int main(void)
{
    // get_string comes from cs50, is a prompt, and takes in a single input.
    string name = get_string("What is your name?\n");
    // %s is for a string paramter. %i is for an integer parameter
    printf("hello, %s\n", name);
}

// C doesn't have string by default.
// to run the program: clang hello.c 
// to get the out file, type: ./a.out
// to save the conversion from source code to machine code, type: clang -o hello hello.c
// to run in pwd, type: ./hello
// to create outpul easier: make hello 
// you have to recompile the program after each change
// To compile and run: make hello THEN ./hello

// %i - integer
// %c - character
// %f - float
// %li - 
// %s - string