#include <windows.h>     
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void gotoxy(int x, int y){
 COORD coord;                         
 coord.X = x;                         
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main(int argc, char *argv[]){ 
 int pilih;
 char choose, choosed;
 string user, pass;
 int pilihan;
 int kode_pilihan;               
 int nama_belanjaan;
 int saldo=100000;
 int topup;
 int sayur;
 int buah;
 int rempah;
 int laukpauk;
 int sembako;
 int kode[20];
 struct{
 char nabar [20][20];
 int hrg[20],jmlh[20]; 
 }online[10];
 long int total_byra=0,total_byrb=0,total_byrc=0,total_byrd=0,total_byre=0;
 long int ttl[20];
 char kd[30];
 int voucher;
 ulang:
 int a,n;
 char mad;
   system("cls"); 
  
  
 	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t\t Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<"\t\t\t\t Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (user == "abiyyi" && pass == "54321")
			{
				cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Ussername dan password anda salah silahkan coba kembali \t\t\n";
				cout<<"\t\t\t Coba lagi ?[y/t]  : ";cin>>pilih;cout<<"\t\t\n";
					if (pilihan=='y' || pilihan=='Y')
		{system("cls");
			}
		}
	cout<<"-------------------------------------------------------------------------\n"<<endl;
 int m;
     int i;
     
     for(m=1;m<30;m++)

 
 mad= 'Y';          
 while (mad == 'y' || mad == 'Y'){ 
 

 gotoxy(5,12);cout<<"\t             PESAN SAYUR               \n";
 gotoxy(5,13);cout<<"\t     TOKO PENJUALAN BAHAN MAKANAN      \n";
 gotoxy(5,14);cout<<"\t   Pembelian bisa dalam dan luar kota \n";
 gotoxy(40,16);cout<<"\t saldo : Rp."<<saldo;
 gotoxy(5,16);cout<<"\t Apa yang ingin anda beli ? \n";
 gotoxy(6,17);cout<<" 1. sayur \n";
 gotoxy(6,18);cout<<" 2. buah \n";
 gotoxy(6,19);cout<<" 3. rempah \n"; 
 gotoxy(6,20);cout<<" 4. laukpauk \n"; 
 gotoxy(6,21);cout<<" 5. sembako \n"; 
 gotoxy(6,22);cout<<" 6. Top up saldo \n"; 
 cout<<"\n\nSilahkan Pilih Menu [1/2/3/4/5/6] : ";cin>>kode_pilihan; 
 
 switch (kode_pilihan){   
  case 1:
   system("cls");
   sayur;
   gotoxy(15,5) ;cout<<"===================================================================="<<endl;
   gotoxy(15,6) ;cout<<"|                        Daftar Harga SAYUR                        |"<<endl;
   gotoxy(15,7) ;cout<<"===================================================================="<<endl;
   gotoxy(15,8) ;cout<<"| Kd |      Jenis sayur    | stock sayur     |   Harga           |"<<endl;
   gotoxy(15,9) ;cout<<"--------------------------------------------------------------------"<<endl;
   gotoxy(15,10);cout<<"| 01 |    Bayam            |      12         | Rp.15000 per ikat |"<<endl;
   gotoxy(15,11);cout<<"| 02 |    Kangkung         |      10         | Rp.9500  per ikat |"<<endl;
   gotoxy(15,12);cout<<"| 03 |    Buncis           |      15         | Rp.5000  per ikat |"<<endl;
   gotoxy(15,13);cout<<"| 04 |    Kelor            |      15         | Rp.5000  per ikat |"<<endl; 
   gotoxy(15,14);cout<<"===================================================================="<<endl;
 
  
   cout<<"Masukkan Berapa jenis yang dibeli :";cin>>n;
   for(a=1;a<=n;a++){
   cout<<"sayur ke         - "<<a<<endl;
   cout<<"Kode             : ";cin>>kode[a];
   cout<<"jenis sayur      : ";cin>>online[a].nabar[a];
   {
   if(kode[a]==01)
    online[a].hrg[a]=15000;
   
   else if(kode[a]==02)
    online[a].hrg[a]=9500;
   
   else if(kode[a]==03)
    online[a].hrg[a]=5000;
   
   else if(kode[a]==04)
    online[a].hrg[a]=5000;
   
   else 
    online[a].hrg[a]=0;
  }
   cout<<"Harga      :Rp."<<online[a].hrg[a]<<endl;
  
   cout<<"Jumlah yang di Beli: ";cin>>online[a].jmlh[a];
   }
   
   system("cls");
 cout<<"`      pesansayur.id    ``\n";
 cout<<"`  SISTEM PENJUALAN ONLINE ``\n";
 cout<<"===============================================\n";
   gotoxy(5,3);cout<<"Daftar Belanja Anda";
// 567890123456789012345678901234567890123456789012345678901 (cara ini mempermudah menghitung garis tepian pada tabel menggunakan array)
gotoxy(5,5);cout<<"================================================================"<<endl;
gotoxy(5,6);cout<<"|No|   Jenis sayur   |   Harga   |     Jumlah Beli  |   Total   |"<<endl;
gotoxy(5,7);cout<<"================================================================"<<endl;
for(a=1;a<=n;a++)
{
 gotoxy(5,7+a) ;cout<<"|"; 
 gotoxy(6,7+a) ;cout<<a;
 gotoxy(8,7+a) ;cout<<"|";
 gotoxy(11,7+a);cout<<online[a].nabar[a];
 gotoxy(20,7+a);cout<<"|";
 gotoxy(33,7+a);cout<<online[a].hrg[a];
 gotoxy(41,7+a);cout<<"|";
 gotoxy(48,7+a);cout<<online[a].jmlh[a];
 gotoxy(55,7+a);cout<<"|";
 ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
 gotoxy(61,7+a);cout<<ttl[a];
 gotoxy(68,7+a);cout<<"|";
 total_byra=total_byra+ttl[a]; 
}
cout<<endl;
        cout<<"     ================================================================"<<endl;
cout<<endl;
cout<<"Jadi Total Belanja keseluruhan :Rp. "<<total_byra<<endl;
      cout<<"\t\t\t\t Masukkan kode voucher promo "<<endl;
   	cout<<"\t\t\t\t kode voucher promo  : ";cin>>pass;cout<<"\t\t\n";
			if (pass == "54321" )
			{
				cout<<"\t\t\t kode voucher promo anda berhasil digunakan \t\t\n";
			}
			else
			{
				cout<<"\t\t\t kode voucher anda salah silahkan coba kembali \t\t\n";
				cout<<"\t\t\t Coba lagi ?[y/t]  : ";cin>>pilih;cout<<"\t\t\n";
					if (pilihan=='y' || pilihan=='Y')
		{system("cls");
			}
		}
	cout<<"-------------------------------------------------------------------------\n"<<endl;
		
    voucher=2000;
    cout<<" voucher :Rp. "<<voucher<<endl;
    total_byra=total_byra-voucher; 
    gotoxy(5,19);
	cout<<"Jadi Total Belanja keseluruhan :Rp. "<<total_byra<<endl;
	saldo-=total_byra;
	cout<<"sisa saldo : "<<saldo;

            
            break;
           
           
 case 2:
   system("cls");
   buah;
   gotoxy(15,5) ;cout<<"===================================================================="<<endl;
   gotoxy(15,6) ;cout<<"|                        Daftar Harga BUAH                         |"<<endl;
   gotoxy(15,7) ;cout<<"===================================================================="<<endl;
   gotoxy(15,8) ;cout<<"| Kd |      Jenis buah    | stock buah      |   Harga           |"<<endl;
   gotoxy(15,9) ;cout<<"--------------------------------------------------------------------"<<endl;
   gotoxy(15,10);cout<<"| 01 |    apel            |      12         | Rp.10000 kg |"<<endl;
   gotoxy(15,11);cout<<"| 02 |    mangga          |      10         | Rp.9000  kg |"<<endl;
   gotoxy(15,12);cout<<"| 03 |    pepaya          |      15         | Rp.15000 kg |"<<endl;
   gotoxy(15,13);cout<<"| 04 |    melon           |      15         | Rp.15000 kg |"<<endl; 
   gotoxy(15,14);cout<<"===================================================================="<<endl;
 
  
   cout<<"Masukkan Berapa jenis yang dibeli :";cin>>n;
   for(a=1;a<=n;a++){
   cout<<"buah ke         - "<<a<<endl;
   cout<<"Kode             : ";cin>>kode[a];
   cout<<"jenis buah       : ";cin>>online[a].nabar[a];
   {
   if(kode[a]==01)
    online[a].hrg[a]=10000;
   
   else if(kode[a]==02)
    online[a].hrg[a]=9000;
   
   else if(kode[a]==03)
    online[a].hrg[a]=15000;
   
   else if(kode[a]==04)
    online[a].hrg[a]=15000;
   
   else 
    online[a].hrg[a]=0;
  }
   cout<<"Harga      :Rp."<<online[a].hrg[a]<<endl;
  
   cout<<"Jumlah yang di Beli: ";cin>>online[a].jmlh[a];
   }
   
   system("cls");
 cout<<"`      pesansayur.id    ``\n";
 cout<<"`  SISTEM PENJUALAN ONLINE ``\n";
 cout<<"===============================================\n";
   gotoxy(5,3);cout<<"Daftar Belanja Anda";
// 567890123456789012345678901234567890123456789012345678901 (cara ini mempermudah menghitung garis tepian pada tabel menggunakan array)
gotoxy(5,5);cout<<"================================================================"<<endl;
gotoxy(5,6);cout<<"|No|   Jenis buah   |   Harga   |     Jumlah Beli  |   Total   |"<<endl;
gotoxy(5,7);cout<<"================================================================"<<endl;
for(a=1;a<=n;a++)
{
 gotoxy(5,7+a) ;cout<<"|"; 
 gotoxy(6,7+a) ;cout<<a;
 gotoxy(8,7+a) ;cout<<"|";
 gotoxy(11,7+a);cout<<online[a].nabar[a];
 gotoxy(20,7+a);cout<<"|";
 gotoxy(33,7+a);cout<<online[a].hrg[a];
 gotoxy(41,7+a);cout<<"|";
 gotoxy(48,7+a);cout<<online[a].jmlh[a];
 gotoxy(55,7+a);cout<<"|";
 ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
 gotoxy(61,7+a);cout<<ttl[a];
 gotoxy(68,7+a);cout<<"|";
 total_byrb=total_byrb+ttl[a]; 
}
cout<<endl;
        cout<<"     ================================================================"<<endl;
cout<<endl;
   
    gotoxy(5,19);cout<<"Jadi Total Belanja keseluruhan :Rp. "<<total_byrb<<endl;
	saldo-=total_byrb;
	cout<<"sisa saldo : "<<saldo;
            
            break;
 case 3:
   system("cls");
   rempah;
   gotoxy(15,5) ;cout<<"===================================================================="<<endl;
   gotoxy(15,6) ;cout<<"|                        Daftar Harga REMPAH                       |"<<endl;
   gotoxy(15,7) ;cout<<"===================================================================="<<endl;
   gotoxy(15,8) ;cout<<"| Kd |      Jenis REMPAH  | stock REMPAH      |   Harga           |"<<endl;
   gotoxy(15,9) ;cout<<"--------------------------------------------------------------------"<<endl;
   gotoxy(15,10);cout<<"| 01 |    jahe            |      10         | Rp.1000 /biji |"<<endl;
   gotoxy(15,11);cout<<"| 02 |    kunyit          |      10         | Rp.2000 /biji |"<<endl;
   gotoxy(15,12);cout<<"| 03 |    bawang merah    |      10         | Rp.1500 /biji |"<<endl;
   gotoxy(15,13);cout<<"| 04 |    bawang putih    |      10         | Rp.1500 /biji |"<<endl; 
   gotoxy(15,14);cout<<"===================================================================="<<endl;
 
  
   cout<<"Masukkan Berapa jenis yang dibeli :";cin>>n;
   for(a=1;a<=n;a++){
   cout<<"rempah ke         - "<<a<<endl;
   cout<<"Kode             : ";cin>>kode[a];
   cout<<"jenis rempah     : ";cin>>online[a].nabar[a];
   {
   if(kode[a]==01)
    online[a].hrg[a]=1000;
   
   else if(kode[a]==02)
    online[a].hrg[a]=2000;
   
   else if(kode[a]==03)
    online[a].hrg[a]=1500;
   
   else if(kode[a]==04)
    online[a].hrg[a]=1500;
   
   else 
    online[a].hrg[a]=0;
  }
   cout<<"Harga      :Rp."<<online[a].hrg[a]<<endl;
  
   cout<<"Jumlah yang di Beli: ";cin>>online[a].jmlh[a];
   }
   
   system("cls");
 cout<<"`      pesansayur.id    ``\n";
 cout<<"`  SISTEM PENJUALAN ONLINE ``\n";
 cout<<"===============================================\n";
   gotoxy(5,3);cout<<"Daftar Belanja Anda";
// 567890123456789012345678901234567890123456789012345678901 (cara ini mempermudah menghitung garis tepian pada tabel menggunakan array)
gotoxy(5,5);cout<<"================================================================"<<endl;
gotoxy(5,6);cout<<"|No|   Jenis rempah   |   Harga   |     Jumlah Beli  |   Total   |"<<endl;
gotoxy(5,7);cout<<"================================================================"<<endl;
for(a=1;a<=n;a++)
{
 gotoxy(5,7+a) ;cout<<"|"; 
 gotoxy(6,7+a) ;cout<<a;
 gotoxy(8,7+a) ;cout<<"|";
 gotoxy(11,7+a);cout<<online[a].nabar[a];
 gotoxy(20,7+a);cout<<"|";
 gotoxy(33,7+a);cout<<online[a].hrg[a];
 gotoxy(41,7+a);cout<<"|";
 gotoxy(48,7+a);cout<<online[a].jmlh[a];
 gotoxy(55,7+a);cout<<"|";
 ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
 gotoxy(61,7+a);cout<<ttl[a];
 gotoxy(68,7+a);cout<<"|";
 total_byrc=total_byrc+ttl[a]; 
}
cout<<endl;
        cout<<"     ================================================================"<<endl;
cout<<endl;
   
    gotoxy(5,19);cout<<"Jadi Total Belanja keseluruhan :Rp. "<<total_byrc<<endl;
    saldo-=total_byrc;
	cout<<"sisa saldo : "<<saldo;
            break;
 case 4:
   system("cls");
   laukpauk;
   gotoxy(15,5) ;cout<<"===================================================================="<<endl;
   gotoxy(15,6) ;cout<<"|                        Daftar Harga LAUKPAUK                      |"<<endl;
   gotoxy(15,7) ;cout<<"===================================================================="<<endl;
   gotoxy(15,8) ;cout<<"| Kd |   Jenis laukpauk   | stock laukpauk  |   Harga             |"<<endl;
   gotoxy(15,9) ;cout<<"--------------------------------------------------------------------"<<endl;
   gotoxy(15,10);cout<<"| 01 |    ayam            |      12         | Rp.20000 /biji         |"<<endl;
   gotoxy(15,11);cout<<"| 02 |    ikan            |      10         | Rp.15000 /biji         |"<<endl;
   gotoxy(15,12);cout<<"| 03 |    tempe           |      15         | Rp.5000  /biji         |"<<endl;
   gotoxy(15,13);cout<<"| 04 |    tahu            |      15         | Rp.5000  /biji         |"<<endl; 
   gotoxy(15,14);cout<<"===================================================================="<<endl;
 
  
   cout<<"Masukkan Berapa jenis yang dibeli :";cin>>n;
   for(a=1;a<=n;a++){
   cout<<"laukpauk ke          - "<<a<<endl;
   cout<<"Kode                 : ";cin>>kode[a];
   cout<<"jenis laukpauk       : ";cin>>online[a].nabar[a];
   {
   if(kode[a]==01)
    online[a].hrg[a]=20000;
   
   else if(kode[a]==02)
    online[a].hrg[a]=15000;
   
   else if(kode[a]==03)
    online[a].hrg[a]=5000;
   
   else if(kode[a]==04)
    online[a].hrg[a]=5000;
   
   else 
    online[a].hrg[a]=0;
  }
   cout<<"Harga      :Rp."<<online[a].hrg[a]<<endl;
  
   cout<<"Jumlah yang di Beli: ";cin>>online[a].jmlh[a];
   }
   
   system("cls");
 cout<<"`      pesansayur.id    ``\n";
 cout<<"`  SISTEM PENJUALAN ONLINE ``\n";
 cout<<"===============================================\n";
   gotoxy(5,3);cout<<"Daftar Belanja Anda";
// 567890123456789012345678901234567890123456789012345678901 (cara ini mempermudah menghitung garis tepian pada tabel menggunakan array)
gotoxy(5,5);cout<<"================================================================"<<endl;
gotoxy(5,6);cout<<"|No|   Jenis laukpauk   |   Harga   |     Jumlah Beli  |   Total   |"<<endl;
gotoxy(5,7);cout<<"================================================================"<<endl;
for(a=1;a<=n;a++)
{
 gotoxy(5,7+a) ;cout<<"|"; // dihitung dari garis terakhir ditabel
 gotoxy(6,7+a) ;cout<<a;
 gotoxy(8,7+a) ;cout<<"|";
 gotoxy(11,7+a);cout<<online[a].nabar[a];
 gotoxy(20,7+a);cout<<"|";
 gotoxy(33,7+a);cout<<online[a].hrg[a];
 gotoxy(41,7+a);cout<<"|";
 gotoxy(48,7+a);cout<<online[a].jmlh[a];
 gotoxy(55,7+a);cout<<"|";
 ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
 gotoxy(61,7+a);cout<<ttl[a];
 gotoxy(68,7+a);cout<<"|";
 total_byrd=total_byrd+ttl[a]; 
}
cout<<endl;
        cout<<"     ================================================================"<<endl;
cout<<endl;
   
    gotoxy(5,19);cout<<"Jadi Total Belanja keseluruhan :Rp. "<<total_byrd<<endl;
    saldo-=total_byrd;
	cout<<"sisa saldo : "<<saldo;
            
            break;

 case 5:
   system("cls");
   sembako;
   gotoxy(15,5) ;cout<<"===================================================================="<<endl;
   gotoxy(15,6) ;cout<<"|                        Daftar Harga SEMBAKO                      |"<<endl;
   gotoxy(15,7) ;cout<<"===================================================================="<<endl;
   gotoxy(15,8) ;cout<<"| Kd |   Jenis sembako    | stock sembako    |   Harga             |"<<endl;
   gotoxy(15,9) ;cout<<"--------------------------------------------------------------------"<<endl;
   gotoxy(15,10);cout<<"| 01 |    beras           |      12         | Rp.10000  /kg         |"<<endl;
   gotoxy(15,11);cout<<"| 02 |    ketan           |      10         | Rp.12000  /kg         |"<<endl;
   gotoxy(15,12);cout<<"| 03 |    ketan hitam     |      15         | Rp.13000  /kg        |"<<endl;
   gotoxy(15,13);cout<<"| 04 |    beras merah     |      15         | Rp.20000  /kg         |"<<endl; 
   gotoxy(15,14);cout<<"===================================================================="<<endl;
 
  
   cout<<"Masukkan Berapa jenis yang dibeli :";cin>>n;
   for(a=1;a<=n;a++){
   cout<<"beras ke             - "<<a<<endl;
   cout<<"Kode                 : ";cin>>kode[a];
   cout<<"jenis sembako        : ";cin>>online[a].nabar[a];
   {
   if(kode[a]==01)
    online[a].hrg[a]=10000;
   
   else if(kode[a]==02)
    online[a].hrg[a]=12000;
   
   else if(kode[a]==03)
    online[a].hrg[a]=13000;
   
   else if(kode[a]==04)
    online[a].hrg[a]=20000;
   
   else 
    online[a].hrg[a]=0;
  }
   cout<<"Harga      :Rp."<<online[a].hrg[a]<<endl;
  
   cout<<"Jumlah yang di Beli: ";cin>>online[a].jmlh[a];
   }
   
   system("cls");
 cout<<"`      pesansayur.id    ``\n";
 cout<<"`  SISTEM PENJUALAN ONLINE ``\n";
 cout<<"===============================================\n";
   gotoxy(5,3);cout<<"Daftar Belanja Anda";
// 567890123456789012345678901234567890123456789012345678901 (cara ini mempermudah menghitung garis tepian pada tabel menggunakan array)
gotoxy(5,5);cout<<"================================================================"<<endl;
gotoxy(5,6);cout<<"|No|   Jenis sembako   |   Harga   |     Jumlah Beli  |   Total   |"<<endl;
gotoxy(5,7);cout<<"================================================================"<<endl;
for(a=1;a<=n;a++)
{
 gotoxy(5,7+a) ;cout<<"|"; // dihitung dari garis terakhir ditabel
 gotoxy(6,7+a) ;cout<<a;
 gotoxy(8,7+a) ;cout<<"|";
 gotoxy(11,7+a);cout<<online[a].nabar[a];
 gotoxy(20,7+a);cout<<"|";
 gotoxy(33,7+a);cout<<online[a].hrg[a];
 gotoxy(41,7+a);cout<<"|";
 gotoxy(48,7+a);cout<<online[a].jmlh[a];
 gotoxy(55,7+a);cout<<"|";
 ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
 gotoxy(61,7+a);cout<<ttl[a];
 gotoxy(68,7+a);cout<<"|";
 total_byre=total_byre+ttl[a]; 
}
cout<<endl;
        cout<<"     ================================================================"<<endl;
cout<<endl;
   
    gotoxy(5,19);cout<<"Jadi Total Belanja keseluruhan :Rp. "<<total_byre<<endl;
   	saldo-=total_byre;
	cout<<"sisa saldo : "<<saldo;
            break;
case 6: 
		system("cls");
		cout <<"\nTop Up Saldo pesansayur.id...";
		cout <<"\n===========================";
		cout <<"\n\nMasukkan Nominal : Rp. ";cin>>topup;
		saldo += topup;
		cout <<"\n===========================";
		cout <<"\nSaldo Anda Saat Ini = Rp. "<<saldo;
		cout <<"\nTerima Kasih Telah Melakukan Top Up pesansayur,id.";
	cout <<"\n\n kembali ke menu awal (Y): ";cin>>mad;
		if(mad=='Y'||mad=='y'){
		}
		goto ulang;
		break;           
	}
			
				cout<<"\n=================================\n";
	cout<<"\nLanjutkan belanja anda?(Y/T)\t";
	cin>>mad;
	
	cout<<"\n======================               pesansayur. id                 ==================================\n";
	cout<<"\n======================  terimakasih telah memesan di aplikasi kami  ==================================\n";
	if(mad=='Y'||mad=='y'){
		
		goto ulang;
	}else if(mad=='T'||mad=='t'){
	
	}
	 
    for (i=5;i<31;i++)

 getch();
}
}
