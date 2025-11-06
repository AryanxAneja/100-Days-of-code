 //count character in a string without using built in function length 
#include<stdio.h>
#include<string.h> 
int main()
{ char str[]={"Hello amigos"};
  int count =0;
  while(str[count]!='\0')
   {count++;}

   printf("No of characters in array are =%d",count );
   return 0 ; 

}