#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll q;
    cin >> q;
 
    while (q--){
        ll k;
        cin >> k;
 
        ll d = 1;
        ll count = 9;
        ll start = 1;
 
        while (k > count * d){
            k -= count * d;
            d++;
            count *= 10;
            start *= 10;
        }
 
        ll num = start + (k - 1) / d;
 
        ll idx = (k - 1) % d;
 
        string alex = to_string(num);
 
        cout << alex[idx] << "\n";
    }
    return 0;
