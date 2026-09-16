#include <iostream>
using namespace std; 

int main() {
    system ("cls");
    int m1[3][3][4];
    for (int i = 0; i < 3; i++) {
        cout<< "lapis tabel ke-" << i + 1 << endl;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cin >> m1[i][j][k];
            
            }
        }  
        cout<<"\n";      
    }
}            