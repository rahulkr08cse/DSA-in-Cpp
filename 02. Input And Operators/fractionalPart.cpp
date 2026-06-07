#include<iostream>
using namespace std;
int main(){
    // Question
    // Print Fractional Part Of A Float Input
    //                                   _____Point To Note_____ :-
    //                                  { .....VERY IMPORTANT..... }
    // Fractional Part Of A Number x ==>>[ x - Greatest Integer Function Of x ] Or {x} = x - [x]
    // Therefore, The Fractional Part Of -1.3 => -1.3 -(-2) ==> -1.3 + 2
    // ==> 0.7  Answer.
    float a;
    cout<<"Enter the value of float:-\n";
    cin>>a;
    if((int)a>0) cout<<"The Fractional Part of Given float is: "<<a-(int)a;
    else cout<<"The Fractional part of Given Float is: "<<a-((int)a - 1);

}