#include<iostream>
using namespace std;
int main (){

int ed,ent,d1,d2;
ent=70;
cout<<"dime tu edad";
cin>>ed;

if(ed<=5){
cout<<"tiene un descuento de %60";
d1=ent*0.60;
cout<<"la entrada con el descuento seria "<<d1<<endl;
}
if(ed>=60){;
cout<<"tiene un descuento de %55";
d2=ent*0.55;
cout<<"la entrada con el descuento seria " <<d2<<endl;
}
return 0;

}