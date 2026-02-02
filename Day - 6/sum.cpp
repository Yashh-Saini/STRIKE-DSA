#include<iostream> 
using namespace std;
void sum(int a, int b) {
    int sum = a+b;

    cout<<sum<<endl;
}

int main() {
    int num1, num2;
    cout<<"Enter the First Number: ";
    cin>>num1;
    cout<<"Enter the Second Number: ";
    cin>>num2;

    sum(num1, num2);
}
