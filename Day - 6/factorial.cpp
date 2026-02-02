#include<iostream>
using namespace std;

int factorial (int n) {
    
    int fact  = 1;
    int i = 1;
    while(i<=n) {
        fact *= i;
        i++;
    }
    return fact;
}

int main() {
    int num1, num2;
    cout<<"Enter the First Number: ";
    cin>>num1;
    cout<<"Enter the Second Number: ";
    cin>>num2;

    int answer1 = factorial(num1);
    int answer2 = factorial(num2);
    cout<<answer1<<endl<<answer2;

}
