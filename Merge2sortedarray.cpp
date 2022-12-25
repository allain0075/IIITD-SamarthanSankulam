#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    //Write your code here    
    int i = 0 ; j = 0 , k = 0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]) ans[k++] = arr1[i++];
        else ans[k++] = arr2[j++];
    }

    while(i<size1){
        ans[k++] = arr1[i++];
    }
    while(j<size2){
        ans[k++] = arr2[j++];
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