#include<iostream>
using namespace std;
bool PrimeNumber(int num){
    if(num <= 1)
        return 0;
    
    int i = 2;
    while(i<num) {
        if(i%num==0)
            return 0;
        i++;    
    }

    return 1;
}

int main() {
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    if(PrimeNumber(num) == 0) {
        cout<<"Number is Not Prime";
    } else {
        cout<<"Number is Prime";
    }

    return 0;
}
