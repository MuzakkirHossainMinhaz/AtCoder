/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d%d", &A, &B);

    if (A <= 2 * B)
        printf("0\n");
    else
        printf("%d\n", A - 2 * B);

    return 0;
}
