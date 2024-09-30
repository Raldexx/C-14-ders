#include <iostream>
using namespace std;

int main (){
   
 int Sayim;
 cout<<"Tekmi yoksa Ciftmi?\n";
 cout<<"Bir sayi girin:\n";
 cin>> Sayim;
 if (Sayim<0){
    cout<<"pozitif bir sayi giriniz\n";
 }
 else{
  if (Sayim % 2 == 0)
    cout<<"Bu cift bir sayi\n";
  else
    cout<<"Bu tek bir sayi\n";   
  }
    return 0;
}