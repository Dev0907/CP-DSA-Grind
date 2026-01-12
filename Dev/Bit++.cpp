#include<iostream>
using namespace std;
// CP Striver Sheet Problem 1
//Problem 1 
int main()
{
  int X=0;
  int n;
  cin>>n;
  string s;
  for(int i=0;i<n;i++){
    cin>>s;
    if(s=="++X" || s=="X++"){
      X=X+1;
    }
    else{
      X=X-1;
    }
  }
  cout<<X;

}