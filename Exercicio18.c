#include<stdio.h>
#include<math.h>

void calc_esfera(float R, float *area, float *volume) {
    
    *area = 4 * 3.1415 * R * R;
    *volume = (4/3) * 3.141592 * pow(R, 3);
}
    int main(void){
    float raio;
    flot area; 
    float volume;
    
    printf("valor do raio: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);
    printf("\nArea da superficie: %.2f\n volume: %.2f", area , volume);

    return 0;
}