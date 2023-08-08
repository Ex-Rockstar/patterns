#include<iostream>
using namespace std;

int main(){
    int n=3;
    char a='A';
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            a='A'+i+j-2;
            cout<<a;
            j++;
        }
        i++;
        cout<<endl;
    }
}

/*
A
BC
CDE
*/
