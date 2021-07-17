#include <stdio.h>

int main()
{
    int n;
    printf("ASCII Value:");
    printf("\n");
    scanf("%d", &n);

    if (n > 0 && n < 128)
    {
        printf("%c", n);
    }

    else
    {
        printf("Put values between 0 and 128");
    }
    return 0;
}