#include <iostream>
using namespace std;

int main(){
    int n=3;
    int i=1;

    while(i<=n){
        int j=1;
        char c='A'-j+1;
        while(j<=n){
            cout<<c;
            j++;
            c++;
        }
        cout<<endl;
        i++;
    }
}