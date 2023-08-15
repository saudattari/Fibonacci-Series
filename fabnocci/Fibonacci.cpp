#include <iostream>
using namespace std;


void Fibonacci(int num, int a, int b){
    int ans = 0;
    for(int i=0; i<num; i++){
        cout<<" "<<a<<" ";
        ans = a + b;
        a = b;
        b = ans;
    }
}

int main(){
    // Print Fibonacci series upto nth term
    int num=0;
    int a=0, b=1, ans=0;
    cout<<"How many numbers you want to print in Fibonacci Series: ";
    cin>>num;
    Fibonacci(num, a, b);

    return 0 ;
}