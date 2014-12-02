//Peter Gicking
//906600590
//10/14/14
//constant.c
//CS350 Laboratory 3
//Student Name: Peter Gicking
//Student ID: 906600590
//Date:10/14/14
//Program 1 Name: constant.c
//Algorithm 1 Name: Decrease and conquer
//Algorithm 1 Family: Divide and conquer
//Worst Case Running Time Analysis: O(n)
//Possible Application Area: Math libaries
#include <stdio.h>

int main(int argc, char* argv[])
{
    float a = 1;
    int n;
    int i = 0;
    float aa;
    float ans;

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
        for(i = 0; i < (n-1); ++i)
        {
            ans = (ans * a);
            printf("\n%f",ans);
        }

        printf("\n %g^%d is: %f ",aa,n,ans);
    }

    printf("\nTerminating");
    return 0;

}
