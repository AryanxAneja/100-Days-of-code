 //print each character of a string in new line 
#include<stdio.h>
#include<string.h> 
int main()
{ char str[100];
    printf("Enter a string ");
    scanf("%c\n",str);

    for(int i=0;str[i]!='\0';i++)
    { printf("%c\n",str[i]);
    }
  return 0;
}