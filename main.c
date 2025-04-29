#include <math.h>  

#define N 5
#define NO_ROOT 1038.0

int main() {
    double P[N] = {1, -3, 2, 0, 5};
    double Q[N] = {1, 2, 1, -4, 6};
    double Z[N];

    for (int i = 0; i < N; i++) {
        double D = P[i] * P[i] - 4 * Q[i];

        if (D >= 0) {
            double root1 = (-P[i] + sqrt(D)) / 2;
            double root2 = (-P[i] - sqrt(D)) / 2;
            Z[i] = (root1 < root2) ? root1 : root2;
        } else {
            Z[i] = NO_ROOT;
        }
    }

    
    for (int i = 0; i < N; i++) {
        
        printf("Z[%d] = %.2f\n", i, Z[i]);
    }

    return 0;
}
