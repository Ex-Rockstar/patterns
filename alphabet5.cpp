#include <iostream>
using namespace std;

int main(){
    int n=3;
    int i=1;

    char c='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            c='A'+i+j-2;         
            cout<<c;
            j++;
            c++;
        }
        cout<<endl;
        i++;
    }
}

/*
ABC
BCD
CDE

*/