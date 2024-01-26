//including iostream or other important files.
// iostream is the header file for taking input and printing output. 
#include<iostream>
using namespace std;
// you can also use std::cout<< instead of namespace std definition

// Main shows where the code is starting from
int main(){

    //cout is used to display output mentioned in quotation marks.
    int a;
    cout<< "Size of a is " << sizeof(a) << "." <<endl;

    float b;
    cout << "size of b is " << sizeof(b) << "." <<endl;

    bool c;
    cout<<"size of c is "<< sizeof(c) <<  "." << endl;

    short int si;
    long int li;
    cout << "size of si is "<<sizeof(si)<<"."<< endl;
    cout<<"size of li is "<<sizeof(li)<<"."<<endl;

    int amount1;
    // cout << "Please enter the amount: ";
    cin >> amount1;

    int amount2;
    // cout << "Please enter the amount: ";
    cin >> amount2;

    int sum; 
    sum = amount1 + amount2;

    cout<< sum ;

    // Return 0 is used to represent exit function. 
    return 0;
}
