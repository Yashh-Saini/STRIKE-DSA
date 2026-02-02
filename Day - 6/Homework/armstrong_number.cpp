#include<iostream>
using namespace std;

bool ArmstrongNumber(int num) {
    int ans = 0, i = 1, original = num;
    while(i<=num) {
        int last_digit = num%10;
        ans = ans + last_digit*last_digit*last_digit;
        num /= 10;
    }

    if(ans == original) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    if(ArmstrongNumber(num) == 0) {
        cout<<"Not an Armstrong Number";
    } else {
        cout<<"Armstrong Number";
    }

    return 0;
}
