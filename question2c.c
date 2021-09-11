#include<stdio.h> // include stdio.h library
int check_prime(int n);

int main(void)
{

    int start, end;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    for(int i = start; i < end; i++)
    {
        if(check_prime(i) && check_prime(i + 2))
        {
            printf("{%d, %d}\n", i, i + 2);
            i = i + 1;
        }
    }

    return 0; // return 0 to operating system
}

int check_prime(int n)
{
    if(n == 1)
    {
        return 0;
    }

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            // number is not prime
            return 0;
        }
    }

    // number is prime
    return 1;
}