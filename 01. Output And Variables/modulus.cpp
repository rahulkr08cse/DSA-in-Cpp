#include <iostream>
using namespace std;
int main(){
    cout<<"The value of 25 % 7 is "<<25 % 7<<endl; //4
    cout<<"The value of 25 % (-7) is "<<25 % (-7)<<endl; //4
    cout<<"The value of (-25) % 7 is "<<(-25) % 7<<endl; //-4
    cout<<"The value of (-25) % (-7) is "<<(-25) % (-7)<<endl; //-4
    cout<<"The Value Of 23 % 76 is "<<23 % 76<<endl; //23
}

/* 

PROPERTIES OF MODULUS

  i.   A % (-B) = A % B
 ii. (-A) % B = -(A % B)
iii. (-A) % (-B) = (-A) % B = -(A % B)
 iv.   A < B then A % B = A
  v.   A % A = 0

  The Modulus Operator Works Only For Integer Datatype.

*/