#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "enter n";
  cin >> n;
  int i = 1;
  int c = 1;

  while (i <= n) {
    int j = 1;
    while (j <= n) {
      cout << c << " ";
      c++;
      j++;
    }
    i++;
    cout << endl;
  }
  return 0;
}



/*
enter n3
1 2 3 
4 5 6 
7 8 9 
*/