#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    float x;
    float y;
    float z; 

} VetR3;

void soma (VetR3 vet1, VetR3 vet2){

    float vet3[3];

        vet3[0] = vet1.x + vet2.x;
        vet3[1] = vet1.y + vet2.y;
        vet3[2] = vet1.z + vet2.z;

    printf("%.2f , %.2f , %.2f\n", vet3[0], vet3[1], vet3[2]); 

}

void subtracao (VetR3 vet1, VetR3 vet2){

    float vet3[3];
    
        vet3[0] = vet1.x - vet2.x;
        vet3[1] = vet1.y - vet2.y;
        vet3[2] = vet1.z - vet2.z;

    printf("%.2f , %.2f , %.2f\n", vet3[0], vet3[1], vet3[2]);

}

void prodveto (VetR3 vet1, VetR3 vet2){

    float vet3[3];

        vet3[0] = (vet1.y*vet2.z) - (vet1.z*vet2.y);
        vet3[1] =  (vet1.z*vet2.x) - (vet1.x * vet2.z);
        vet3[2] = (vet1.x * vet2.y) - (vet1.y * vet2.x);


    printf("%.2f , %.2f , %.2f\n", vet3[0], vet3[1], vet3[2]);
}

int main () {

    VetR3 vet1, vet2;

    //PREENCHE VET1
    scanf("%f%*c", &vet1.x);
    scanf("%f%*c", &vet1.y);
    scanf("%f%*c", &vet1.z);

    //PREENCHE VET2
    scanf("%f%*c", &vet2.x);
    scanf("%f%*c", &vet2.y);
    scanf("%f%*c", &vet2.z);

    soma(vet1,vet2);
    subtracao (vet1,vet2);
    prodveto (vet1,vet2);

    return 0;
}