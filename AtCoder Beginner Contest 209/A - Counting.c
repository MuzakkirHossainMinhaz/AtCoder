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

    if (A - B < 0)
        printf("%d\n", (B - A) + 1);
    else
        printf("0\n");

    return 0;
}
