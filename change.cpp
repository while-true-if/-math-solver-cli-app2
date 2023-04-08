#include <stdio.h>

int main()
{
    int n;
    int m;
    int o;
    int r;
    int c;

    while (true)
    {
        printf("Please enter a number following the instructions below:\n");
        printf("Encryption: 0, Decryption: 1\n");
        scanf("%d", &c);

        if (sizeof(c) != sizeof(int))
        {
            printf("Please enter either 0 or 1 as an integer type.\n");
            continue;
        }

        else if (c > 1 or c < 0)
        {
            printf("Please enter a number either 0 or 1.\n");
            continue;
        }

        else
        {
            break;
        }
        
    }
    
    if (c == 0)
    {
        printf("Please write the number\n");
        scanf("%d", &o);  

        n = o * 2 + 5 * 9 - 3 * 3;
        m = ((o * 2 + 5) * 9 - 3) * 3;

        printf("answer=%d", m - n);
    }
    else if (c == 1)
    {
        printf("Please write the number\n");
        scanf("%d", &o);  

        r = (o - 90) / 52;
        printf("answer=%d", r);
    }

}
