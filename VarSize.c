#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   /* int a=123;
   char name[] = "ba";
   double gpa=4.0;
   float fGpa=4.0;
   printf("The size of a is %lu bytes\n", sizeof(a));
   printf("The size of name is %lu bytes\n", sizeof(name));
   printf("The size of gpa is %lu bytes\n", sizeof(gpa));
   printf("The size of fGpa is %lu bytes\n", sizeof(fGpa));

   printf("The size of integer is %lu bytes\n", sizeof(int));
   printf("The size of char is %lu bytes\n", sizeof(char));
   printf("The size of double is %lu bytes\n" , sizeof(double));
   printf("The size of float is %lu bytes\n", sizeof(float));
*/
   // Declare variables of different types
   int age=32;
   char c='c';
   double gpa=4.3;
   float fGpa=4.3;
   
   // Declare pointers of different types
   int *pAge;
   char *pC;
   double *pD;
   float *pF;

   // Make assignments
   pAge = &age;
   pC = &c;
   pD = &gpa;
   pF = &fGpa;

   // Print sizes of each pointer
   printf("The size of pAge is %lu bytes\n", sizeof(pAge));
   printf("The size of pC is %lu bytes\n", sizeof(pC));
   printf("The size of pD is %lu bytes\n" , sizeof(pD));
   printf("The size of pF is %lu bytes\n", sizeof(pF));

}