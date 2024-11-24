#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char cad[] = "Universidade Federal da Paraiba";
    int lon = strlen(cad);
    char *ptr = new char[lon + 1];

    if (ptr == NULL) {
        cout << "Falta memoria" << endl;
        return -1;
    }

    strcpy(ptr, cad);
    cout << "ptr = " << ptr;
    delete[] ptr;

    return 0;
}
