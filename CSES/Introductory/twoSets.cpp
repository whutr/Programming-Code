#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n;
    cin >> n;
    int sum = (1 + n) * n / 2;
 
    vector<ll> arr1;
    vector<ll> arr2;
 
    if (sum % 2 == 0){
        cout << "YES" << endl;
        if (n % 4 == 0){
            int i = 0;
            for (int j = 0; j < n/4; j++){
                arr1.push_back(i+1);
                arr1.push_back(n-i);
                i++;
            }
            for (int j = 0; j < n/4; j++){
                arr2.push_back(i+1);
                arr2.push_back(n-i);
                i++;
            }
 
            cout << n/2 << endl;
            for (int i : arr1){
                cout << i << " ";
            }
            cout << endl;
            cout << n/2 << endl;
            for (int i :  arr2){
                cout << i << " ";
            }
        }
        else{
            arr1 = {1,2};
            arr2 = {3};
            int i = 0;
            for (int j = 0; j < n/4; j++){
                arr1.push_back(i+4);
                arr1.push_back(n-i);
                i++;
            }
            for (int j = 0; j < n/4; j++){
                arr2.push_back(i+4);
                arr2.push_back(n-i);
                i++;
            }
 
            cout << n/2 + 1 << endl;
            for (int i : arr1){
                cout << i << " ";
            }
            cout << endl;
            cout << n/2 << endl;
            for (int i :  arr2){
                cout << i << " ";
            }
        }
    }
    else{
        cout << "NO";
    }
    
    return 0;
