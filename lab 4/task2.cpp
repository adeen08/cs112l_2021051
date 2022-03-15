#include<iostream>
using namespace std;

class arr2d {
public:
    void initialize() {

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << "enter value: ";
                cin >> A[i][j];
                while (cin.fail()) {
                    cout << "Invalid!";
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << " Enter again: ";
                    cin >> A[i][j];
                }
            }

        }
    }
    void display() {
        cout << "Matrix 1:" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
    void transpose() {

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                temp[i][j] = A[j][i];
            }
        }

        cout << "The transpose of matrix is: " << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << temp[i][j] << " ";
            }
            cout << endl;
        }

    }
    void isSymmetry() {
        transpose();
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (A[i][j] != temp[i][j]) {
                    cout << "The matrix is not symmetric" << endl;
                    return;
                }
            }
        }
        cout << "The matrix is symmetric";

    }

    const static int size = 2;
    int A[size][size];
    int temp[size][size];

    void mult(arr2d mat1, arr2d mat2) {
        int prodmat[size][size];
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                prodmat[i][j] = 0;
            }
        }
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                for (int k = 0; k < size; k++) {
                    prodmat[i][j] += mat1.A[i][k] * mat2.A[k][j];
                }
            }
        }
        cout << "The result of matrix multiplication is: " << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << prodmat[i][j] << " ";

            }
            cout << endl;
        }

    }

};



int main() {
    int n = 0;
    arr2d mat1, mat2;

    do {

        cout << endl << "Menu:" << endl;
        cout << "1-Initialize Array: " << endl;
        cout << "2-Print Array: " << endl;
        cout << "3-Transpose Array: " << endl;
        cout << "4-Check if matrix is symmetric: " << endl;
        cout << "5-Multiply Arrays: " << endl;
        cout << "0-exit" << endl;
        cout << "Enter the option you want to select: ";
        cin >> n;
        while (cin.fail()) {
            cout << "Invalid!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Enter option again: ";
            cin >> n;
        }
        cout << endl << endl;

        switch (n) {
        case 1:
            mat1.initialize();
            break;
        case 2:
            mat1.display();
            break;
        case 3:
            mat1.transpose();
            break;
        case 4:
            mat1.isSymmetry();
            break;
        case 5:
            mat2.initialize();
          
            mat1.mult(mat1, mat2);
            break;
        case 0:
            break;
        default:
            cout << "Invalid option!";
            break;
        }
    } while (n != 0);
    return 0;
}