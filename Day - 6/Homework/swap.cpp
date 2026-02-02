#include<iostream>
using namespace std;

void swap (int &a, int &b, int &c) {
    a = a+b+c;
    b = a - (b+c);
    c = a - (b+c);
    a = a - (b+c);
}

int main() {
    int num1, num2, num3;
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
    cout<<"Enter the third number:";
    cin>>num3;

    swap(num1, num2, num3);
    cout<<"Number after swap:"<<num1<<" "<<num2<<" "<<num3;
    
}
