// Your code here...
#include <stdio.h>
int main(){
    int x,y;
    char v;
    scanf("%d",&x);
    scanf(" %c",&v);
    scanf("%d",&y);
    switch(v)
    {
        case '+':
        printf("%d",x+y);
        break;
        case '-':
        printf("%d",x-y);
        break;
        case '*':
        printf("%d",x*y);
        break;
        case '/':
        printf("%d",x/y);
        break;
        default:
        printf("error");

    }
    return 0;
}