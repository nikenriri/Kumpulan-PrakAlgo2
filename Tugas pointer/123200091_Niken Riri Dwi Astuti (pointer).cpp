#include <bits/stdc++.h>

using namespace std;

void bubble(int *ptr, int n);
void print(int *data, int n);
void element(int *arr, int *i);
void insertion(int *arr, int leng);
void swap(int *xp, int *yp);
void selection(int arr[], int n);


int main(){
    int arr[20] = {7, 1, 8, 3, 2, 10, 4, 9, 5, 12, 6, 7, 15, 20, 14, 11, 23, 68, 25, 18};
    int n = sizeof(arr)/sizeof(int);
    int pil;
    char yn;

    menu:
    cout << "Angka sebelum urut = ";
    for(int x = 0; x < n; x++){
        cout << arr[x] << " ";
    }
    cout << endl;
    cout << "Pilih metode sorting : " << endl;
    cout << "\t1. Bubble Sort"    << endl;
    cout << "\t2. Insertion Sort" << endl;
    cout << "\t3. Selection Sort" << endl;
    cout << "Pilih : ";
    cin >> pil;

    switch(pil){
    case 1:
      bubble(arr, n);
      cout << endl;
      cout << "Kembali ke menu ?";
      cin >> yn;
      if(yn == 'Y' || yn == 'y'){
        system("cls");
        goto menu;
      }else if(yn == 'N' || yn == 'n'){
          cout << "Terimakasih" << endl;
          system("pause");
          break;
      }else{
          cout << "Salah input" << endl;
          system("pause");
          break;
      }

    case 2:
      insertion(&arr[0], n);

      cout << "Angka setelah urut = ";
      print(&arr[0], n);

      cout << endl;
      cout << "Kembali ke menu ?";
      cin >> yn;
      if(yn == 'Y' || yn == 'y'){
        system("cls");
        goto menu;
      }else if(yn == 'N' || yn == 'n'){
          cout << "Terimakasih" << endl;
          system("pause");
          break;
      }else{
          cout << "Salah input" << endl;
          system("pause");
          break;
      }

    case 3:
      selection(arr, n);

      cout << "Bilangan urut = ";
      print(arr, n);

      cout << endl;
      cout << "Kembali ke menu ?";
      cin >> yn;
      if(yn == 'Y' || yn == 'y'){
        system("cls");
        goto menu;
      }else if(yn == 'N' || yn == 'n'){
          cout << "Terimakasih" << endl;
          system("pause");
          break;
      }else{
          cout << "Salah input" << endl;
          system("pause");
          break;
      }




    }


    return 0;
}

void bubble(int *ptr, int n){
    int i, j, t;
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(*(ptr + j) < *(ptr + i)){
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
    cout << endl;
    cout << "Angka setelah urut = ";
    for(i = 0; i < n; i++){
        cout << *(ptr + i);
        cout << " ";
    }
}

void print(int *data, int n){
    int i;
    for(i = 0; i < n; i++){
        cout << *(data) << " ";
        data++;
    }
    cout << endl;
}

void element(int *arr, int *i){
    int ival;
    for(ival = *i; i > arr && *(i - 1) > ival; i--){
        *i = *(i-1);
    }
    *i = ival;
}

void insertion(int *arr, int leng){
    int *i, *last = arr + leng;
    for(i = arr + 1; i < last; i++){
        if(*i < *(i - 1)){
            element(arr, i);
        }
    }
}

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selection(int arr[], int n){
    int i, j, minim;

    for(i = 0; i < n-1; i++){
        minim = i;
        for(j = i+1; j < n; j++){
            if(arr[j] < arr[minim]){
                minim = j;

                swap(&arr[minim], &arr[i]);
            }
        }
    }
}

