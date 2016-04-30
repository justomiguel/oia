#include <iostream>

using namespace std;

void darFormato(){
    cout << "********* //// **********" << endl;
    cout << "********* ++++ *********" << endl;
}

int devolverMayor(int nro1, int nro2){
    if (nro1 > nro2){
        return nro1;
    }
    return nro2;
}

int main() {
    darFormato();
    cout << "Hello, World!" << endl;
    darFormato();

    int valor = devolverMayor(56,87);
    cout << valor << endl;
    return 0;
}

