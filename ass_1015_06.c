// Print first N multiples of a number
#include <stdio.h>
int main() 
{
    int num, n, i;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter how many multiples to print (N): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        printf("%d * %d = %d\n", num, i, num* i);
    }

    return 0;
}
