#include <bits/stdc++.h>

using namespace std;

int main(){
    long double a, b;
    cin >> a;
    if(a < 0){
        cout << "ko hop le! \n";
    }
    else if(a > 1e9){
        cout << "ko hop le! \n";
    }
    else{
        b = sqrt(a);
        cout << fixed << setprecision(2) << b;
    }
    return 0;
}
