#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "enter n";
  cin >> n;
  int i=1;
  while(i<=n){
  int c=i;
    int j=1;
    while(j<=i){
      cout<<c<<" ";
      c++;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}


/*
enter n4
1 
2 3 
3 4 5 
4 5 6 7
*/