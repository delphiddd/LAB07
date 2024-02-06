#include <stdio.h>

int mt[3][3];
void mt3(void){
    for (int i = 0;i<=2;i++){
        for (int j = 0;j<=2;j++){
            printf("A[%d][%d] => " , i ,j);
            scanf("%d" , &mt[i][j]);
        }
    }
    printf("A = \n");
    printf("\t%4d%4d%4d\n", mt[0][0], mt[0][1], mt[0][2]);
    printf("\t%4d%4d%4d\n", mt[1][0], mt[1][1], mt[1][2]);
    printf("\t%4d%4d%4d\n", mt[2][0], mt[2][1], mt[2][2]);
}

int main(void) {
    mt3();
    int det1 = mt[0][0] * mt[1][1] * mt[2][2];
    int det2 = mt[0][1] * mt[1][2] * mt[2][0];
    int det3 = mt[0][2] * mt[1][0] * mt[2][1];
    int det4 = mt[2][0] * mt[1][1] * mt[0][2];
    int det5 = mt[2][1] * mt[1][2] * mt[0][0];
    int det6 = mt[2][2] * mt[1][0] * mt[0][1];
    int det = (det1+det2+det3)-(det4+det5+det6);
    printf("det(A) = %d\n" , det);
}
