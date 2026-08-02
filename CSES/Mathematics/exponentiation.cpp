#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//utilizes a binary exponentiation approach to reduce time required from O(b) to 
//O(logb), preventing TLE errors

ll binaryExponentiation(ll a, ll b, ll mod){
    a %= mod;
    ll res = 1;
    while (b > 0){
        if (b & 1){
            res = (res * a) % mod;
        }

        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

int main(){
    ll n;
    cin >> n;
    ll mod = 1e9+7;

    for (int i = 0; i < n; i++){
        ll a, b;
        cin >> a >> b;

        ll res = binaryExponentiation(a,b,mod);
        cout << res << endl;
    }
    return 0;
}