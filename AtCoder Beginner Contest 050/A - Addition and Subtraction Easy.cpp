/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    char op;

    scanf("%d %c %d", &A, &op, &B);

    switch(op)
    {
    case '+':
        cout << A+B << endl;
        break;
    case '-':
        cout << A-B << endl;
        break;
    }

    return 0;
}
