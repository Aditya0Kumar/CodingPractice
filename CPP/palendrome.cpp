#include<iostream>
#include<cmath>

using namespace std;

bool ispalendrome(char arr[],int size){
    int s=0;
    int e = size-1;
    while(s<e){
        if(arr[s]!=arr[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
        return true;
    }
}

int main(){
    char arr[100]="noon";
    if (ispalendrome(arr,4)){
        cout<<"Palendrome";
    }
    else{
        cout<<"Not Palendrome";
    }
}
/*NOTE: We can use toupper or tolower if there exists a character that is in Cap while other are lower.*/

