#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "enter n";
  cin >> n;
  int i = 1;
  while(i<=n){
    int j=1;
    while(j<=n){
    if(i==1 || j==1 || i==n || j==n){
      cout<<"* ";

    }
      else{
        cout<<"  ";
    }
      j++;
  }
    i++;
    cout<<endl;
  }
  return 0;
}