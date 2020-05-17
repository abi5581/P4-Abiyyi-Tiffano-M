#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	int i, nilai, benar=0, salah=0;
	string nama, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang : 
	cout<<"                                              KUIS COVID-19\n";
	cout<<"                             __________________________________________________\n";
	cout<<"                             Silahkan Login Menggunakan Password Yang Anda Buat\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t\t Masukkan Nama peserta      : ";cin>>nama;cout<<"\n";
	cout<<"\t\t\t\t Masukkan Password kuis     : ";cin>>pass;cout<<"\t\t\n";
			if (nama == "abiyyi" && pass == "F1B019003")
			{
				cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Nama peserta dan password kuis anda salah silahkan coba kembali \t\t\n";
				cout<<"\t\t\t Coba lagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	{
    ulangjwb :
	cout<<"Pilih Salah Satu Jawaban Yang Tepat Tentang COVID-19, Antara a, b, c, atau d!\n";
	cout<<"_____________________________________________________________________________\n";
	cout<<"1. Apakah penyebab umum bisa tertularnya COVID-19 ??\n";
	string pilgan1[50]={"a. Kontak fisik dengan orang sekitar","b. diam dirumah","c. mencuci tangan setiap hari","d. selalu memakai masker jika ingin bepergian"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
    cout<<"___________________________________________________________________________\n";        
    cout<<"2. Apa saja Gejala umum jika seseorang terjangkit COVID-19??\n";
    string pilgan2[50]={"a. Hipertensi","b. pilek,batuk,sesak napas,dan demam","c. kolesterol","d. bernanah jika ada luka"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
    cout<<"___________________________________________________________________________\n";        
	cout<<"3. Negara manakah yang memiliki jumlah terinfeksi COVID-19 terbanyak saat ini??\n";
	string pilgan3[50]={"a. Italia","b. Indonesia","c. Singapura","d. Amerika"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
	cout<<"___________________________________________________________________________\n";				
	cout<<"4. Apa dampak negatif COVID-19 ini bagi negara dan seluruh warganya??\n";
	string pilgan4[50]={"a. Angka pengangguran menurun","b. lingkungan jadi lebih bersih","c. Banyak perusahaan di bidang pariwisata yang penghasilannya menurun drastis",
	"d. Polusi semakin menurun "};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
    cout<<"___________________________________________________________________________\n";       
    cout<<"5. Apa yang anda harus lakukan jika anda memiliki gejala COVID-19 ringan,Kecuali??\n";
    string pilgan5[50]={"a. Segera mengurung diri/mengisolasi diri ","b. Segera test kesehatan menggunakan Rapid test dan Swab test","c. Jangan berkontak fisik dengan orang lain",
	"d. Keluar rumah dan tidak menggunakan masker"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
	cout<<"_________________________________________________________________________\n";
	cout<<"6. Jika ingin mengecek apakah anda terinfeksi COVID-19 atau tidak, menggunakan??\n";
	string pilgan6[50]={"a. swab test","b. Rapid test","c. termometer","d. a dan b, benar"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}     
	cout<<"_________________________________________________________________________\n";
	cout<<"7. Siapa yang lebih beresiko kematian jika terinfeksi covid-19??\n";
	string pilgan7[50]={"a. Bayi","b. remaja","c.lanjut usia ","d. a dan c, benar"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
	cout<<"__________________________________________________________________________\n";
	cout<<"8. Awal munculnya virus covid-19 ini berada di negara??\n";
	string pilgan8[50]={"a. Indonesia","b. Amerika","c. Chinna","d. india"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
	cout<<"___________________________________________________________________________\n";
	cout<<"9. Seseorang terinfeksi Positif corona pertama kali diLombok, Terjadi di daerah??\n";
	string pilgan9[50]={"a. Lombok timur","b. dasan agung","c. Lombok tengah ","d. Mataram"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
	cout<<"___________________________________________________________________________\n";
	cout<<"10. Kasus korban infeksi virus COVID-19 terbanyak di Indonesia terjadi di wilayah??\n";
	string pilgan10[50]={"a. Mataram ","b. Madura","c. Jakarta","d. Sulawesi utara"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda, apakah anda ingin mengulang mengerjakannya??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												       

	}		nilai :
					cout<<"_______________________________________\n";
					cout<<"Perolehan Nilai kuis :"<<endl;
            		nilai = benar*10;
            		cout<<"    Jumlah tepat       : "<<benar<<" soal "<<endl;
            		cout<<"    Jumlah tidak tepat : "<<salah<<" soal "<<endl;
            		cout<<"    Nilai kuis Anda    : "<<nilai<<"\n"<<endl;
			selesai : 
			cout<<"                                                    "<<endl;
			cout<<" kuis Selesai, Terimakasi Telah Menjawab Kuis Ini\n";
			cout<<"----------------------------------------------------"<<endl;
	
}
