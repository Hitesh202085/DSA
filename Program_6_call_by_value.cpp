#include<iostream>
using namespace std;
void callByValue(int, int);

int main (){
    int a,b;
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
    cout<<"The value of a and b before swapping: "<<endl;
    cout<<"a = "<<a<<", b = "<<b<<endl;
    cout<<"The value of a and b after swapping "<<endl;
    callByValue(a,b);

    return 0;
}

void callByValue(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"a = "<<a<<", b =  "<<b<<endl;
}