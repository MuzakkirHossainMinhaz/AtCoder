/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <stdio.h>

int main()
{
    int A, B, res = 1;
    scanf("%d%d", &A, &B);

    if (A == B)
        printf("1\n");
    else
    {
        int i = 0;
        while (i < A - B)
        {
            res *= 32;
            i++;
        }
        printf("%d\n", res);
    }

    return 0;
}
