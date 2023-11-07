#include <iostream>
using namespace std;

int main() {
  
  int soal;
  
  cout << "pilih jawaban soal 1 - 5 => ";
  cin >> soal;
  
  while(soal){
    if(soal == 1){
    int n;
    bool isPrime = true;

    cout << "Masukkan bilangan bulat positif: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << n << " adalah bilangan prima." << endl;
    } else {
        cout << n << " bukan bilangan prima." << endl;
    }
    break;
    } 
    if(soal == 2){
      
      double x, y;
      char c;
      
      cout << "Masukan angka pertama => ";
      cin >> x;
      cout << "Masukan operator => ";
      cin >> c;
      cout << "Masukan angka kedua => ";
      cin >> y;
      
      if(c == '+'){
        cout << x << " " << c << " " << y << " = " << x + y << endl; 
      }else if(c == '*'){
        cout << x << " " << c << " " << y << " = " << x * y << endl;
      }else if(c == '-'){
        cout << x << " " << c << " " << y << " = " << x - y << endl;
      }else if(c == '/'){
        cout << x << " " << c << " " << y << " = " << x / y << endl;
      }else{
        cout << "Operator tidak valid" << endl;
      }
      break;
    }
      if(soal == 3){
        
        int temperature, convertedTemperature;
        char choice;
        
        cout << "Pilih jenis konversi suhu (°C / °F) / (°F / °C) ";
        cin >> temperature;
        
        if(choice == 'C' || choice == 'c'){
          cout << "Masukan suhu °C => ";
          cin >> temperature;
          convertedTemperature = (temperature * 9/5) + 32;
          cout << "°C convert to °F => " << convertedTemperature << endl;
        }else if(choice == 'F' || choice == 'f'){
          cout << "Masukan suhu °F => ";
          cin >> temperature;
          convertedTemperature = (temperature - 32) * 9/5;
          cout << "°F convert to °C => " << convertedTemperature << endl;
        }else{
          cout << "Pilihan konversi tidak valid, Silahkam pilih °C / °F" << endl;
        }
        break;
      }
        if(soal == 4){
          double luas,keliling;
          const double phi = 3.14159;
          int r;
          
          cout << "Masukan jari-jari => ";
          cin >> r;
          
          luas = phi * (r*r);
          keliling = 2 * phi * r;
          
          cout << "Hasil luas => " << luas << endl;
          cout << "Hasil keliling => " << keliling << endl;
          break;
        }
        if(soal == 5){
    vector<string> shoppingList;

    while (true) {
        cout << "Daftar Belanja:" << endl;
        for (int i = 0; i < shoppingList.size(); i++) {
            cout << i + 1 << ". " << shoppingList[i] << endl;
        }

        cout << "\nPilihan:" << endl;
        cout << "1. Tambahkan item" << endl;
        cout << "2. Hapus item" << endl;
        cout << "3. Keluar" << endl;

        int choice;
        cin >> choice;

        if (choice == 1) {
            string item;
            cout << "Masukkan nama item yang ingin ditambahkan: ";
            cin >> item;
            shoppingList.push_back(item);
            cout << "'" << item << "' telah ditambahkan ke daftar belanja.\n";
        } else if (choice == 2) {
            if (shoppingList.empty()) {
                cout << "Daftar belanja kosong. Tidak ada item yang dapat dihapus.\n";
            } else {
                int itemNumber;
                cout << "Masukkan nomor item yang ingin dihapus: ";
                cin >> itemNumber;
                if (itemNumber >= 1 && itemNumber <= shoppingList.size()) {
                    cout << "'" << shoppingList[itemNumber - 1] << "' telah dihapus dari daftar belanja.\n";
                    shoppingList.erase(shoppingList.begin() + itemNumber - 1);
                } else {
                    cout << "Nomor item tidak valid.\n";
                }
            }
        } else if (choice == 3) {
            cout << "Terima kasih! Daftar belanja:" << endl;
            for (int i = 0; i < shoppingList.size(); i++) {
                cout << i + 1 << ". " << shoppingList[i] << endl;
            }
            break;
        } else {
            cout << "Pilihan tidak valid. Silakan pilih 1, 2, atau 3.\n";
        }
    }
    break;
        }
      }

    return 0;
}