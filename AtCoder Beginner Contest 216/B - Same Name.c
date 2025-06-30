/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

struct People {
    char S[25];
    char T[25];
};

int main()
{
    int n, a=0, b;
    scanf("%d", &n);

    struct People people[n];

    for(int i=0; i<n; i++)
    {
        scanf("%s", &people[i].S);
        scanf("%s", &people[i].T);
    }

    bool found = false;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(strcmp(people[i].S, people[j].S)==0 && strcmp(people[i].T, people[j].T)==0)
            {
                found = true;
                break;
            }
        }
        if(found)
            break;
    }

    if(found)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
