#include<stdio.h>
int main()
{
    char a[20],b[20];
    int i=0,j,k;
    scanf("%s", a);

    for(i=0; a[i]!='\0'; i++); //length

    for(j=i-1, k=0; j>=0; j--,k++)

        b[k]=a[j];
        b[k]='\0';

    while(a[i]== b[i] && a[i]!='\0' && b[i]!='\0')
        i++;

    if(a[i]==b[i])
    printf("Palindrome");
    else
        printf("M");

    return 0;

}
