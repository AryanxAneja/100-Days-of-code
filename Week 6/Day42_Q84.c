//convert a lowercase string to uppercase without using built in function 
#include<stdio.h> 
int main()
{ char str[200];
    printf("Enter the string :");
    scanf("%s",str);
    
    for(int i=0;str[i]!='\0';i++)
    { if(str[i]>= 'a' && str[i]<= 'z')
        { str[i]= str[i] -32 ;
        }
    }
  printf("uppercase %s\n",str);
}