#include<iostream>
using namespace std;

int wholeSquare(int a, int b){
    return (a + b)*(a + b);
}

int main(){
    int a, b;
    cout<<"Enter a, b: ";
    cin>>a>>b;
    cout<<"(a + b)^2 is "<<wholeSquare(a, b);
    return 0;
}