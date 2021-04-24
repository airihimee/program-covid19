#include<iostream> //library c++
#include<conio.h> //untuk getch()
#include<math.h> //untuk pow() dan floor(), <libary matematika>
#include<iomanip> //untuk endl
#include<string> //untuk tipe data string
using namespace std;

int main(){
	int m;
	
	menu:
	system("cls");
	cout<<"\n\t===== PROGRAM COVID-19 =====\n\n";	
	cout<<" 1. Prediksi COVID-19\n 2. Solusi Pencegahan COVID-19\n 3. Cara Mencuci Tangan\n 4. Keluar\n";
	cout<<" Pilih Menu Program: "; cin>>m;
	
	switch(m){
	case 1:{
		float Nh,R,P,Nhx,x,y,a;
		int b;
		string j;
		PPC:
		system("cls");
		cout<<"\n\t\t=== PROGRAM PREDIKSI COVID-19 ===\n\n";
		cout<<" Keterangan:\n Nh = Jumlah kasus Per hari\n x = Hari ke-x\n"; 
		cout<<" P = Peluang tertular yang bertemu pasien COVID-19 (tingkat peluang lebih kecil lebih baik)\n";
		cout<<" R = Jumlah rata-rata orang bertemu pasien COVID-19\n\n";
		cout<<" ======================================================\n\n";
		cout<<" Masukkan Hari ke- (x)"<<setw(29)<<": "; cin>>x;
		cout<<" Masukkan batas Hari ke- (x)"<<setw(23)<<": "; cin>>y;
		cout<<" Masukkan banyak orang bertemu pasien positif (R): "; cin>>R;
	    cout<<" Masukkan peluang yang tertular(%) (P)"<<setw(13)<<": "; cin>>P;
	    cout<<" Masukkan jumlah pasien yang positif (Nh)"<<setw(10)<<": "; cin>>Nh;
    	P=P/100;
   		for(b=x;b<=y;b++){
    		b=b--;
			a=1+(R*P);
    		Nhx=(pow(a,b))*Nh;
		}	
		cout<<"\n Nh"<<b-1<<" = "<<floor(Nhx)<<endl;
		cout<<" Jumlah kasus Per hari sebanyak "<<floor(Nhx)<<" orang"<<endl<<endl;
		getch();
		cout<<"Lanjutkan[y/t]? "; cin>>j;
		if (j=="y"){
			goto PPC;
		}else goto menu;
		break;
	}
		
	case 2:{
		system("cls");
		cout<<"\n\t\t=== PROGRAM SOLUSI PENCEGAHAN COVID-19 ===\n\n";
		cout<<" Mengurangi Jumlah rata-rata orang bertemu pasien COVID-19.\n";
		cout<<" 1. Melakukan Social Distancing.\n 2. Stay at Home.\n\n";
		cout<<" Mengurangi Peluang tertular yang bertemu pasien COVID-19.\n";
		cout<<" 1. Menggunakan masker saat melakukan aktivitas diluar rumah.\n 2. Mencuci tangan.\n 3. Hidup sehat.\n";
		cout<<endl<<endl;
		cout<<" Ayo  kita  berjuang bersama-sama  melawan  COVID-19  dengan  menaati  peraturan dan melakukan\n";
		cout<<" solusi  pencegahan  COVID-19!  Kita bisa membantu patugas medis dengan #DiRumahAja. Jika yang\n";
		cout<<" mempunyai  rezeki  lebih, kita dapat mendonasikan bantuan untuk orang-orang yang  membutuhkan\n";
		cout<<" bantuan. Mari bersama-sama terus berdoa dan mengingatkan teman-teman kita agar wabah Pandemik\n";
		cout<<" ini dapat selesai dengan secepatnya."<<endl<<endl;
		getch();
		goto menu;
		break;
	}
		
	case 3:{
		system("cls");
		char langkah[6][30] = {"Telapak tangan.","Punggung tangan.","Pergelangan tangan.","Sela-sela jari.","Kuku-kuku.","Bilas."};
		cout<<"\n\t=== PROGRAM CARA MENCUCI TANGAN ===\n";
		cout<<"\t   (sesuai dengan petunjuk WHO) \n\n";
		cout<<" Mencuci tangan dengan sabun dengan baik dan benar: \n";
		for (int n=0; n<6;n++){
			cout<<" "<<n+1<<" "<<langkah[n]<< endl;
		}
		getch();
		goto menu;
		break;
	}
	
	case 4:{
		cout<<" Terima kasih!";
		break;
		return 0;
	}
	
	default:{
		cout<<" Maaf, opsi yang anda pilih tidak tersedia.";
		getch();
		goto menu;
		break;
	}
}
}

