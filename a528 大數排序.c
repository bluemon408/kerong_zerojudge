#include<stdio.h>
#include<string.h>
#include<memory.h>
char list[1000][1000];
int count;
char no[1000][1000];
int main(){
    while(scanf("%d",&count)!=EOF){
        int no_count=0;
        for(int t=0;t<count;t++){
            scanf("%s",&list[t]);
        }
        for(int x=0;x<count;x++){
            char hold[1000]={'\0'};
            for(int y=x+1;y<count;y++){
                if(list[x][0]==45){
                    strcpy(no[no_count],list[x]);
                    memset(list[x],'\0',strlen(list[x]));
                    no_count++;
                }
                else if(list[y][0]==45){
                    strcpy(no[no_count],list[y]);
                    memset(list[y],'\0',strlen(list[y]));
                    no_count++;
                }
                else if(((strlen(list[x]))>(strlen(list[y])))){
                    strcpy(hold,list[x]);
                    strcpy(list[x],list[y]);
                    strcpy(list[y],hold);
                }
            }
        }
        for(int x=0;x<count;x++){
            char hold[1000]={'\0'};
            for(int y=x+1;y<count;y++){
                if((strlen(list[x]))==(strlen(list[y]))){
                    int count=0;
                    for(int i=0;i<strlen(list[x]);i++){
                        if(list[x][i]>list[y][i]){
                            strcpy(hold,list[x]);
                            strcpy(list[x],list[y]);
                            strcpy(list[y],hold);
                            continue;
                        }
                    }
                }
            }
        }
                    /*負數*/
        for(int x=0;x<no_count;x++){
            char hold[1000]={'\0'};
            for(int y=x+1;y<no_count;y++){
                if(((strlen(no[x]))<(strlen(no[y])))){
                    strcpy(hold,no[x]);
                    strcpy(no[x],no[y]);
                    strcpy(no[y],hold);
                }
            }
        }
        for(int x=0;x<no_count;x++){
            char hold[1000]={'\0'};
            for(int y=x+1;y<no_count;y++){
                if((strlen(no[x]))==(strlen(no[y]))){
                    for(int i=1;i<strlen(no[x]);i++){
                        if(no[x][i]<no[y][i]){
                            strcpy(hold,no[x]);
                            strcpy(no[x],no[y]);
                            strcpy(no[y],hold);
                        }
                    }
                }
            }
        }
//        printf("排序後\n");
        for(int x=0;x<no_count;x++){
            printf("%s\n",no[x]);
        }
        for(int x=0;x<count;x++){
            printf("%s\n",list[x]);
        }
    }

    return 0;
}
