#include<iostream>
using namespace std;

int main () {
    int num, rem, ans = 0;
    cout<<"Enter the Number: ";
    cin>>num;
    int original = num;

    while(num) {
        rem = num%10;
        ans = ans + rem*rem*rem;
        num /= 10;
    }
    
    if(ans == original) {
        cout<<"Armstrong Number";
    } else {
        cout<<"Not an Armstrong Number";
    }
}
