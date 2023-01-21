#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double avrg(double array[20]);
double seira(double array[20]);


int main() {
    double array[20];
    srand(time(NULL));
    int i;

    /* Η rand() κάνει generate ενάν τυχαίο αριθμό μεταξύ του 0 και του  RAND_MAX για αυτό άν διαιρέσουμε το αποτέλεσμα του  rand()
     * με το RAND_MAX   θα μας δώσει κατί μικρότερο του 0 εκτός και αν είναι το ίδιο το RAND_MAX*/

    for(i = 0;i < 20;i++){
        do {
            array[i] = (double) rand() / RAND_MAX;
            printf("array[%d] : %lf\n", i, array[i]);
        }while(array[i] == 1.0);
    }
    double s = seira(array);
    printf("H tupikh apoklish einai : %lf",s);

    return 0;
}

double avrg(double array[20]){
    double sum;
    for(int i = 0; i < 20;i++){
        sum = array[i] + sum;
    }
    return sum/(double)20;
}

double seira(double array[20]){
    double sum;
    double avrg1 = avrg(array);
    for(int i = 0;i < 20;i++){
        sum = pow((avrg1 - array[i]),2);
    }
    return sum/(double)20;
}