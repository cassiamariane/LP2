#ifndef __BIBLIOTECA__
#define __BIBLIOTECA__

typedef struct{
    int r,g,b;
}tpPixel;

typedef struct{
    tpPixel pixel;
    int x,y;
}tpPonto;


void preenche(tpPonto desenho[4]){
    FILE *f;

    f = fopen("provaLP2.dat","wb");

    for(int i = 0; i < 4; i++){
        fwrite(&desenho[i], sizeof(tpPonto), 1, f);
    }

    fclose(f);
}

void imprime(){
    FILE *f;

    tpPonto desenho[4];

    f = fopen("provaLP2.dat","rb");

    for(int i = 0; i < 4; i++){
        fread(&desenho[i], sizeof(tpPonto), 1, f);
    }

    for(int i = 0; i < 4; i++){
        printf("\nR: %d", desenho[i].pixel.r);
        printf("\nG: %d", desenho[i].pixel.g);
        printf("\nB: %d", desenho[i].pixel.b);
        printf("\nX: %d", desenho[i].x);
        printf("\nY: %d", desenho[i].y);
    }

    fclose(f);
}

void apaga(tpPonto desenho[4], int posicao){
    FILE *f;

    f = fopen("provaLP2.dat","wb");

    desenho[posicao].pixel.r = 255;
    desenho[posicao].pixel.g = 255;
    desenho[posicao].pixel.b = 255;

   fseek (f, posicao*sizeof(tpPonto), SEEK_SET);
   
   fclose(f);

}

#endif