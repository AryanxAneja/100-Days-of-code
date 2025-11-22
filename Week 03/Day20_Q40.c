// Write a program to find the 1's complement of a binary number and print it.

#include<stdio.h>
int main(){
char Binary[100];
int i;
printf("Enter the binary number :");
scanf("%s", Binary);
printf("Original binary number is : %s\n", Binary);
for (i = 0; Binary[i]!= '\0'; i++)
{
if (Binary[i] == '0')
{
Binary[i] = '1';
}
else if (Binary[i] == '1')
{
Binary[i] = '0';
}
else
{
printf("Not a valid binary number\n");
}
}
printf("1's complement binary is : %s", Binary);
return 0;
}