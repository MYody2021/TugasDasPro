#include <iostream>

using namespace std;

int main(){

  string username, password;
  cout<<"================================"<<endl;
  cout<<" Penghitung Volume Bangun Ruang"<<endl;
  cout<<"================================"<<endl;

  string user = "111";
  string pw = "121";


  awal : cout<<endl;
  cout<<"          Username : "; cin>>username;
  cout<<"          Password : "; cin>>password;

  if (username == user && password == pw){
    cout<<endl;
    cout<<"================================"<<endl;
    cout<<"         Selamat Datang"<<endl;
    cout<<"================================"<<endl;

  } else {
    cout<<endl;
    cout<<"  Username atau Password salah!"<<endl;
    goto awal;
  }

  char ulang;
  int n;

  do
  {
  cout<<"\n";
  cout<<"       1. Volume Kubus  < "<<endl;
  cout<<"       2. Volume Balok  < "<<endl;
  cout<<"       3. Volume Tabung < "<<endl;
  cout<<"       4. Exit Program  < "<<endl;
  cout<<endl;
  cout<<"          Pilih Menu : "; cin>>n;
  cout<<endl;

  switch (n){
    case 1 :

    double s, volume;

    cout<<"================================"<<endl;
    cout<<"         VOLUME KUBUS"<<endl;
    cout<<"================================"<<endl;
    cout<<endl;
    cout<<"        Masukan Sisi : "; cin>>s;
    volume = s*s*s;
    cout<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"     Volume kubus Adalah "<<volume<<endl;
    cout<<"--------------------------------"<<endl;
    break;

    case 2 :

    double p, l, t, volume2;

    cout<<"================================"<<endl;
    cout<<"         VOLUME BALOK"<<endl;
    cout<<"================================"<<endl;
    cout<<endl;
    cout<<"       Masukan Panjang : "; cin>>p;
    cout<<"       Masukan Lebar   : "; cin>>l;
    cout<<"       Masukan Tinggi  : "; cin>>t;
    volume2 = p * l * t;
    cout<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"     Volume balok adalah "<<volume2<<endl;
    cout<<"--------------------------------"<<endl;
    break;

    case 3 :

    double r, t2, volume3;
    double Pi;
    Pi = double(22)/7;

    cout<<"================================"<<endl;
    cout<<"          VOLUME TABUNG"<<endl;
    cout<<"================================"<<endl;
    cout<<endl;
    cout<<"       Masukan Jari-Jari : "; cin>>r;
    cout<<"       Masukan Tinggi    : "; cin>>t2;
    volume3 = Pi * r * r * t2;
    cout<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"  Volume tabung adalah "<<volume3<<endl;
    cout<<"-------------------------------"<<endl;
    break;

    case 4 :
    cout<<"          Terima Kasih!"<<endl;
    exit(0);

    default :
    cout<<"      Menu tidak tersedia!"<<endl;
    cout<<"      ^^^^^^^^^^^^^^^^^^^^"<<endl;
  }
  cout<<endl;
  cout<<"  Ingin coba yang lain? (y/n) "; cin>>ulang;
  cout<<endl;
}
  while (ulang != 'n');
  cout<<"         Terima Kasih!"<<endl;

  cin.get();
  return 0;
}
