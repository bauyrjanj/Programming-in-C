#include <stdio.h>
#include <stdlib.h>

// Let's work with files

int main(void)
{
    /*
    // Create files
    FILE * fpointer = fopen("employees.txt", "w");
        fprintf(fpointer, "Bauka, Salesman\nPam, Receptions\nJanka, Engineer"); //Write information to the file

    fclose(fpointer);
    */
    // Append information to the end of file 
    FILE * fpointer = fopen("employees.txt", "a");
        fprintf(fpointer, "\nErju, Director"); //Write information to the file

    fclose(fpointer);

}