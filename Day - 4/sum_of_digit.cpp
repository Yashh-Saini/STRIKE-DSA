#include<iostream>
using namespace std;

int main() {
    int num, rem, sum = 0;
    cout<<"Enter the Number: ";
    cin>>num;

    while(num) {
        rem = num%10;
        sum+=rem;
        num /= 10;
    }
    cout<<sum;
}
