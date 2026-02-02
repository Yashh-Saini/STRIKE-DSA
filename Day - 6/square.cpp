#include<iostream>
using namespace std;

// Function Declaration
int square(int n);

int main() {
    int num;
    cout<<"Enter the Number: ";
    cin>>num;

    cout<<square(num)<<endl;
}
// Function Define
int square(int n) {
    return n*n;
}
