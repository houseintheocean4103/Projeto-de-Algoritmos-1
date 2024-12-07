#include <iostream>

using namespace std;

int main(){
    
    float mp, pri, seg, ter, p1, p2, p3;
    cout<<"Digite a primeira nota e seu peso: "<<endl;
    cin>>pri>>p1;
    cout<<"Digite a segunda nota e seu peso: "<<endl;
    cin>>seg>>p2;
    cout<<"Digite a terceira nota e seu peso: "<<endl;
    cin>>ter>>p3;

    mp = ((pri*p1) + (seg*p2) + (ter*p3))/(p1 + p2 + p3);

    cout<<"A media ponderada e: "<<mp;

}