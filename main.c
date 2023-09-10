#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,i;
    int t[3][6]={0};
    for(i=0;i<3;i++)
    {
        for(j=0;j<6;j++)
            printf("%d\t",t[i][j]);
        printf("\n");

    }
    return 0;
}
