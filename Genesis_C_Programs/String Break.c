#include<stdio.h>
#include <string.h>
char str[100];
int main()
{
   printf("Enter your string and use '_' instead of spacing. \n");
   gets(str);
   char * token = strtok(str, "_");
   while( token != NULL )
    {
      printf( " %s\n", token );
      token = strtok(NULL, "_");
    }
   return 0;
}
