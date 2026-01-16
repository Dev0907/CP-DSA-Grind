#include<iostream>
using namespace std;
//Given two numbers, need to check how many min steps need to be required to make the first number  disvisible of the other by incrementing 1.
//For eg: a=50 b=100 Output:0 As 100%50=0, now if a=10,b=4 then Output: 2 As 10+1+1=12%4=0
int main()
{
  int cases;
  cin>>cases;
     int trial=0;
  while(cases--){
    int a,b;
    cin>>a>>b;
    if(a%b==0){
      cout<<0<<endl;
    }
    else{
      cout<<b-(a%b);
    
  }
  return 0;
}
}
//Missed out the counting logic with this simple formula to make it O(1).