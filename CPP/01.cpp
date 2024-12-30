//#include<iostream>
//#include<cmath>

//using namespace std;

/*Write a code for taking in 5 numbers as input in an array and printing them.

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        int x;
        cin >> x;
        arr[i]=x;
    }
    
    for (int i:arr){
        cout <<" ";
        cout << i;
    }

}

*/


/*

Single File Programming Question

Problem Statement

At a university, two student clubs, "Tech Wizards" and "Creative Minds," have decided to merge and form a new club called "Innovative Thinkers." 

As part of the merger process, the club leaders, Alex and Sarah, need to create a program that merges the member lists of the two clubs and identifies the unique members in the merged list. The program takes two arrays, arr1, and arr2, as inputs with sorted member IDs. Each array represents the member IDs of the respective clubs. Help Alex and Sarah.


Company Tags: Capgemini

Input format :

The first line of input consists of an integer n, representing the size of the first array (Tech Wizards).

The second line of input consists of n space-separated integers, representing the member IDs of the first array.

The third line of input consists of an integer m, representing the size of the second array (Creative Minds).

The fourth line of input consists of m space-separated integers, representing the member IDs of the second array.

Output format :

The output displays the unique member IDs from the merged array, separated by a space.




Refer to the sample output for the formatting specifications.

Code constraints :

In this scenario, the test cases fall under the following constraints:

1 ≤ n, m ≤ 10

1 ≤ member IDs ≤ 50

Sample test cases :
Input 1 :
5
1 2 3 4 5
7
4 5 6 6 7 7 8
Output 1 :
1 2 3 4 5 6 7 8 
Input 2 :
3
2 2 2
4
3 4 5 6
Output 2 :
2 3 4 5 6 
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.

*/

#include<iostream>
#include<array>
using namespace std;
int main(){
    int n,m;
    
    cin>>n;
    int arr1[n];
    for (int i=0;i<n;i++){
        cin>>arr1[i];
    }
    
    cin>>m;
    int arr2[m];
    for (int i=0;i<m;i++){
        cin>>arr2[i];
    }
    
    int s=n+m;
    int arr[s];
    for (int i=0;i<n;i++){
        arr[i]=arr1[i];
    }
    int k=0;
    for (int i=n;i<s;i++){
        arr[i]=arr2[k];
        k++;
    }
    
    int c=s;
    
    for(int i=0;i<c;i++){
        for (int j=1;j<c;j++){
            
            if (arr[i]==arr[j]){
                arr[j]=arr[(j+1)];
                j--;
                c--;
                
            }
        }
    }
    
    
    for(int i=0;i<c;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
    