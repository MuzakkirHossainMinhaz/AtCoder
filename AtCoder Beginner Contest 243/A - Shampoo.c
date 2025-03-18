/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int V, F, M, T;
    scanf("%d%d%d%d", &V, &F, &M, &T);
    bool flag = true;

    while (V)
    {
        if (V >= F)
            V -= F;
        else
        {
            printf("F\n");
            flag = false;
            break;
        }
        if (V >= M)
            V -= M;
        else
        {
            printf("M\n");
            flag = false;
            break;
        }
        if (V >= T)
            V -= T;
        else
        {
            printf("T\n");
            flag = false;
            break;
        }
    }

    if (flag)
        printf("F\n");

    return 0;
}
