/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    int len1 = a.size();
    int len2 = b.size();

    if(a[len1-1]==b[0] && b[len2-1]==c[0])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
