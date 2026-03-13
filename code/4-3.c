#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int is_prime = 1; // true면 1 false면 0
    if (a <= 1)
    {
        is_prime = 0;
    }
    else {
        for (int i = 2; i < a; i++) {
            if (a % i == 0)
            {   
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime == 1)
    {
        printf("true");
    }
    else {
        printf("false");
    }
    
    return 0;
}

