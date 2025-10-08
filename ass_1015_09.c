//Check whether a number is a prime palindrome
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int isPalindrome(int n) 
    {
      int original = n;
      int reversed = 0;
      while (n > 0) 
     {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
     }
      return original == reversed;
    }

   int isPrime(int n)
  {
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            return 0;
        }
     }
   }


    if (isPalindrome(num) && isPrime(num))
    {
        printf("%d is a prime palindrome.\n", num);
    } 
    else
    {
        printf("%d is not a prime palindrome.\n", num);
    }

    return 0;
}
