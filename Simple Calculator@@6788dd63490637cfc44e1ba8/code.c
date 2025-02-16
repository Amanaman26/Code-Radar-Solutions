// Your code here...
#include <stdio.h>
int main(){
    int x,y;
    char v;
    scanf("%d %d %c",&x,&y,&v);
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