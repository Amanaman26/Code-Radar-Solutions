#include <stdio.h>

int main() {
    int x, y;
    char v;
    scanf("%d %d %*c%c", &x, &y, &v);

    switch (v) {
        case '+':
            printf("%d", x + y);
            break;
        case '-':
            printf("%d", x - y);
            break;
        case '*':
            printf("%d", x * y);
            break;
        case '/':
            if (y == 0)
                printf("Division by zero error");
            else
                printf("%d", x / y); 
            break;
        default:
            printf("error");
    }

    return 0;
}
