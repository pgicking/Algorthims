//Peter Gicking
//906600590
//10/14/14
//factor2.c
//CS350 Laboratory 3
//Student Name: Peter Gicking
//Student ID: 906600590
//Date:10/14/14
//Program 1 Name: factor2.c
//Algorithm 1 Name: Decrease and conquer
//Algorithm 1 Family: Divide and conquer
//Worst Case Running Time Analysis: O(n)
//Possible Application Area: Math libaries

#include <stdio.h>

int exponent(float a, int n)
{
    if(n == 0)
    {
        return a;
    }
    else if(n == 2)
    {
        return a * a;     
    }
    else if(n == 3)
    {
        return a * a * a;
    }
    else
    {
        int A = (n / 2);
        int B = A + (n % 2);
        printf("A: %d ", A);
        printf("B: %d ", B);
        return exponent(a,A) * exponent(a,B); 
    }
}

int main()
{
    float a = 1;
    int n = 0;
    int i = 0;
    float ans = 0;

    a = 1;
    while(a != 0)
    {
         printf("\nEnter a value for a: ");
         scanf(" %f", &a);
         printf("\nEnter a value for n: ");
         scanf(" %d", &n);

         ans = exponent(a, n);

        printf("\n %g^%d is: %f ",a,n,ans);
    }
}
