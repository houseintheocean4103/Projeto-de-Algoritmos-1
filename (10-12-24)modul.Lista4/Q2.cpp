#include <iostream>
using namespace std;

string mplv(string a, string b){
    if (size(a) > size(b))
        return a;

    return b;
}

int main() {
    string pa, pb;

    cout<<"Digite palavras: "<<endl;
    cin>>pa;
    cin>>pb;

    cout<<"A maior palavra é: "<<mplv(pa, pb);

    return 0;
}
