#include <iostream>
using namespace std;

int main() {
    // 3D array: 2 layers, 3 rows, 4 columns
    int cube[2][3][4] = {
        { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} },
        { {13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24} }
    };

    cout << "Displaying 3D array (layer by layer):\n\n";

    // Loop through all 3 dimensions
    for (int i = 0; i < 2; i++) {         // layer
        cout << "Layer " << i << ":\n";
        for (int j = 0; j < 3; j++) {     // row
            for (int k = 0; k < 4; k++) { // column
                cout << cube[i][j][k] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}