//? On every left shift of a number, it gets multiplied by 2 whereas on every right shift it gets divided by 2
//? Whenever er do << or >> always padding is with 0, provided done with positive number. But, with negative number it depend upon compiler.

#include <iostream>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int x = 3;
    cout<<"Left shift of x by 2 i.e. 3<<2 = "<<(3<<2)<<"\n";  //!If parenthesis will not be used it gives the output to be 32

    int z = 5;
    cout<<(z<<1)<<"\n";

    int a = 4;
    cout<<"Right shift of a by 3 = "<<(a>>3)<<"\n";



    return 0;
}