#include <iostream>
#include <cmath>
using namespace std;

const int COLUMNS = 4;

void Get_Matrix(double temp[][COLUMNS], int n){
    if (n == 2){
        double elm1, elm2, elm3, elm4;
        cout << "So you want to create a two by two matrix." << endl;
        cout << "Let's input the entries of the matrix." << endl;
        cout << "element_1 (1, 1) : ";
        cin >> elm1;
        cout << "element_2 (1, 2) : ";
        cin >> elm2;
        cout << "element_3 (2, 1) : ";
        cin >> elm3;
        cout << "element_4 (2, 2) : ";
        cin >> elm4;

        temp[0][0] = elm1;
        temp[0][1] = elm2;
        temp[1][0] = elm3;
        temp[1][1] = elm4;
    }
    else if (n == 3){
        double elm1, elm2, elm3, elm4, elm5, elm6, elm7, elm8, elm9;
        cout << "So you want to create a three by three matrix." << endl;
        cout << "Let's input the entries of the matrix." << endl;
        cout << "element_1 (1, 1) : ";
        cin >> elm1;
        cout << "element_2 (1, 2) : ";
        cin >> elm2;
        cout << "element_3 (1, 3) : ";
        cin >> elm3;
        cout << "element_4 (2, 1) : ";
        cin >> elm4;
        cout << "element_5 (2, 2) : ";
        cin >> elm5;
        cout << "element_6 (2, 3) : ";
        cin >> elm6;
        cout << "element_7 (3, 1) : ";
        cin >> elm7;
        cout << "element_8 (3, 2) : ";
        cin >> elm8;
        cout << "element_9 (3, 3) : ";
        cin >> elm9;
        temp[0][0] = elm1;
        temp[0][1] = elm2;
        temp[0][2] = elm3;
        temp[1][0] = elm4;
        temp[1][1] = elm5;
        temp[1][2] = elm6;
        temp[2][0] = elm7;
        temp[2][1] = elm8;
        temp[2][2] = elm9;
    }
    else if(n == 4){
        double elm1, elm2, elm3, elm4, elm5, elm6, elm7, elm8, elm9, elm10, elm11, elm12, elm13, elm14, elm15, elm16;
        cout << "So you want to create a four by four matrix." << endl;
        cout << "Let's input the entries of the matrix." << endl;
        cout << "element_1 (1, 1) : ";
        cin >> elm1;
        cout << "element_2 (1, 2) : ";
        cin >> elm2;
        cout << "element_3 (1, 3) : ";
        cin >> elm3;
        cout << "element_4 (1, 4) : ";
        cin >> elm4;
        cout << "element_5 (2, 1) : ";
        cin >> elm5;
        cout << "element_6 (2, 2) : ";
        cin >> elm6;
        cout << "element_7 (2, 3) : ";
        cin >> elm7;
        cout << "element_8 (2, 4) : ";
        cin >> elm8;
        cout << "element_9 (3, 1) : ";
        cin >> elm9;
        cout << "element_10 (3, 2) : ";
        cin >> elm10;
        cout << "element_11 (3, 3) : ";
        cin >> elm11;
        cout << "element_12 (3, 4) : ";
        cin >> elm12;
        cout << "element_13 (4, 1) : ";
        cin >> elm13;
        cout << "element_14 (4, 2) : ";
        cin >> elm14;
        cout << "element_15 (4, 3) : ";
        cin >> elm15;
        cout << "element_16 (4, 4) : ";
        cin >> elm16;
        temp[0][0] = elm1;
        temp[0][1] = elm2;
        temp[0][2] = elm3;
        temp[0][3] = elm4;
        temp[1][0] = elm5;
        temp[1][1] = elm6;
        temp[1][2] = elm7;
        temp[1][3] = elm8;
        temp[2][0] = elm9;
        temp[2][1] = elm10;
        temp[2][2] = elm11;
        temp[2][3] = elm12;
        temp[3][0] = elm13;
        temp[3][1] = elm14;
        temp[3][2] = elm15;
        temp[3][3] = elm16;
    }
}
void display_Matrix(double temp[][COLUMNS], int n){
    cout << "\nThe matrix form of your entries: " << endl;
    for (int i = 0; i < n; i++){
        cout << " [ ";
        for (int j = 0; j < n; j++){
            cout << temp[i][j] << " ";
        }
        cout << "]" << endl;
    }
    cout << endl;
}
double Calc_Determinant(double temp[][COLUMNS], int n){
    double determinant;
    if (n == 2){
        determinant = ((temp[0][0] * temp[1][1])-(temp[1][0] * temp[0][1]));
    }
    else if (n == 3){
        determinant = (((temp[0][0])*((temp[1][1] * temp[2][2])-(temp[1][2] * temp[2][1]))) -
                       ((temp[0][1])*((temp[1][0] * temp[2][2])-(temp[1][2] * temp[2][0]))) +
                       ((temp[0][2])*((temp[1][0] * temp[2][1])-(temp[1][1] * temp[2][0]))));
    }
    else if (n == 4){
        determinant = (((temp[0][0])*((temp[1][1])*((temp[2][2] * temp[3][3]) - (temp[2][3] * temp[3][2]))  -  (temp[1][2])*((temp[2][1] * temp[3][3]) - (temp[2][3] * temp[3][1]))  + (temp[1][3])*((temp[2][1] * temp[3][2]) - (temp[3][1] * temp[2][2])) )) -
                       ((temp[0][1])*((temp[1][0])*((temp[2][2] * temp[3][3]) - (temp[2][3] * temp[3][2]))  -  (temp[1][2])*((temp[2][0] * temp[3][3]) - (temp[2][3] * temp[3][0]))  + (temp[1][3])*((temp[2][0] * temp[3][2]) - (temp[2][2] * temp[3][0])) )) +
                       ((temp[0][2])*((temp[1][0])*((temp[2][1] * temp[3][3]) - (temp[2][3] * temp[3][1]))  -  (temp[1][1])*((temp[2][0] * temp[3][3]) - (temp[2][3] * temp[3][0]))  + (temp[1][3])*((temp[2][0] * temp[3][1]) - (temp[2][1] * temp[3][0])) )) -
                       ((temp[0][3])*((temp[1][0])*((temp[2][1] * temp[3][2]) - (temp[2][2] * temp[3][1]))  -  (temp[1][1])*((temp[2][0] * temp[3][2]) - (temp[2][2] * temp[3][0]))  + (temp[1][2])*((temp[2][0] * temp[3][1]) - (temp[2][1] * temp[3][0])) )));
    }
    return determinant;
}
int main(){
    char name[50];
    cout << "Hello, what should I call you? ";
    cin.getline(name, 50);
    bool state = true;
    while(true){
        int n;
        double det;
        char choice;
        cout << "Welcome, " << name << endl;
        cout << "Which type of square will you like to find the determinant: " << endl;
        cout << "2: 2 by 2 matrix" << endl;
        cout << "3: 3 by 3 matrix" << endl;
        cout << "4: 4 by 4 matrix" << endl;
        cin >> n;
        double matrix[n][COLUMNS];
        Get_Matrix(matrix, n);
        display_Matrix(matrix, n);
        det = Calc_Determinant(matrix, n);
        cout << "The determinant of the matrix is " << det << endl;
        cout << name << ", would you like to perform another calculation(y/n): " ;
        cin >> choice;
        if (choice == 'y'){
            continue;
        }
        else if (choice == 'n'){
            break;
        }
    }
}