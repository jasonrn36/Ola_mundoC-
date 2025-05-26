#include <iostream>

int main() {
    // Alocação usando malloc (C)
    int* ptr = (int*) malloc(sizeof(int));
    *ptr = 42;
    std::cout << "Valor: " << *ptr << std::endl;

    // Liberação da memória com free
    free(ptr);

    // Alocação usando new (C++)
    int* ptr2 = new int(100);
    std::cout << "Valor: " << *ptr2 << std::endl;

    // Liberação da memória com delete
    delete ptr2;

    return 0;
}
