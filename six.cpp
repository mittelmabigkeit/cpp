#include<iostream>
using namespace std;

int myfunc(int a,int b) {
    int sum;
    sum=a+b;
    return sum;
}

int main() {
    int a,b,sum;
    cout<<"Write first number: "<<endl;
    cin>>a;
    cout<<"Write second number: "<<endl;
    cin>>b;
    sum = myfunc(a,b);
    cout<<sum<<endl;    
    system ("pause");
    return 0;
}
