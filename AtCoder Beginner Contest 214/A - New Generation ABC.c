/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n < 126)
        printf("4\n");
    else if (n < 212)
        printf("6\n");
    else
        printf("8\n");

    return 0;
}
