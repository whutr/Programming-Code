#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n;
    cin >> n;
 
    for (ll k = 1; k <= n; k++){
        ll total = (k*k)*(k*k-1)/2;
        ll bad = 4*(k-1)*(k-2);
        cout << total - bad << "\n";
    }
    return 0;
}