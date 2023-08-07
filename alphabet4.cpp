#include <iostream>
using namespace std;

int main(){
    int n=3;
    int i=1;

    char c='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<c;
            j++;
            c++;
        }
        cout<<endl;
        i++;
    }
}