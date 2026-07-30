#include <bits/stdc++.h>
using namespace std;

//operates on a position based approach
//tracks each number's og index, counting how many times
//a number x+1 appears before x, adding 1 for each round

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> pos(n);
    for (int i = 0; i < n; i++){
        pos[arr[i]-1] = i;
    }

    int count = 1;
    for (int i = 0; i+1 < n; i++){
        if (pos[i] > pos[i+1])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}