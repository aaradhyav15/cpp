//
//  3 2 1
//  3 2 1
//  3 2 1

// use (n-j+1)

#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;

  int i = 1;
  
  while(i<=n) {     //for rows
    int j = 1;

    while(j<=n) {   //for columns
      cout<<n-j+1<<" ";
      j++;
    }
    i++;
    cout<<endl;
  }
}
