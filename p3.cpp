
//  1 2 3 4
//  1 2 3 4
//  1 2 3 4
//  1 2 3 4

#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;

  int i=1;

  while(i<=n) {     //for rows
    int j = 1;

    while(j<=n) {   //for columns
      cout<<j<<" ";
      j++;
    }
    i++;
    cout<<endl;
  }
}