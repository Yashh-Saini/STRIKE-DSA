#include<iostream>
using namespace std;

int main() {

    cout<<"Approach - 1"<<endl;

    for(int i = 2; i <= 10; i= i+2){
        cout<<i<<" ";
    }


    cout<<endl<<"Approach - 2"<<endl;

    for(int i = 1; i <= 10; i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
}
