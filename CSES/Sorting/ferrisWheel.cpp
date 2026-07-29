#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    vector<int> weight(n);
    for (int i = 0; i < n; i++){
        cin >> weight[i];
    }

    sort(weight.begin(),weight.end());

    int i = 0;
    int j = n-1;
    int count = 0;

    while (i <= j){
        if (i != j && weight[i] + weight[j] <= x){
            i++;
        }
        j--;
        count++;
    }

    cout << count << endl;
    return 0;
}
