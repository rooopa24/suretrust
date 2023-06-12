
#include <stdio.h>
int main() 
{
  int myNumbers[5];
  int i;
  int sum = 0;
  
  //Accesing the elements dynamically which the user enters
  for (i = 0; i < 5; i++) 
  {
    printf("\nEnter the %d element in the array : ",i);
    scanf("%d",&myNumbers[i]);
  }
  
  //Printing the elements in the Array which are entered by user
  printf("\nThe Elements in the Array are :");
  for (i = 0; i < 5; i++) 
  {
    sum = sum + myNumbers[i];
	printf("%d\t",myNumbers[i]);

  }
//display the result of Sum
  printf("The total sum of the array is %d",sum);
  
 
  return 0;
  
}