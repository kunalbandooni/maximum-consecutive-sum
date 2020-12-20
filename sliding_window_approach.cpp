/*
Print the maximum consecutive sum of k elements in an array.

Input:-
5 3
5 2 -1 0 3

Output:-
6

Explanation:- 
By summing each k terms consecutively, maximum sum is 6.
5+2+(-1)=6
2+(-1)+0=1
-1+0+3=2

Time Complexity:- O(n)

*/
#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int sum=0,max;
    for(int i=0;i<k;i++)
        sum+=a[i];
    max=sum;
    for(int i=1;i<=n-k;i++){
        sum=sum+a[i+1]-a[i-1];
        if(max<sum)
            max=sum;
    }
    cout<<"Max sum is : "<<max;
    return 0;
}        