#include <stdio.h>
#include <stdlib.h>

// Let's read information from a file

int main(void)
{
    char line[255];
    FILE * fpointer = fopen("employees.txt", "r");
        fgets(line, 255, fpointer); // Pointer gets incremented and the 2nd time the fgets is execute, it will read the next line in file
        fgets(line, 255, fpointer); // Reads he 2nd line in the file
        printf("%s", line);

    fclose(fpointer);

}