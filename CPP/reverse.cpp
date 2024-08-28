#include<iostream>
#include<cmath>

using namespace std;

int reverse(int x){
    int n =0;
    int l;
    while(x!=0){
        l=x%10;
        n=n*10+l;
        x=x/10;
    }
    return n;
}


int main(){
    int x;
    cin>>x;
    cout<<"Reverse: "<<reverse(x);
}