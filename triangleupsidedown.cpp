#include<iostream>
using namespace std;

int main() {
  int n=5;
  int i =1;
//   cin>>n;
  while(i<=n){ 
    int star=n-i+1;
    while (star){
      cout<<"*";
      star=star-1;
    }
    
    cout<<endl;
    i+=1;
  }
return 0;
}