#include <bits/stdc++.h>
using namespace std;

//two pointer parallel technique
int main(){
    int n, m, k;
    cin >> n >> m >> k;

    vector<long long> desire(n);
    vector<long long> apartment(m);
    
    for (int i = 0; i < n; i++){
        cin >> desire[i];
    }

    for (int i = 0; i < m; i++){
        cin >> apartment[i];
    }

    sort(desire.begin(), desire.end());
    sort(apartment.begin(), apartment.end());

    int count = 0; 
    int i = 0, j = 0;

    while(i < n && j < m){
        if (apartment[j] < desire[i] - k){
            j++;
        }
        else if (apartment[j] > desire[i] + k){
            i++;    
        }
        else{
            count++;
            i++;
            j++;
        }
    }
    cout << count;
    return 0;
}