#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//utilizes gray code formula and bits to print out solution

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    ll n;
    cin >> n;

    int tot = 1 << n;
    for (int i = 0; i < tot; i++){
        int g = i ^ (i >> 1);
        for (int j = n-1; j >= 0; j--){
            cout << ((g >> j) & 1);
        }
        cout << endl;
    }
    return 0;
}