#include <stdio.h>

void main()
{
    int n;
    int m;
    int o;
    int r;
    int c;

    printf("Please enter a number following the instructions below:");
    printf("Encryption: 0, Decryption: 1\n");

    scanf("%d", &c);  

    if (c == 0)
    {
        printf("Please write the number\n");
        scanf("%d", &o);  

        n = o * 2 + 5 * 9 - 3 * 3;
        m = ((o * 2 + 5) * 9 - 3) * 3;

        printf("answer=%d", m - n);
    }
    else
    {
        printf("Please write the number\n");
        scanf("%d", &o);  

        r = (o - 90) / 52;
        printf("answer=%d", r);
    }
}
