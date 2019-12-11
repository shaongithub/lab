#include<stdio.h>
int main()
{
    char a[20];
    int i,j,k;
    scanf("%s", a);

    for(i=0; a[i]!='\0'; i++); //length

    printf("%d ", i);
     for(j=i; a[j]!='\0'; j++); //length

    printf("%d ", j);

     for(k=i+j; a[k]!='\0'; k++); //length

    printf("%d ", k-1);
        return 0;
}
