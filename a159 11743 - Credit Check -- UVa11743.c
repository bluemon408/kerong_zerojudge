#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d%*c",&n);
    while(n--){
        char list[30]={'\0'};
        char data[4][10]={'\0'};
        scanf("%[^\n]%*c",list);
        char *d=" ";
        char *pick = strtok(list, d);
        int put=0;
        while (pick != NULL) {
            strcpy(data[put++],pick);
            pick = strtok(NULL, d);
        }
        int even_list[8]={0};
        int cnt=0;
        for(int y=0;y<4;y++){
            for(int x=0;x<4;x+=2){
                even_list[cnt]=2*(data[y][x]-'0');
                cnt+=1;
            }
        }
        int even=0;
        for(int y=0;y<8;y++){
            while(even_list[y]>0){
                even+=even_list[y]%10;
                even_list[y]/=10;
            }
        }
        int odd=0;
        for(int y=0;y<4;y++){
            for(int x=1;x<4;x+=2){
                odd+=data[y][x]-'0';
            }
        }
        printf("%s\n",((odd+even)%10==0)?"Valid":"Invalid");
    }
    return 0;
}
