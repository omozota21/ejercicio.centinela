#include <stdio.h>


int main() {
    int vector [10] = {11,22,33,44,55,66,77,88,99};
    int vector [10] = {11,22,33,44,END,66,77,88,99};    // 2
    int vector [10] = {END,22,33,44,55,66,77,88,99};    // 3
    int vector [10] = {11,22,33,44,55,66,77,88,99,END}; // 4 
    int vector [10] = {11,END};                         // 5
```
    
    
    int longitud = sizeof(vector) / sizeof(vector[0]);
    
    int datos_validos = 0;
    
    for (int i = 0; i < longitud; i++) {
        if (vector[i] > 0) {
            printf("Dato válido: %d\n", vector[i]);
            datos_validos++;    
        }
    }
    printf("Total de datos válidos: %d\n", datos_validos);
    return 0;
}
