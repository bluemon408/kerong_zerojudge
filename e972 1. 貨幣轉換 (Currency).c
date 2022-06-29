#include<stdio.h>
#include<stdlib.h>

int main(){
    double money;
    scanf("%lf",&money);
    double cost;
    scanf("%lf%*c",&cost);
    char change;
    scanf("%c",&change);
    if(change=='T'){
        money-=cost;
        money/=1.0;
        printf(money<0?"No Money":"T %.2f",money);
    }
    else if(change=='U'){
        money-=cost*30.9;
        money/=30.9;
        printf(money<0?"No Money":"U %.2f",money);
    }
    else if(change=='J'){
        money-=cost*0.28;
        money/=0.28;
        printf(money<0?"No Money":"J %.2f",money);
    }
    else if(change=='E'){
        money-=cost*34.5;
        money/=34.5;
        printf(money<0?"No Money":"E %.2f",money);
    }
    
    return 0;
}