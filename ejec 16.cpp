#include<iostream>
using namespace std;
int main(){

int n,m;

cout<<"ingresa 5 numeros enteros";
cin>>n;

for(int i=1;i<5;i++)
{
        cin>>n;
        if(n<m)
        {
                m=n;
        }
}
cout<<"tu numero menor es"<<m<<endl;

return 0;
}