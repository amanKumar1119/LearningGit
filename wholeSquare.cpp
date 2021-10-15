#include<iostream>
using namespace std;

int wholeSquare(int a, int b){
    return (a + b)*(a + b);
}

int main(){
    int a, b;
    cout<<"Enter a, b: ";
    cin>>a>>b;
    cout<<"\n(a + b)^2 is "<<wholeSquare(a, b)<<endl;
    return 0;
}