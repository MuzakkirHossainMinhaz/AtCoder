/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int maxValue, sum=0;
    if(a>=b && a>=c)
    {
        maxValue = a;
        sum = b+c;
    }
    else if(b>=a && b>=c)
    {
        maxValue = b;
        sum = a+c;
    }
    else
    {
        maxValue = c;
        sum = a+b;
    }

    cout << ((maxValue==sum) ? "Yes" : "No") << endl;

    return 0;
}

/**
int main()
{
    int packs[3];

    for(int i=0; i<3; i++)
        cin >> packs[i];

    sort(packs, packs+3);

    if(packs[0]+packs[1]==packs[2])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
*/
