/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<stdio.h>

int main()
{
    int n, k, x=1;
    scanf("%d\n%d", &n, &k);

    while(n--)
    {
        if(2*x < x+k)
            x *= 2;
        else
            x += k;
    }

    printf("%d\n", x);

    return 0;
}
