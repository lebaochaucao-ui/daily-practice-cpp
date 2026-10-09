#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    int p;
    long double q, r;
    cin >> a >> b;

    p = 21*a + 5*b - 2009;
    q = ((21.0 * a * a) - 5 * b) / (2009.0 * b * b);
    r = (21*a + (5.0 * b * b)) / (2009 * b + 15);
    cout << p << " " << fixed << setprecision(4) << q << endl;
    cout << fixed << setprecision(6) << r;
    return 0;
}
