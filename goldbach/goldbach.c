#include <stdio.h>
#include <stdbool.h>


bool is_prime(long long int x)
{
    if (x == 1) return 0;
    if (x == 2) return 1;
    if (x == 3) return 1;
    if ( x % 2 == 0 || x % 3 == 0) return 0;

    for (long long int i = 5; i * i < = x; i+= 6)
    {
        if (x % i == 0 || x % (i + 2) == 0)
        {
           return 0; 
        }
    }
return 1;  
}

void goldbach(long long * prime1, long long *prime2, long long x)
{
    for (long long i = 1; i <= x; i++)
    {
        if (is_prime(i))
        {
            *prime1 = i;
            *prime2 = x - *prime1;
            if (is_prime(*prime2)) return;
            
        }
    }
}








int main(){
    long long x;
    long long prime1;
    long long prime2;
    int input_checker;
    printf("Give me a number\n");
    scanf("%lld", x);
  
    if (input_checker == EOF)
    {
        printf("EOF detected, exitting\n");
        return 0;
    }else if(input_checker)
}