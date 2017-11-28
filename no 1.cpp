#include <iostream>
using namespace std;
int main()
{
    int nilai[10],i,min,maks;
    
    for(i=0;i<=9;i++){
        cout<<"Masukkan nilai ke-"<<i+1<<":";
        cin>>nilai[i];
    }
    
   min = nilai[0];
   maks = nilai[0];
   for(i=0;i<=9;i++){
        if(nilai[i] < min){
            min = nilai[i];
   }
        else if(nilai[i] > maks){
            maks = nilai[i];
   }
   }
    cout<<"Nilai minimum adalah : "<<min<<endl;
    cout<<"Nilai maksimum adalah : "<<maks<<endl;
   
    return 0;
}
