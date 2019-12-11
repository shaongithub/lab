#include<stdio.h>
int main()
{
    char a[20],b[20];
    int i=0;
    scanf("%s %s", a,b);

    while(a[i]== b[i] && a[i]!='\0' && b[i]!='\0')
        i++;
    if(a[i]==b[i])
    printf("same");
    else
        printf("Different");

    return 0;

}
