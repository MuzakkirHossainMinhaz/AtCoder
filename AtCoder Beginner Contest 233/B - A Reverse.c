/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
    int L, R;
    scanf("%d %d\n", &L, &R);
    char S[100005];
    gets(S);

    for(int i=0; i<L-1; i++)
        printf("%c", S[i]);

    for(int i=R-1; i>=L-1; i--)
        printf("%c", S[i]);

    for(int i=R; i<strlen(S); i++)
        printf("%c", S[i]);

    printf("\n");

    return 0;
}

