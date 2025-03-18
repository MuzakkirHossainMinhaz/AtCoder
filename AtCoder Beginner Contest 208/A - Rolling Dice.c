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

    if (A <= B && B <= 6 * A)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
