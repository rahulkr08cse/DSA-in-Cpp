#include<iostream>
using namespace std;
int main(){
    bool x = true; //1
    bool y =false; //0
    bool z = 5; //1
    bool i = -8; //1
    bool j = 0;

    cout<<x<<" "<<y<<" "<<z<<" "<<i<<" "<<j<<" "<<endl;
    
    cout<<"is 5 > 7 = "<<bool(5>7)<<endl;

}

//Boolean print true as 1 and false as 0.
//Boolean data type give 1 for every non zero integer and 0 for zero.
//Used for checking comparision