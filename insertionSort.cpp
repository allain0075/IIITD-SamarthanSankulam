#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

void insertionSort(int *arr, int n)
{
    //Write your code here
    for(int i = 1 ; i<n ; i++){
        int j , curr = arr[i];
        for(int j = i-1 ; j>=0 ; j--){
            if(curr<arr[j]) arr[j+1] = arr[j];
            else break;
        }
        arr[j+1] = curr;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        //for getting input from input.txt 
        freopen("inp.txt","r", stdin);
        // for writing output to output.txt
        freopen("out.txt","w", stdout);
    #endif

}