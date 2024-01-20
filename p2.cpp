
// 1 1 1
// 2 2 2
// 3 3 3

#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;

  int i = 1;

  while(i<=n) {     //for rows
    int j =1;

    while(j<=n) {    // for columns
      cout<<i<<" ";
      j++;
    }
    i++;
    cout<<endl;
  }
}
