#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "enter n";
  cin >> n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<j<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}


/*
enter n 4
1 
1 2 
1 2 3 
1 2 3 4 
*/