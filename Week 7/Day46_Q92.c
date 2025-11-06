 //find the first repeating lower case alphabet in string 
#include<stdio.h>
int main()
{ char str[100];
    printf("Enter the string ");
    scanf("%s",str);

    for(int i=0;str[i]!='\0';i++)
    { if(str[i] >= 'a' && str[i] <= 'z')

        {for(int j=i+1; str[j]!='\0';j++)
            if(str[i] == str[j]) {
                    printf("First repeating lowercase alphabet: %c", str[i]);
                    return 0;}
         
        }
    }
}