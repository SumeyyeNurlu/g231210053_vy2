
#include <iostream> //ekrana yazdırmak için
#include <iomanip>
#include <fstream>//dosya işlemleri
using namespace std; 

// cout<<(int)adres%10000; tarzı (adresi yazarken 4 karakter)

int boslukMiktari=4;

void cizgiYaz()
{
    for( int i=0;i<boslukMiktari;i++)
    cout<<" ";
    cout<<"--------";
}

void isaretYaz(int indeks)
{
    if(indeks!=0){
       for(int i=0;i<indeks;i++)
       {
         for( int j=0;j<boslukMiktari;j++)
        cout<<" "; 
        cout<<"        ";
       }
       
    } 
    for( int i=0;i<boslukMiktari;i++)
        cout<<" ";
    cout<<"^^^^^^^^";
}

void degerYaz (int deger)
{
    for (int i=0;i<boslukMiktari;i++)
    cout<<" ";
    cout<<"|";
    cout<<setw(6)<<deger;
    cout<<"|";

}

void satirCiz()
{
for(int i=0; i<10;i++)
    cizgiYaz();
    
}

void bagliListeYaz()
{
    satirCiz();
    cout<<endl;

    for (int i=100000;i<100010; i++)
    degerYaz(i);
    cout<<endl;
    satirCiz();

    cout<<endl;
    for (int i=0;i<10; i++)
    degerYaz(i);
    cout<<endl;
    satirCiz();

    cout<<endl;
    for (int i=100001;i<100011; i++)
    degerYaz(i);
    cout<<endl;
    satirCiz();
}

int main() 
{  


//dosya açma işlemleri
ifstream dosya("agaclar.txt");
if(!dosya){
    cout<<"Dosya bulunamadi"<<endl;
    return 1; //dosya açılamazsa progra sonlandırlıacak
}

string satir;
while(getline(satir)){
    for (char karakter:satir){
        cout << "Karakter ekleniyor: " << karakter << endl;
    }
}



dosya.close();
return 0;




    int indeks=0;

  while (true){
    system("cls");
    bagliListeYaz();
    cout<<endl;
    isaretYaz(indeks);
    cout<<endl;

    int secim =cin.get();

    if (secim=='x')
        break;

    if(secim=='a')
        indeks--;
    else if (secim=='d')
        indeks++;

  }










  
 }