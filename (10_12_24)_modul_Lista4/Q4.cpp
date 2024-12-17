//conversao celsius-fahrenheit

#include <iostream>
using namespace std;

float ctof(float c){
    float f;

    f = (c*1.8) + 32;

    return f;
}

float ftoc(float f){
    float c;

    c = (f - 32)/1.8;

    return c;
}

int main(){
    float t;
    char uni;

    cout<<"Digite a temperatura: "<<endl;
    cin>>t;

    cout<<"Digite para qual unidade converter('C' ou 'F')"<<endl;
    cin>>uni;

    if((uni != 'C') and (uni != 'F'))
        cout<<"-1"<<endl;

    if(uni == 'C')
        cout<<"O resultado e: "<<ftoc(t);

    if(uni == 'F')
        cout<<"O resultado e: "<<ctof(t);   

    return 0;     

}
