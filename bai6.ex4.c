#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{

printf("A string in various forms:\n");

printf("Without any format command: \n");

printf("Good day Mr. Lee. \n");

printf("With format command but without any modifier: \n");
printf("With digit string modifier: \n");
printf("[%s]\n", "Good day Mr. Lee.");
printf("With digit string 19 as modifier:\n");
printf("[%4s]\n","Good day Mr. Lee.");
printf("With digit string 23 as modifier:\n");
printf("%4s]\n", "Good day Mr. Lee.");
printf("With digit string 25.4 as modifier:\n" );
printf("%.48]\n", "Good day Mr. Lee.");
printf("With and digit string 25.4 as modifiers: An");
}


