#include <iostream>
using namespace std;

int main() {
    system("cls");

    int arr[3][3][4];
    int count = 0; 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                if (count % 2 == 0) {
                    arr[i][j][k] = (count / 2) + 2;
                } else {
                    arr[i][j][k] = (count / 2) + 1;
                }
                count++;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << "Lapis Tabel ke-" << (i + 1) << " (Ukuran 3x4):\n";
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << arr[i][j][k] << "\t";
            }
            cout << endl;
        }
        cout << endl; 
    }

    return 0;
}