#include <bits/stdc++.h>
using namespace std;

//uses sliding window technique with set where i & j increase parallel
//removes duplicates until no longer seen
//leftover is non duplicated music list

int main(){
    int n;
    cin >> n;
    
    vector<int> music(n);
    for (int i = 0; i < n; i++) cin >> music[i];

    set<int> duplicate;
    int count = 0; 
    int i = 0;
    
    for (int j = 0; j < n; j++){
        while (duplicate.count(music[j])){
            duplicate.erase(music[i]);
            i++;
        }

        duplicate.insert(music[j]);
        count = max(count, j - i + 1);
    }
    cout << count;
    return 0;
}