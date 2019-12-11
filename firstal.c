#include<stdio.h>
int main()
{
   char a[20];
    int i,cnt=0;
    gets(a);

    while(cnt==0){
     if(a[cnt]!='\0')
        cnt++;
    };
    printf("%d",cnt);
    cnt=0;
    return 0;
}
