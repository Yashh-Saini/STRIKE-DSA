#include<iostream>
using namespace std;

void findGrade (int marks) {
    if(marks>90) {
        cout<<"Grade: A+"<<endl;
    } else if(marks>80) {
        cout<<"Grade: A"<<endl;
    } else if(marks>70) {
        cout<<"Grade: B+"<<endl;
    } else if(marks>60) {
        cout<<"Grade: B"<<endl;
    } else {
        cout<<"Grade: C"<<endl;
    }
}

int main() {
    int std1, std2;
    cout<<"Enter the Marks of Student1: ";
    cin>>std1;
    cout<<"Enter the Marks of Student2: ";
    cin>>std2;

    findGrade(std1);
    findGrade(std2);
}
