#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t;
    cin >> t;
 
    for (ll i = 0; i < t; i++){
        ll y, x;
        cin >> y >> x;
        
        if (y > x){
            if (y % 2 == 0){
                cout << y*y - x + 1 << "\n";
            }
            else{
                y--;
                cout << y*y + x << "\n";
            }
        }
        else{
            if (x % 2 == 0){
                x--;
                cout << x*x + y << "\n";
            }
            else{
                cout << x*x - y + 1 << "\n";
            }
        }
    }
    return 0;
}