#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>
#include<math.h>
int max=1;
int prime[5000];
void pick(){
    prime[0]=2;
    for(int x=3;x<sqrt(INT_MAX);x++){
        int found=0;
        for(int y=0;y<max;y++){
            if(x%prime[y]==0){
                found=1;
                break;
            }
            if(found!=1 && y==max-1){
                prime[max]=x;
                max++;
            }
        }
    }
}
int main(){
    pick();
    int n;
    while(scanf("%d",&n)!=EOF){
        for(int x=0;x<max;x++){
            if(n==1 ||n==0){
                printf("It's not a prime!!!\n");
                break;
            }
            if(n==prime[x]){
                printf("It's a prime!!!\n");
                break;
            }
            if(n%prime[x]==0){
                printf("It's not a prime!!!\n");
                break;
            }
            else if(x==max-1){
                printf("It's a prime!!!\n");
            }
        }
    }
    return 0;
}
