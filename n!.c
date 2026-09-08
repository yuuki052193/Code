#include<stdio.h>
int main(){
    int m=1,s=2,n=0;
    printf("请输入n的值:");
    scanf("%d",&n);
    while(s<=n){
        m=m*s;
        s=s+1;
    }
    printf("%d的阶乘是:%d",n,m);
    return 0;
}