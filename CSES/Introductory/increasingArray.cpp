#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    ll count = 0;

    for (int i = 0; i+1 < n; i++){
        if (arr[i+1] < arr[i]){
            count += arr[i] - arr[i+1];
            arr[i+1] = arr[i];
        }
    }
    cout << count;
    return 0;
}