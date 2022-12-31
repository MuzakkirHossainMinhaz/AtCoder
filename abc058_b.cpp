/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string O, E;
    cin >> O >> E;

    int len = O.size()>E.size() ? O.size() : E.size();

    for(int i=0; i<len; i++)
    {
        if(O[i]>='a' && O[i]<='z')
            cout << O[i];
        if(E[i]>='a' && E[i]<='z')
            cout << E[i];
    }

    cout << endl;

    return 0;
}
