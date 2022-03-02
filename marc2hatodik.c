#include <stdio.h>

void tomb_kiir(int meret, int tomb[]){
    for(int i=0; i<meret; i++){
        printf("%d ",tomb[i]);
    }
    puts("");
}

void swap(const int meret, int tomb[]){
    int i=0;
    int j=meret-1;
    while(i<j){
        int seged;
        seged=tomb[i];
        tomb[i]=tomb[j];
        tomb[j]=seged;
        i++;
        j--;
    }
}

int main(){

int szamok[10]={85,72,45,29,8,35,76,3,88,94};
int meret = 10;
tomb_kiir(meret,szamok);
swap(meret,szamok);
tomb_kiir(meret,szamok);
return 0;

}