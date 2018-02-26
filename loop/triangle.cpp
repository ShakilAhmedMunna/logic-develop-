#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{

    int i, j,k, n =10;

    for(i = 1 ; i < n ; i++)
    {
        for(j = n ; j > i; j-- )
        {
            printf(" ");
        }
        for(k = 1 ; k < i+1; k++ )
        {
            static int h = 1;


            if(i == n-1)
            {
                printf(" *");
            }
            else
            {
                if(k == h || k == i)
                {
                    printf(" *");
                }
                else
                {
                    printf("  ");
                }
            }

        }

        printf("\n");
    }


    return 0;
}
