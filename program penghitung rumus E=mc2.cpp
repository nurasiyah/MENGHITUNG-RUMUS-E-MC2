#include<iostream>
using namespace std;
int main()
{
    int E,m,c;
    cout<<"PROGRAM PENGHITUNG RUMUS"<<endl;
    cout<<"========================"<<endl;
    cout<<"Masukkan nilai massa           =";
    cin>>m;
    cout<<"Masukkan nilai kekuatan cahaya =";
    cin>>c;
    E = m*c*c;
    cout<<"Energinya adalah               ="<<E;
    return 0;
}
