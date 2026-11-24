#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    int n;
    cin>>num;
    while(num>0){
        n=num%10;
        sum=sum+n;
        num/=10;
    }
    cout<< sum;

}
