# include <stdio.h>
# include <math.h>
int main()
{
    int a[10], n, i, j;
    printf("Enter the Number You want to Convert:\n");
    scanf("%d", &n);

    for(i = 0; n> 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }

    printf("Binary Number of a Given Number=\n");
    for(j= i - 1; j >= 0; j--)  {
        printf("%d", a[j]);
    }

    return 0;
}
