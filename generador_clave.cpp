#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void mayus(char contra[], int n) {
    int a;
    char caracter[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    a = rand() % 26;
    contra[n] = caracter[a];
}
void min(char contra[], int n) {
    int a;
    char caracter[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    a = rand() % 26;
    contra[n] = caracter[a];
}
void num(char contra[], int n) {
    int a;
    char caracter[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    a = rand() % 10;
    contra[n] = caracter[a];
}
void simbolo(char contra[], int n) {
    int a;
    char caracter[] = {'@', '#', '$', '%', '&', '/', '+', '-', '_'};
    a = rand() % 9;
    contra[n] = caracter[a];
}
int main() {
    char contra[100], rt;
    int probabilidad, digitos;
    srand(time(NULL));
    do{ cout<<"ingresa los digitos de tu contra: ";
        cin>>digitos;
        for(int n = 0; n < digitos; n++) {
        probabilidad = rand() % 4 + 1;
        switch(probabilidad) {
            case 1:
                mayus(contra, n);
                break;
            case 2:
                min(contra, n);
                break;
            case 3:
                num(contra, n);
                break;
            case 4:
                simbolo(contra, n);
                break;
        }
    }
    cout << "Tu clave es la siguiente: ";
    for(int n = 0; n < digitos; n++) {
        cout << contra[n];
    }
    cout<<endl;
    cout<<"desea generar otra clave? y/n: ";
    cin>>rt;}while(rt=='y');
    cout << endl << "Cerrando programa...";
    return 0;
}