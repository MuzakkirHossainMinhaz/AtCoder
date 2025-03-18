/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr, arr + 3);

    if (arr[0] == 5 && arr[1] == 5 && arr[2] == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
