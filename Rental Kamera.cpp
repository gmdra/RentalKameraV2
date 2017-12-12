#include <conio.h>
#include <iostream.h>
#include <stdio.h>

int main()
{

	struct
	{
	char kobar, nabar[30];
	int harga, jumli, lama, total, bayar, kembali;
	}

   brng;
	char awal, ulang, nama_peny [30], no_hp[20], alpeny[40];
	awal:

	clrscr();
puts("\tRental Kamera Fujifilm");
puts("======================================");
puts("Kode \tJenis Kamera\t");
puts("--------------------------------------");
puts("Silahkan Pilih Jenis Kamera :\n");
puts("[1] \tDSRL");
puts("[2] \tMIRRORLESS");
puts("[3] \tInsta-X");
puts("--------------------------------------");

cout<<"Nama penyewa : ";gets(nama_peny);
cout<<"no hp penyewa : ";cin>>no_hp;
cout<<"Alamat penyewa : ";gets(alpeny);
cout<<"Pilih Kode Menu [1/2/3] : ";cin>>awal;

	if (awal=='1')
	goto satu;

	else if (awal=='2')
	goto dua;

   else if (awal=='3')
	goto tiga;

   else
	goto empat;

	satu:

clrscr();

puts("----------------------------------------------");
puts("*     Anda Memilih Jenis Kamera DSRL         *");
puts("----------------------------------------------");

puts("[A] \tFinePix SL300\tRp 500.000,-");
puts("[B] \tFinepix S4500\tRp 400.000,-");
puts("[C] \tFinepix S4200\tRp 300.000,-");
puts("[D] \tFinepix S2980\tRp 250.000,-");
puts("==============================================");

cout<<"Kode Barang [A/B/C/D] : ";cin>>brng.kobar;

if (brng.kobar=='A'||brng.kobar=='a')
{strcpy (brng.nabar, "FinePix SL300");
brng.harga=500000;}

else if (brng.kobar=='B'||brng.kobar=='b')
{strcpy (brng.nabar, "Finepix S4500");
brng.harga=400000;}

else if (brng.kobar=='C'||brng.kobar=='c')
{strcpy (brng.nabar, "Finepix S4200");
brng.harga=300000;}

else
{strcpy (brng.nabar, "Finepix S2980");
brng.harga=250000;}


puts("----------------------------------------------");
cout<<"Nama penyewa : "<<nama_peny<<endl;
cout<<"no hp penyewa : "<<no_hp<<endl;
cout<<"Alamat penyewa : "<<alpeny<<endl;
cout<<"Nama kamera : "<<brng.nabar<<endl;
cout<<"Harga sewa/hari : Rp. "<<brng.harga<<endl;
puts("----------------------------------------------");
cout<<"Jumlah sewa : ";cin>>brng.jumli;
cout<<"Lama Sewa (Hari)  :";cin>>brng.lama;

brng.total=brng.lama*brng.harga*brng.jumli;

cout<<"Total Bayar : Rp. "<<brng.total<<endl;
cout<<"Uang Bayar  : Rp. ";cin>>brng.bayar;

brng.kembali=brng.bayar-brng.total;

cout<<"Uang Kembali : Rp. "<<brng.kembali<<endl;

puts("----------------------------------------------");
cout<<endl;

cout<<"***** TERIMA KASIH *****\n";


cout<<"Ingin menyewa yang lain? [Y/T] : ";cin>>ulang;

if (ulang=='Y'||ulang=='y')

goto awal;
else

return 0;


dua:

clrscr();

puts("----------------------------------------------");
puts("*    Anda Memilih Jenis Kamera MIRRORLESS    *");
puts("----------------------------------------------");
puts("[A] \tFujifilm XA-10\tRp 100.000,-");
puts("[B] \tFujifilm XA-3\tRp 150.000,-");
puts("[C] \tFujifilm X-A2\tRp 155.000,-");
puts("[D] \tFujifilm X-T2\tRp 165.000,-");
puts("==============================================");

cout<<"Kode Barang [A/B/C/D] : ";cin>>brng.kobar;

if (brng.kobar=='A'||brng.kobar=='a')
{strcpy (brng.nabar, "Fujifilm XA-10");
brng.harga=100000;}

else if (brng.kobar=='B'||brng.kobar=='b')
{strcpy (brng.nabar, "Fujifilm XA-3");
brng.harga=150000;}

else if (brng.kobar=='C'||brng.kobar=='c')
{strcpy (brng.nabar, "Fujifilm X-A2");
brng.harga=155000;}

else
{strcpy (brng.nabar, "Fujifilm X-T2");
brng.harga=165000;}


puts("----------------------------------------------");
cout<<"Nama penyewa : "<<nama_peny<<endl;
cout<<"no hp penyewa : "<<no_hp<<endl;
cout<<"Alamat penyewa : "<<alpeny<<endl;
cout<<"Nama kamera : "<<brng.nabar<<endl;
cout<<"Harga Sewa/hari : Rp. "<<brng.harga<<endl;
puts("----------------------------------------------");
cout<<"Jumlah sewa : ";cin>>brng.jumli;
cout<<"Lama Sewa (Hari)  :";cin>>brng.lama;
brng.total=brng.lama*brng.harga*brng.jumli;

cout<<"Total Bayar : Rp. "<<brng.total<<endl;
cout<<"Uang Bayar  : Rp. ";cin>>brng.bayar;
brng.kembali=brng.bayar-brng.total;

cout<<"Uang Kembali : Rp. "<<brng.kembali<<endl;

puts("----------------------------------------------");
cout<<endl;

cout<<"***** TERIMA KASIH *****\n";


cout<<"Ingin menyewa kamera lain? [Y/T] : ";cin>>ulang;


if (ulang=='Y'||ulang=='y')

goto awal;
else

return 0;


tiga:

clrscr();

puts("----------------------------------------------");
puts("*    Anda Memilih Jenis Kamera Insta-X       *");
puts("----------------------------------------------");
puts("[A] \tinstax mini 90\tRp 80.000,- ");
puts("[B] \tinstax mini 9\tRp 70.000,-");
puts("[C] \tinstax mini 8\tRp 60.000,-");
puts("[D] \tinstax mini 7s\tRp 50.000,- ");
puts("==============================================");

cout<<"Kode Barang [A/B/C/D] : ";cin>>brng.kobar;

if (brng.kobar=='A'||brng.kobar=='a')
{strcpy (brng.nabar, "instax mini 90");
brng.harga=80000;}

else if (brng.kobar=='B'||brng.kobar=='b')
{strcpy (brng.nabar, "instax mini 9 ");
brng.harga=70000;}

else if (brng.kobar=='C'||brng.kobar=='c')
{strcpy (brng.nabar, "instax mini 8");
brng.harga=60000;}

else
{strcpy (brng.nabar, "instax mini 7s ");
brng.harga=50000;}


puts("----------------------------------------------");
cout<<"Nama penyewa : "<<nama_peny<<endl;
cout<<"no hp penyewa : "<<no_hp<<endl;
cout<<"Alamat penyewa : "<<alpeny<<endl;
cout<<"Nama Kamera : "<<brng.nabar<<endl;
cout<<"Harga Sewa : Rp. "<<brng.harga<<endl;
puts("----------------------------------------------");
cout<<"Jumlah Sewa : ";cin>>brng.jumli;
cout<<"Lama Sewa (Hari)  :";cin>>brng.lama;
brng.total=brng.lama*brng.harga*brng.jumli;

cout<<"Total Bayar : Rp. "<<brng.total<<endl;
cout<<"Uang Bayar  : Rp. ";cin>>brng.bayar;
brng.kembali=brng.bayar-brng.total;

cout<<"Uang Kembali : Rp. "<<brng.kembali<<endl;

puts("----------------------------------------------");
cout<<endl;

cout<<"***** TERIMA KASIH *****\n";


cout<<"Ingin menyewa kamera lain? [Y/T] : ";cin>>ulang;

if (ulang=='Y'||ulang=='y')

goto awal;
else

return 0;


empat:


getch();

return 0;

}