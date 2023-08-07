#include <iostream>
using namespace std;

int main(){

    int a=3;
    // cin>>a;
    char c='A';
    int i=1;
    while(i<=a){
        int j=1;
        while(j<=a){
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
DEF
GHI
*/