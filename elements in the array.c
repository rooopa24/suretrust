
#include <stdio.h>

int main() {
  int myNumbers[10];
  int i;
  
  //Accesing the elements dynamically which the user enters
  for (i = 0; i < 10; i++) 
  {
    printf("\nEnter the %d element in the array : ",i);
    scanf("%d",&myNumbers[i]);
  }
  
  //Printing the elements in the Array which are entered by user
  printf("\nThe Elements in the Array are :");
  for (i = 0; i < 10; i++) 
  {
    printf("%d\t",myNumbers[i]);

  }
 
  return 0;
}
