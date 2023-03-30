#include<stdio.h>
 
int findCube(int num)
{
  
 
   return num * num * num;
  
}
 
int main()
 {
 
  
   int num,cube;
     
   printf("Enter any number: ");
   scanf("%d",&num);

  
   cube = findCube(num);
  
   printf("Cube of the given number is %d",cube);
  
   return 0;
}

