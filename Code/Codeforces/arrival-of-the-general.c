#include<stdio.h>

int main()
{
    int n;
   // printf("Number of soldier: ");
    scanf("%d",&n);

    int sol[n];
    for(int i=0; i<n; i++){
        scanf("%d",&sol[i]);
    }

    int p=0,q=1;

    for(int i=0; i<n-1; i++){
        if(sol[p]>=sol[q]){ p=p; }
        else{ p=q; }
        q=q+1;
        //printf("%d %d\n",p,q);
    }
    int high=p+1;
    //printf("highest: %d\n",high);

    p=0; q=1;

    for(int i=0; i<n-1; i++){
        if(sol[p]<sol[q]){ p=p; }
        else{ p=q; }
        q=q+1;
        //printf("%d %d\n",p,q);
    }
    int low=p+1;
    //printf("lowest: %d\n",low);

    int r;
    int x=high-1, y=n-low;
    if(high<low){r=x+y;}
    else if(high>low){r=x+y-1;}
    else{r=0;}

    printf("%d\n",r);

    return 0;
}
