#include <iostream>

using namespace std;
int main(){


    int n=3;
    int i=1;
    char a='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<a;
            j++;
        }
        i++;
        a++;
        cout<<endl;

    }
}


/*
A
BB
CCC
*/