#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    cin>>num;
    while(num>0){
        num%=10;
        sum+=num;
        num/=10;
    }
    return sum;

}