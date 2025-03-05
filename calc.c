#include <stdio.h>


int main(int argc, char* argv[])
{
    if(argc <= 1)
    {
        printf("Enter a command\n");
    }

    int x = (int)*argv[1] - '0';
    char sym = *argv[2];
    int y = *argv[3] - '0';
    int res = 0;
    switch(sym)
    {
        case '*':
            res = x * y;
            break;
        case '/':
            res = x / y;
            break;
        case '+':
            res = x + y;
            break;
        case '-':
            res = x - y;
            break;
        default:
            printf("Symbol not known\n");
            return 1;
    }
    printf("%d\n", res);
    return 0;
}


