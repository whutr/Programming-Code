#include <bits/stdc++.h>
using namespace std;

//uses a multiset approach, different from set in that it allows duplicate values
//by using upper_bound, finds the largest ticket > max price, then it-- finds the
//actual amount a person can purchase

int main(){
    int n, m;
    cin >> n >> m;

    multiset<int> price;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        price.insert(x);
    }
    
    for (int i = 0; i < m; i++){
        int x;
        cin >> x;

        auto it = price.upper_bound(x);

        if (it == price.begin()){
            cout << "-1" << endl;
        }
        else{
            it--;
            cout << *it << endl;
            price.erase(it);
        }
    }

    return 0;
}