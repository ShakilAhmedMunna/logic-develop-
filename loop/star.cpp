#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int i, j, k, n = 25;

    for(i=1 ; i < n  ; i++)
    {
        for(j=n; j > i; j--)
        {
            printf(" ");

        }

        for(k=0 ; k < j  ; k++)
        {
            printf(" *");
        }
        printf("\n");


    }
    return 0;
}
