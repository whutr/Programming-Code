#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int a, b;
        cin >> a >> b;
 
        int tot = a + b;
        if (tot % 3 == 0 && max(a, b) <= 2 * min(a, b)){
            cout << "YES" << endl; 
        }
        else{
            cout << "NO" << endl;
        }
    }
 
    return 0;
}