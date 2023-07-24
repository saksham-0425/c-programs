#include<stdio.h>
void main(){
    int i,n,ans;
    printf("enter n:");
    scanf("%d",&n);
    //printf("1\t");
    for(i=1;i<=n;i++){
        ans=ans*2+1;
        printf("%d\t",ans);
    }
}