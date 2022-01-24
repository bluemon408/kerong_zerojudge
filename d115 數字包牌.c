/*not good~(no AC) sad QAQ*/
#include<stdio.h>
#include<stdbool.h>
int list[99];
int n,m;
bool save[99];
int out[99];
int DFS(int cnt){
    if(cnt==m){
        for(int i=0;i<m;i++)
            printf("%d ",out[i]);
        puts("");
    }
    else{
        for(int x=0;x<n;x++){
            if(!save[x] ){
                save[x]==true;
                out[0]=list[cnt];
                DFS(cnt+1);
                save[x]=false;
            }
        }
    }
    return 0;
}
int main(){
    while(scanf("%d",&n)!=EOF){
        if(n==0)break;
        for(int x=0;x<n;x++){
            scanf("%d",&list[x]);
        }
        scanf("%d",&m);
//~~~~~~~~~~排列~~~~~~~~~~~~
        for(int i=0;i<n;i++){
            int hold=0;
            for(int j=i+1;j<n;j++){
                if(list[i]>list[j]){
                    hold=list[i];
                    list[i]=list[j];
                    list[j]=hold;
                }
            }
        }
//~~~~~~~~~~dfs~~~~~~~~~~~~~~~~~~~
        DFS(0);
    }
    return 0;
}
