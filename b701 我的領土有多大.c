#include<stdio.h>
#include<stdlib.h>
int island_X,island_Y;
int area=0,W=999,N=999,E=-1,S=-1;
void floodfill(int **territory,int y,int x){
    if(territory[y][x]!=1){
        return;
    }
    territory[y][x]=9;
    if(x<=W) W=x;//西邊
    if(y<=N) N=y;//北邊
    if(x>=E) E=x;//東邊
    if(y>=S) S=y;//南邊
    area+=1;
    if(x>0 && territory[y][x-1]==1){
        floodfill(territory,y,x-1);
    }
    if(y>0 && territory[y-1][x]==1){
        floodfill(territory,y-1,x);
    }
    if(x<island_X-1 && territory[y][x+1]==1){
        floodfill(territory,y,x+1);
    }
    if(y<island_Y-1 && territory[y+1][x]==1){
        floodfill(territory,y+1,x);
    }
}
int main(){

    while(scanf("%d %d",&island_X,&island_Y)!=EOF){
        int **territory=(int **)calloc(island_Y,sizeof(int*));
        for(int y=0;y<island_Y;y++){
            territory[y]=(int *)calloc(island_X,sizeof(int));
            for(int x=0;x<island_X;x++){
                scanf("%d",&territory[y][x]);
            }
        }
        for(int y=0;y<island_Y;y++){
            for(int x=0;x<island_X;x++){
                area=0,W=999,N=999,E=-1,S=-1;
                if(territory[y][x]==1){
                    floodfill(territory,y,x);
                    printf("%d %d %d %d %d\n",W,N,E,S,area);
                }
            }
        }
        for(int y=0;y<island_Y;y++){
            free(territory[y]);
        }
        free(territory);
    }
    return 0;
}
