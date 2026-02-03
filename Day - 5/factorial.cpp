#include<iostream>
using namespace std;

int main () {
    int num, i = 1;
    long long fact = 1;
    cout<<"Enter the number: ";
    cin>>num;
    while(i <= num) {
        fact *= i;
        i++;
    }
    cout<<fact;
}
