#include <stdio.h>
 
int main() {
    int lowest, lowest_pos, n_elements;
    int elements[999];
    scanf("%d", &n_elements);
    for (int i = 0; i < n_elements; i++){
        scanf("%d", &elements[i]);
    }
    lowest = elements[0];
    lowest_pos = 0;
    for (int j = 0; j < n_elements-1; j++){
        if (elements[j+1] <= lowest){
            lowest = elements[j+1];
            lowest_pos = j+1;
        }
    }
    printf("Menor valor: %d\n", lowest);
    printf("Posicao: %d", lowest_pos);
}