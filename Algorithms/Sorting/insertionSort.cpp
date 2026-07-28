#include <bits/stdc++.h>
using namespace std;
/*
assume first index is already sorted
pick the next item & compare with numbers to its left
move larger numbers one space to the right, drop the item into the empty space
O(n^2) time
O(1) memory
*/

void insertionSort(vector<int> arr, int n){
    for (int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1;

        while (j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void printArr(vector<int> arr){
    for (int i : arr){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr{12, 11, 13, 5, 6};

    insertionSort(arr, arr.size());
    printArr(arr);

    return 0;
}
