// program to change comma to semicoln in string

#include<stdio.h>
void main()
{
    char str[100],copy_str[100];
    int i=0;
    printf("\n Enter a string: ");
    gets(str);
    while(str[i] != '\0')
    {
        if(str[i] == ',')
            copy_str[i] = ';';
        else
            copy_str[i] = str[i];
        i++;
    }
    copy_str[i] = '\0';

    printf("\n Copied text is : ");
    puts(copy_str);
}
