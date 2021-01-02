#include <stdio.h>
#include<stdlib.h>
int main()
{
  int input, i,j,c;
  int count = 0;
  int *numbers = NULL;
  int *more;

  printf("Enter the integers (Enter 0 to stop): \n");
  do
  {
    scanf("%d",&input);
    count++;


    more = (int*)realloc(numbers,count*sizeof(int));
    if(more != NULL)
    {



       numbers=more;
       numbers[count-1]=input;

    }

    else
     {
       free(numbers);
       printf("Error in reallocating the memory");
       exit(1);     }

     }while(input!= NULL);

 printf("\n");



 for(i=0;i<count-1;i++)
   {
     for (j=0;j<count-1-1;j++)
      {
        if (numbers[j] > numbers[j+1])
          {
            c=numbers[j];
            numbers[j]=numbers[j+1];
            numbers[j+1]=c;
          }
      }
   }





  printf("\nSorted list in ascending order:\n");
  for ( i = 0 ; i < count-1 ; i++ )
    printf("%d ", numbers[i]);
    //printf("\n");

  free(numbers);  //freeing the memory
  return 0;
}
