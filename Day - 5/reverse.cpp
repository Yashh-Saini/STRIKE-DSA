#include<iostream>
using namespace std;

int main () {
    int num, last_digit, ans = 0;
    cout<<"Enter the Number: ";
    cin>>num;
    while(num) {
        last_digit = num%10;
        ans = ans * 10 + last_digit;
        num /= 10;
    }
    cout<<ans;
}
