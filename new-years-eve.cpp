#include <bits/stdc++.h>
using namespace std;

// we have a problem where we've to choose candies numbered from 1 to n where we can take max k candies such that the Xor of those is maximum possible
int main(){
    int n,k;
    cin>>n>>k;
    int max=0;
    if (k==1) cout<<n; else{
        long a=1;
        while (a<n) a=a*2+1;
        cout<<a;}
    return 0;}

    //so to maximize the xor, we need to take numbers such that all bits are set to 1
    // if k=1, we take the max possible,i.e., n
    // if k>1, we take the max possible number such that all bits are set to 1
    // (eg. if k=2, we can take 1 and 2 to get 3(11), if k=3, we can take 1,2,3 to get 00, but we can also take 1,2,4 to get 7(111))
    // Googled to find xor properties to confirm this