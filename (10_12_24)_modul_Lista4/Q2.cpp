//maior palavra

#include <iostream>
using namespace std;

string mplv(string a, string b){
    if (sizeof(a) > sizeof(b))
        return a;

    return b;
}

int main() {
    string pa, pb;

    cout<<"Digite palavras: "<<endl;
    cin>>pa;
    cin>>pb;

    cout<<"A maior palavra e: "<<mplv(pa, pb);

    return 0;
}
