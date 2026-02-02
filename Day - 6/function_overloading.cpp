#include<iostream> 
using namespace std;

int sum(int a, int b) {
    return a+b;
}

int sum(int a, int b, int c) {
    return a+b+c;
}

float sum(float a, float b) {
    return a+b;
}

int main() {
    int num1, num2;
    cout<<"Enter the First Number: ";
    cin>>num1;
    cout<<"Enter the Second Number: ";
    cin>>num2;

    cout<<sum(num1, num2);
}
