#include <bits/stdc++.h>
using namespace std;

//operates on a position based approach
//tracks each  numbers's og index, counting how many times
//a number x+1 appears before x, adding 1 for each round
//prevents OT by working with indices rather than scanning
//adjusts queries by how it affects the original array 
//vs how it affects after it was changed

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    vector<int> pos(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        pos[arr[i]-1] = i;
    }

    int count
     = 1;
    for (int i = 0; i+1 < n; i++){
        if (pos[i] > pos[i+1])
        {
            count
            ++;
        }
    }

    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        int x = arr[a-1]-1;
        int y = arr[b-1]-1;

        if (x == y){
            cout << count << endl;
            continue;
        }

        if (x > y) swap(x,y);

        if (x-1 >= 0 && pos[x-1] > pos[x]) count--;
        if (x+1 < n && pos[x] > pos[x+1]) count--;

        if (y-1 >= 0 && pos[y-1] > pos[y]) count--;
        if (y+1 < n && pos[y] > pos[y+1]) count--;

        if (y == x+1 && pos[x] > pos[y]) count++;

        swap(arr[a-1], arr[b-1]);
        swap(pos[x], pos[y]);

        if (x - 1 >= 0 && pos[x - 1] > pos[x]) count++;
        if (x + 1 < n && pos[x] > pos[x+1]) count++;

        if (y - 1 >= 0 && pos[y - 1] > pos[y]) count++;
        if (y + 1 < n && pos[y] > pos[y+1]) count++;

        if (y == x + 1 && pos[x] > pos[y]) count--;

        cout << count << "\n";
    }
    return 0;
}