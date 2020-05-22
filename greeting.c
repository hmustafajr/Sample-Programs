// greeting.c
#include <stdio.h>  //required for screen printing
greeting (char *temp1,char *temp2) // greeting function that says hello
{
    char name [400];    // string variable that stores the name value
    strcpy (name, temp2); // copies the funtion arg to name
    printf ("Hello %s %s\n", temp1, name); //prints the greeting
}

main(int argc, char * argv []) // pay attention to the formatting here
{
    greeting(argv[1], argv[2]); // calls the function and returns the title and name
    printf ("Goodbye %s %s\n", argv[1], argv[2]); // says goodbye
} // ends
