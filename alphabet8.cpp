#include<iostream>
using namespace std;

int main(){
    int n=3;
    char a='A';
    int i=1;
    while(i<=n){
        int j=1;
        a=a+i+j-2;
        while(j<=i){
            cout<<a;
            j++;
        }
        i++;
        cout<<endl;
    }
}

/*
A
BB
DDD
*/