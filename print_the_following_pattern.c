#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n ;
    scanf("%d",&n);
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            cout << (char)('A' - 1 + i) << " ";
        }
        cout << endl;
    }
    return 0;
}