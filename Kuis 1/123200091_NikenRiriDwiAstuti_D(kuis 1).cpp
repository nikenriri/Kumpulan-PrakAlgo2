#include <bits/stdc++.h>

using namespace std;

int AplPangkat(int angka, int pangkat);
void matrik();

struct ujian{
    string nama;
    int no, skor;
};

struct siswa{
    string namaMHS, Mtkul;
    int noMHS, bUji;
    ujian uji[10];
}Mhs[10];

int main(){
    int pil, angka, pangkat, jmlMhs, jmlUji, pilih, i, j, ketemu, no;
    string nama;
    char yn;

    menu:
    cout << "===== MAIN MENU ====="    << endl;
    cout << "1. Aplikasi Perpangkatan" << endl;
    cout << "2. Program Searching"     << endl;
    cout << "3. Program Matriks"       << endl;
    cout << "0. Keluar"                << endl;
    cout << "Pilih : "; cin >> pil;

    switch(pil){
    case 1:
       cout << "Aplikasi Perpangkatan" << endl;
       cout << "Masukkan Angka Pertama : "; cin >> angka;
       cout << "Masukkan Angka Kedua   : "; cin >> pangkat;
       cout << endl;
       cout << "Hasil : " << AplPangkat(angka,pangkat);
       cout << endl;
       cout << "Apakah anda ingin mencoba lagi? (y/n)";
       cin >> yn;
       if(yn == 'y' || yn == 'Y'){
        system("cls");
        goto menu;
       }else if(yn == 'n' || yn == 'N'){
        cout << "Terimakasih :)" << endl;
        break;
       }else{
           cout << "Pilihan salah !!" << endl;
           system("cls");
           goto menu;
       }

    case 2:
        cout << "Masukkan banyak mahasiswa : "; cin >> jmlMhs;
        for (int i = 0; i < jmlMhs; i++ ){
            cout << "Data Mahasiswa ke- " << i+1 << endl;
            cout << "No.Mhs     : "; cin >> Mhs[i].noMHS;
            cin.ignore();
            cout << "Nama       : "; getline(cin,Mhs[i].namaMHS);
            cout << "Matakuliah : "; getline(cin,Mhs[i].Mtkul);
            cout << "Banyak ujian : "; cin >> jmlUji;
            Mhs[i].bUji = jmlUji;
            for(int j = 0; j < jmlUji; j ++){
                cout << "\tNo            : "; cin >> Mhs[i].uji[j].no;
                cout << "\tNama ujian    : "; cin >> Mhs[i].uji[j].nama;
                cout << "\tNilai         : "; cin >> Mhs[i].uji[j].skor;
            }
        }
        cout << endl;
        cout << "Berhasil Memasukkan Data" << endl;
        cari:
        cout << "Searching berdasarkan : " << endl;
        cout << "1. Nama " << endl;
        cout << "2. No. Mhs " << endl;
        cout << "Masukkan pilihan : "; cin >> pilih;
        if(pilih == 1){
           cout << "Cari Nama Mahasiswa : "; cin.ignore(); getline(cin, nama);
           for(i=0; i < jmlMhs; i++){
              if(Mhs[i].namaMHS==nama){
                ketemu=1;
                cout << "Data ditemukan" <<endl;
                cout << "Data Mahasiswa ke-" << i+1     << endl;
                cout << "No.Mhs  : " << Mhs[i].noMHS    << endl;
                cout << "Nama    : " << Mhs[i].namaMHS  << endl;
                cout << "Matakuliah : " << Mhs[i].Mtkul << endl;

                int temp = Mhs[i].bUji;
                for(j=0; j < temp; j++){
                cout << "\tNo            : " << Mhs[i].uji[j].no   << endl;
                cout << "\tNama ujian    : " << Mhs[i].uji[j].nama << endl;
                cout << "\tNilai         : " << Mhs[i].uji[j].skor << endl;
                }
                cout << "Cari lagi? (y/n)";
                cin >> yn;
                if(yn == 'y' || yn == 'Y'){
                   system("cls");
                   goto cari;
                }else if(yn == 'n' || yn == 'N'){
                    system("cls");
                    goto menu;
                 }else{
                    cout << "Pilihan salah !!" << endl;
                    system("cls");
                    goto menu;
                 }
                }
            }
            if(ketemu == 0){
            cout << "Data tidak ditemukan" <<endl;
            cout << "cari lagi? (y/n)";
            cin >> yn;
             if(yn == 'y' || yn == 'Y'){
                system("cls");
                goto cari;
             }else if(yn == 'n' || yn == 'N'){
                    system("cls");
                    goto menu;
             }else{
                    cout << "Pilihan salah !!" << endl;
                    system("cls");
                    goto menu;
             }
            }
        }else if(pilih==2){
            cout << "Cari No Mahasiswa : "; cin >> no;
            for(i=0; i < jmlMhs; i++){
              if(Mhs[i].noMHS==no){
                ketemu=1;
                cout << "Data ditemukan" <<endl;
                cout << "Data Mahasiswa ke-" << i+1     << endl;
                cout << "No.Mhs  : " << Mhs[i].noMHS    << endl;
                cout << "Nama    : " << Mhs[i].namaMHS  << endl;
                cout << "Matakuliah : " << Mhs[i].Mtkul << endl;

                int temp = Mhs[i].bUji;
                for(j=0; j < temp; j++){
                cout << "\tNo            : " << Mhs[i].uji[j].no   << endl;
                cout << "\tNama ujian    : " << Mhs[i].uji[j].nama << endl;
                cout << "\tNilai         : " << Mhs[i].uji[j].skor << endl;
                }
                cout << "Cari lagi? (y/n)";
                cin >> yn;
                if(yn == 'y' || yn == 'Y'){
                   system("cls");
                   goto cari;
                }else if(yn == 'n' || yn == 'N'){
                    system("cls");
                    goto menu;
                }else{
                    cout << "Pilihan salah !!" << endl;
                    system("cls");
                    goto menu;
                }
                }
            }
            if(ketemu==0){
            cout << "Data tidak ditemukan" <<endl;
            cout << "Cari lagi? (y/n)";
            cin >> yn;
            if(yn == 'y' || yn == 'Y'){
                system("cls");
                goto cari;
            }else if(yn == 'n' || yn == 'N'){
                    system("cls");
                    goto menu;
            }else{
                    cout << "Pilihan salah !!" << endl;
                    system("cls");
                    goto menu;
            }
            }
        }else{
            cout << "Pilihan tidak tersedia !!" << endl;
            cout << "Apakah anda ingin mencoba lagi? (y/n)";
            cin >> yn;
            if(yn == 'y' || yn == 'Y'){
                system("cls");
                goto menu;
            }else if(yn == 'n' || yn == 'N'){
                    cout << "Terimakasih :)" << endl;
                    break;
            }else{
                    cout << "Pilihan salah !!" << endl;
                    system("cls");
                    goto menu;
            }
        }
        break;

    case 3:
        matrik();
        cout << "Apakah anda ingin mencoba lagi? (y/n)";
        cin >> yn;
        if(yn == 'y' || yn == 'Y'){
          system("cls");
          goto menu;
        }else if(yn == 'n' || yn == 'N'){
               cout << "Terimakasih :)" << endl;
               break;
        }else{
           cout << "Pilihan salah !!" << endl;
           system("cls");
           goto menu;
        }
    case 0:
        break;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        system("pause");
        system("cls");
        goto menu;

}

  return 0;
}

int AplPangkat(int angka, int pangkat){
    if(pangkat == 1){
        return angka;
    }else{
        return angka*AplPangkat(angka,(pangkat-1));
    }
}
void matrik(){
   int n,m;
       cout << "\nJumlah Baris : ";
       cin >> m;
       cout << "\nJumlah Kolom : ";
       cin >> n;

       int arr[m][n];
       int i,j;

       cout << endl;
       for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cout << "Elemen" << "[" << i+1 << "]" << "[" << j+1 << "]" << " : "; cin >> arr[i][j];
        }
      }
      cout << "\nMATRIK : \n";
      for(i = 0; i < m; i++){
         for(j = 0; j < n; j++){
             cout << arr[i][j] << " ";
         }
      cout << endl;
      }
      cout << "\nMATRIKS SPIRAL : \n";
      int k = 0, l = 0;

      while(k < m && l < n){
          for(i = l; i < n; i++){
             cout << arr[k][i] << " ";
      }
      k++;
        for(i = k; i < m; i++){
            cout << arr[i][n-1] << " " ;
      }
      n--;
        if(k < m){
            for(i = n - 1; i >= 0; --i){
      cout << arr[m-1][i] << " " ;
      }
      m--;
      }
        if(l < n){
            for(i = m - 1; i >= k; i--){
                cout << arr[i][l] << " ";
      }
      l++;
        }
     }
        cout << endl;
}

