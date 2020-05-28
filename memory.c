/* memory.c */ // program name
int index = 5; // integer stored in initialized data
char * str; // string stored in bss uninitialized
int nothing; // integer stored in bss unitialized
void funct1 (int c) // bracket that starts the funct1 block
{
    int i=c; // stored in the stacked region
    str = (char*) malloc (10 * sizeof (char)); // reserve 10 char in the heap region
    strncpy (str, "abcde", 5); // copies 5 char in str abcde
} // end function
void main () // required main
{
    funct1(1); // calls main with argument
} // end main

/*
Doesn't do much here.
1. several pieces of memory are allocated
2. main is executed
3. funct1() is called with an arg of 1
4. Once called the arg is passed to func c
5. memory is allocated on the heap for a 10 byte str
6. 5 byte str 'abcde' is copied into str
7. ends
*/
