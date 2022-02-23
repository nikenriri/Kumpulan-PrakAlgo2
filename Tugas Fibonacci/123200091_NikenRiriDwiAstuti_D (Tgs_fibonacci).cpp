#include <iostream>

using namespace std;

int fibonacci(int n);

int main()
{
    int angka, hasil;
    cout << "===== PROGRAM MENAMPILKAN BILANGAN FIBONACCI ===== " << endl;
    cout << "\tMenghitung fibonacci ke : ";
    cin >> angka;
    hasil = fibonacci(angka);

    cout << "\tNilainya adalah : ";
    cout << hasil << endl;
    cout << "==================================================" << endl;
    return 0;
}

int fibonacci(int n){
    if((n == 0)|| (n == 1)){
        return n;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
