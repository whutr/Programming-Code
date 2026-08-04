#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//uses a sieve precomputation approach to calculate all divisors beforehand, preventing
//TLE errors and infinite loop

const int MAXX = 1000000;
int divisors_count[MAXX+1];

void divisors(){
    for (int i = 1; i <= MAXX; i++){
        for (int j = i; j <= MAXX; j+= i){
            divisors_count[j]++;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    divisors();

    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        cout << divisors_count[x] << "\n";
    }
    return 0;
}