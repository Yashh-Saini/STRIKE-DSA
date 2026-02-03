#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"Enter the Second number: ";
    cin>>num2;

    if(num1>num2) {
        cout<<"First Number is Greater";
    }
    else if(num2>num1) {
        cout<<"Second Number is Greater";
    }
    else {
        cout<<"Both are Equal";
    }

    return 0;
}
