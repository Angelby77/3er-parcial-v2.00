#include <iostream>
using namespace std;

int main() {
  int n, me, ma;
  int i;
  int su=0;
  me=0;
  ma=0;

cout<<"dime 10 numeros";
cin>>n;
me=n;
ma=n;
su+=n;

for(int i=1;i<10;i++){
cin>>n;
su+=n;

if(nu<me){;
me=n;
}
if(n>ma){
ma=n;
}
}
cout<<"el numero mayor es"<<ma<<endl;
cout<<"el numero menor es"<<me<<endl;
cout<<"la suma de los numeros es"<<su<<endl;

return 0;
}
