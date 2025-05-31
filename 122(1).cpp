
#include <iostream>
#include <fstream>
using namespace std;


bool cocok(char input[], const char benar[]) {
    int i = 0;
    while (input[i] != '\0' && benar[i] != '\0') {
        if (input[i] != benar[i]) return false;
        i++;
    }
    return input[i] == '\0' && benar[i] == '\0';
}


int main() {
	int pilihan;
    char inputUser[20], inputPass[20];
    const char USERNAME[] = "dimas";
    const char PASSWORD[] = "122";

    while (true) {
        cout << "LOGIN\nUsername: ";
        cin >> inputUser;
        cout << "Password: ";
        cin >> inputPass;

        if (cocok(inputUser, USERNAME) && cocok(inputPass, PASSWORD)) {
            cout << "Login berhasil.\n";
            break;
        } else {
            cout << "Login gagal. Coba lagi.\n";
        }
    }
	
	cout << "========Data Diri=========\n";
	cout << "Nama : Dimas Andreansyah\n";
	cout << "NIm : 2400018122\n";
	cout << "Prodi : iNFORMATIKA\n";
	cout << "Fakultas: Teknologi Industri\n";
	cout << "============OPSI=============\n";
	cout << "apakah kamu ingin mengambil KRS? ";
	cin >> pilihan;
	
	switch(pilihan)
	case 1:
		cout<<"alpro 3 sks";
	
    return 0;
}

