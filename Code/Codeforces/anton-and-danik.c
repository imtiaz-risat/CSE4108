#include<stdio.h>

int main()
{
    int n,A=0,D=0;
    scanf("%d",&n);

    char game[n];
    scanf("%s",game);

    for(int i=0; i<n; i++){
        if(game[i]=='A') A+=1;
        else if(game[i]=='D') D+=1;
    }

    if(A>D) printf("Anton");
    else if(D>A) printf("Danik");
    else if(A=D) printf("Friendship");

    return 0;
}
