#include<iostream>
using namespace std;
int main(){
    //Part A
    bool p = false, q = false, r = true;
    cout<<"\nValue of p==q==r is :- \n"<<(p==q==r);  // If same operators, then code compile from Left to Right
    // Solution Of p==q==r :-

    //(p==q)==(r) -> (0)==2 -> 0 
    // (p)==(q==r) -> (1)==(2==2) -> (1)==(1) -> 1

    // p is false and q is also false.      {Left ==> Right}
    // Therefore, p == q is true.
    // Now both (p == q) and q == r are true.
    // Therefore, the final output is also true or 1.

    int a = 1, b = 2, c = 2;
    cout<<"\n\nValue Of a==b==c is :-\n"<<(a==b==c);
    //But.....
    cout<<"\n\nValue Of c==b==a is :-\n"<<(c==b==a);
    //Why.....
    // Here (c==b) is true. Therefore (c==b) ===> 1 or true.
    // Now the value of both (c==b) and a is 1.
    // Therefore, the final answer is true or 1.
}

//Precedency Same then move Left to Right