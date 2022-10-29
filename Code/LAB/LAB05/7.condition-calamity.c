#include<stdio.h>

int main()
{
    int a,b,c,d,h,s;

    printf("Enter four integers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    h=a; s=a;
    if(h<b){h=b;}
    if(h<c){h=c;}
    if(h<d){h=d;}

    if(s>b){s=b;}
    if(s>c){s=c;}
    if(s>d){s=d;}

    printf("Largest: %d\n",h);
    printf("Smallest: %d\n",s);

    return 0;
}
