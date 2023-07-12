#include<iostream>
using namespace std;

int main(){

    int n;
    cin >>n;

    int sum=0;
    int i=1;

    if(n%2==0){
        while (i<=n)
        {
            sum=sum+i;
            i=i+1;
            cout<<sum<<" ";
        }
        
    }
    return 0;
}