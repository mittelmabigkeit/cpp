#include<iostream>
using namespace std;

int myfunc(int a,int b) {
    int umn;
    umn=a*b;
    return umn;
}

int main() {
    int a,b,c,umn;
    cout<<"Write first number: "<<endl;
    cin>>a;
    cout<<"Write second number: "<<endl;
    cin>>b;
    cout<<"Write third number: "<<endl;
    cin>>c;
    umn = myfunc(a,b);
    cout<<umn<<endl;
    cout<<c<<endl;    
    system ("pause");
    return 0;
}


