#include <iostream>
using namespace std;

int main(){
  
  int soal;
  cout << "Jawaban nomor => ";
  cin >> soal;
  cout << endl;
  // soal nomor 1
  if(soal == 1){
  char c;
  do{
  int x, y;
  cout << "Masukan Bilangan => ";
  cin >> x;
  cout << "Masukam bilanham => ";
  cin >> y;
  
  int x9 = max({x, y});
  
  cout << "Bilangan terbesar => " << x9 << endl;
  cout << endl;
  cout << "ulangi(y / n) => ";
  cin >> c;
  system("clear");
  if(c == 'n'){
    cout << endl;
    cout << "Program selesai!!" << endl;
  }
  }while(c == 'y');
}
  // soal nomor 2
  if(soal == 2){
  int n;
  cout << "Masukan bilangan positif => ";
  cin >> n;
  
  int faktorial = 1;
  for(int x = 1; x <= n; x++){
    faktorial *= x;
  }
 cout << n << "! => " << faktorial << endl;
  }
   // soal nomor 3
   if(soal == 3){
   string kata;
  
  cout << "Masukan kata => ";
  cin >> kata;
  cout << endl;
   
   reverse(kata.begin(), kata.end());
   
  cout << kata << endl;
}
// soal nomor 4
    if(soal == 4){
    int n;
    cout << "Masukkan jumlah angka dalam deret Fibonacci: ";
    cin >> n;

    int a = 0, b = 1; // Inisialisasi dua angka pertama
    cout << "Deret Fibonacci: ";

    if (n >= 1) {
        cout << a << " ";
    }
    if (n >= 2) {
        cout << b << " ";
    }

    for (int i = 2; i < n; i++) {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
    }
  // soal no 5 
  if(soal == 5){
  double berat, tinggi;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi (m): ";
    cin >> tinggi;

    double bmi = berat / (tinggi * tinggi);

    cout << "BMI Anda: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Kurus" << endl;
    } else if (bmi < 24.9) {
        cout << "Normal" << endl;
    } else if (bmi < 29.9) {
        cout << "Gemuk" << endl;
    } else {
        cout << "Obesitas" << endl;
    }
  }
  return 0;
}