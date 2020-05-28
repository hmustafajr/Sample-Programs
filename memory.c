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
