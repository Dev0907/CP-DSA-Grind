#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int max=0;
    if (k==1) cout<<n; else{
        long a=1;
        while (a<n) a=a*2+1;
        cout<<a;}
    return 0;}

    //when k=1, max number is n itself
    //when k>1, max number can be sjown as 2^m -1