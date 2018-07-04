#include <iostream>
using namespace std;
int main (int argc,char *argv[]){
double notas [5];
for (int i=0; i<5;i++){
cout<<"ingrese la nota :"<<i+1<<":";cin>>notas;
}
for (int i=1;i>=0;i--){
cout<<endl<<"las notas "<<i+1<<"son: "<<notas[i]<<endl;
}
return 0;
}
