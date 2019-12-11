#include<stdio.h>
int main()
{
    char a[20], b[20];
    int i,j,k;
    scanf("%s", a);

    for(i=0; a[i]!='\0'; i++); //length

    for(j=i-1, k=0; j>=0; j--,k++)

        b[k]=a[j];
        b[k]='\0';

    printf("%s", b);

        return 0;
}
