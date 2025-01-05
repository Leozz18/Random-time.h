#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    
    FILE *file = fopen("random_numbers.csv", "w"); // funzione per salvare il numero di iterazioni e i numeri generati casualmente in un file.csv per importarlo facilmente su excell.
    if (file == NULL) {
        printf("Errore nell'aprire il file.\n");
        return 1;
    }
    
    fprintf(file, "Iterazione,Numero\n");
    
    for (int i = 0; i < 100; i++) {
        int random_number = rand() % 100; 
        fprintf(file, "%d,%d\n", i + 1, random_number);
    }

    fclose(file);
    printf("Numeri casuali generati con successo e salvati in random_numbers.csv\n");

    return 0;
}

