#include <bits/stdc++.h>
using namespace std;

/*utilizes multiset's binary search strategy to find the smallest number
strictly greater than x inside the tower multiset, if there exists no number, 
starts a new tower, processes numbers and if sees number in top that is greater
than first number, it can replace it to find the minimum number of towers*/

int main(){
    int n;
    cin >> n;

    multiset<int> tower;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;

        auto it = tower.upper_bound(x);
        
        if (it != tower.end()){
            tower.erase(it);
        }

        tower.insert(x);
    }

    cout << tower.size() << endl;
    return 0;
}