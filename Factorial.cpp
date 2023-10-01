#include <iostream>
using namespace std;

// Use for find factorial of small values (factorial of 20 and below)

long long Factorial(int n){
    if (n == 1 || n == 0){    //Base case
        return 1;
    }
    else{   //Recursive case
        return n*Factorial(n-1);
    }
}

int main(){
    char name[50];
    int f;
    cout << "Hello, what should I call you? " ;
    cin.getline(name, 50);
    cout << name << " ,the factorial of which number do you want to calculate? ";
    cin >> f;
    court << f << "factorial is " << Factorial(f) << "."<<  endl;
}
