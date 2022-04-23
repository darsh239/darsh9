#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int binary, decimal=0, i=0, rem;
    printf("Enter any binary number: ");
    scanf("%d", &binary);
    while(binary!=0)
    {
        rem = binary%10;
        decimal = decimal + rem*pow(2,i);
        i++;
        binary= binary/10;
    }
    printf("\nEquivalent Decimal Value = %d", decimal);

    return 0;
}
