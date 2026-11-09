#include <stdio.h>
int main()
{
    char str[100];
    int i=0,space=0,digit=0,special=0;
    fgets(str,100,stdin);
    while(str[i]!='\0' && str[i]!='\n')
    {
        if(str[i]==' ')
            space++;
        else if(str[i]>='0' && str[i]<='9')
            digit++;
        else if(!((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')))
            special++;
        i++;
    }
    printf("Spaces = %d\nDigits = %d\nSpecial characters = %d",space,digit,special);
    return 0;
}
