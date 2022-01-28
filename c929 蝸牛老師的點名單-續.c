#include<stdio.h>
#include<string.h>
int main(){
    char divide[1][99];
    while(scanf("%s",&divide)!=EOF){
        char text[1][99];
        scanf("%s",&text);
//        printf("%s\n",divide);
//        printf("%s\n",text);
        char *find=strtok(text,divide);
        while(find){
            printf("%s\n",find);
            find = strtok(NULL, divide);
        }
    }
    return 0;
}
