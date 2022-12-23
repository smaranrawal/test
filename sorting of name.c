#include<stdio.h>
#include<string.h>
void main()
{
    char a[8][6]={"jump","walk","red","green","talk","move","look","feel"};
    int i,j;
    char temp[6];
    for (i=0;i<8;i++){

    for(j=i+1;j<8;j++){
    if(strcmp(a[i],a[j])>0)
    {
        strcpy(temp,a[i]);
        strcpy(a[i],a[j]);
        strcpy(a[j],temp);
    }
    }
    }
    for(i=0;i<8;i++)
        {
            puts(a[i]);
        }
}
