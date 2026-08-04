#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//utilizes a binary exponentiation approach to reduce time required from O(b) to 
//O(logb), preventing TLE errors
//Mod is a prime number, by Fermat's little theorem: If p = prime, then 
//a^p-1 congruent 1 (mod p), for powers, the powers wrap around every p-1 time

ll binaryExponentiation(ll base, ll exp, ll mod){
    base %= mod;
    ll res = 1;
    while (exp){
        if (exp & 1){
            res = (res * base) % mod;
        }

        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll mod = 1e9+7;

    for (int i = 0; i < n; i++){
        ll a, b, c;
        cin >> a >> b >> c;

        ll exp = binaryExponentiation(b,c,mod-1);
        
        ll ans = binaryExponentiation(a,exp,mod);
        cout << ans << endl;
    }
    return 0;
}