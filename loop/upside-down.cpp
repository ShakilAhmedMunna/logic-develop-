#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{

    int i, j,k, n =9;

    for(i = 0 ; i <= n ; i++)
    {

        for(j = 0 ; j < i; j++ )
        {
            printf(" ");
        }

        for(k = n ; k > i-1; k-- )
        {
            static int h = 9;
            if(i == 0)
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
