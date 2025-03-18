/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <stdio.h>
#include <limits.h>

int main()
{
    long long int N, min = INT_MIN, max = INT_MAX;
    scanf("%lld", &N);

    if (N < min || N > max)
        printf("No \n");
    else
        printf("Yes\n");

    return 0;
}
