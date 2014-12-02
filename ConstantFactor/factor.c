//Peter Gicking
//906600590
//10/14/14
//constant.c
//
#include <stdio.h>

int exponent(float a, int n)
{
    int ans = 0;
    int i = 0;

    ans = a;
    for(i = 0; i < (n-1); ++i)
    {
         ans = (ans * a);
         printf("\n%d",ans);
    }

   return ans; 

}

int main(int argc, char* argv[])
{
    float a = 1;
    int n;
    int i = 0;
    float aa;
    float ans;
    int count = 0;
    int nn = 0;

    while(a != 0)
    {
        n = 0;
        a = 1;
        printf("\nEnter a value for a: ");
        scanf(" %f", &a);
        aa = a;
        printf("\nEnter a value for n: ");
        scanf(" %d", &n);

        ans = a;
        nn = n;
        while(n % 2 == 0)
        {
            ++count;
            n = (n / 2);
            printf(" %d", n);
        }

        for(i = 0; i <= count; ++i)
        {
            //ans = (ans * a);
            ans = ans * exponent(a,n);
            printf("\n%f",ans);
        }

        printf("\n %g^%d is: %f ",aa,n,ans);
    }

    printf("\nTerminating");
    return 0;
}

