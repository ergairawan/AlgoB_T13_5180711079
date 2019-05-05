#include <iostream>
#include <math.h>
using namespace::std;

string nama,member,cari,namabarang;
string nomember[5]={"A001","A002","A003","A007","A008"};
string namamember[5]={"bayu","irvan","susiati","diana","roni"};
int nomeridentitas,ketemu,a[20],temp,jum,harga,jumlah,total,diskon,jumlahbarang,totalbelanjaan;


main ()
{
    cout<<"-------- Selamat Datang Di MiniMarket Kulil----------";
    cout<<"\nApakah anda member toko kami? (ya/tidak) = ";
    cin>>member;
    if (member=="ya")
    {

       cout<<"\nInput Nomor Idenditas AAnda = ";
       cin>>cari;
       for (int i=0;i<5;i++)
       {
           if (cari == nomember[i])
            {
        cout<<"Anda member\n";
        cout<<"\nNomer identitas = "<<cari;
        cout<<"\nNama = "<<namamember[i];
            }
        }
    cout<<"anda bukan member toko kami";

    if (member=="tidak")
    {
        cout<<"\nAnda bukan member";
        cout<<"\nSilahkan isi nama anda = ";
        cin>>nama;
    }

    cout<<"\nMasukkan jumlah barang belanjaan anda = ";
    cin>>jum;
    for (int q=0;q<jum;q++)
    {
        cout<<"\nBarang ke - "<<q+1;
        cout<<"\nNama Barang    = ";
        cin>>namabarang;
        cout<<"Harga satuannya adalah = ";
        cin>>harga;
        cout<<"Jumlah barang  = ";
        cin>>jumlahbarang;
        jumlah=harga*jumlahbarang;
        total=total+jumlah;
    }

    cout<<"\nTotal semuanya     = Rp. "<<total;
    diskon=total*5/100;
    totalbelanjaan=total-diskon;
    cout<<"\nDiskonnya adalah   = Rp. "<<diskon;
    cout<<"\nTotal belanjaan anda  = Rp. "<<totalbelanjaan<<endl;
}}
