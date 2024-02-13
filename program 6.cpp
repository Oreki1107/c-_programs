#include <iostream>
using namespace std;
int main() {
    char ch;
    cout  <<"enter any character:";
    cin  >>ch;
    ch=tolower(ch);
    if ((ch >='a'  &&  ch<='z') && (ch =='a' || ch=='e' || ch=='i'|| ch=='o' || ch=='u'))
    {
        cout <<"entered character is vowel";
    }
    else if(ch >='a' && ch <='z')
    {
        cout <<"entered character is consonent";
    }
    else
    {
        cout <<"invalide input";
    }
}
