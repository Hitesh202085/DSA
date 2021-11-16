#include<iostream>
using namespace std;
void callByRef(int *, int*);

int main(){
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"The value of a and b before swapping: "<<endl;
    cout<<"a = "<<a<<", b = "<<b<<endl;
    cout<<"The value of a and b after swapping: "<<endl;
    callByRef(&a, &b);
    cout<<"a = "<<a<<", b = "<<b<<endl;
    return 0;
}

void callByRef(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}