#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <iostream> 
void leerVector(float myVector[], int size);
void printVector(float myVector[], int size);
void sumaVector(float vector1[3],float vector2[3],float *ptr);
void restaVector(float vector1[3],float vector2[3],float*ptr);
int productoPunto(float vector1[3], float vector2[3]);
void productoCruz(float vector1[3], float vector2[3], float*ptr);
float norma (float myVector[],int size); 
float vectorUnitario(float vector[], int size,float*ptr);
int main(){ 
float a[3];
float b[3];
float c[3];
float *ptrC = &c[0];
int opt;
char reset;
do{
printf("Calculadora de vectores\n");
printf("Menu\n");
printf("Elige una operacion a realizar:\n");
printf("1-Suma\n");
printf("2-Resta\n");
printf("3-Producto punto\n");
printf("4-Producto cruz\n");
printf("5-Norma\n");
printf("6-Valor unitario\n");
scanf("%d",&opt);
switch(opt){
 case 1:
  printf("Introduzca los valores del Vector A:\n");
  leerVector(a,3);
  printf("Introduzca los valores del Vector B:\n");
  leerVector(b,3);
  sumaVector(a,b,ptrC);
  printVector(c,3);
  break;
 case 2:
  printf("Introduzca los valores del Vector A:\n");
  leerVector(a,3);
  printf("Introduzca los valores del Vector B:\n");
  leerVector(b,3);
  restaVector(a,b,ptrC);
  printVector(c,3);
  break;
 case 3:
  printf("Introduzca los valores del Vector A:\n");
  leerVector(a,3);
  printf("Introduzca los valores del Vector B:\n");
  leerVector(b,3);
  productoPunto(a,b);
  break;
 case 4:
  printf("Introduzca los valores del Vector A:\n");
  leerVector(a,3);
  printf("Introduzca los valores del Vector B:\n");
  leerVector(b,3);
  productoCruz(a,b,ptrC);
  printVector(c,3);
  break;
 case 5:
  printf("Introduzca los valores del Vector:\n");
  leerVector(a,3);
  norma(a,3);
  break;
  case 6:
  printf("Introduzca los valores del Vector:\n");
  leerVector(a,3);
  vectorUnitario(a,3,ptrC);
  printVector(c,3);
  break;
  default:
  printf("Elige una operacion:\n");
  }
printf("Desea realizar otra operacion?    Si     No\n");
scanf("%s",&reset);
 } while(reset=='s'|| reset=='S');
} 
void leerVector(float myVector[],int size){
for (int i=0; i<size; i++){	printf("vector[%d]:",i);	
scanf("%f",&myVector[i]);
 }
} 
void printVector(float myVector[],int size){
for (int i=0; i<size; i++){	printf("Vector C[%d]: %f\n",i,myVector[i]);	
  }
} 
void sumaVector(float vector1[3], float vector2[3],float *ptr){	
for(int i = 0; i<3; i++){	
*(ptr+i) = vector1[i] + vector2[i];	
  }
} 
void restaVector(float vector1[3],float vector2[3],float*ptr){
for (int i=0; i<3; i++){
*(ptr+i)= vector1[i] - vector2[i];
 }
}
int productoPunto(float vector1[3], float vector2[3]){
float sumapp; 
 sumapp= (vector1[0]*vector2[0]) + (vector1[1]*vector2[1]) + (vector1[2]*vector2[2]);
 printf("El valor del producto punto es: %f\n",sumapp);
}
void productoCruz (float vector1[3], float vector2[3], float*ptr){
*ptr=(vector1[1]*vector2[2])+(vector1[2]*vector2[1]);
*(ptr+1)=(vector1[2]*vector2[0])+(vector1[0]*vector2[2]);
*(ptr+2)=(vector1[0]*vector2[1])+(vector1[1]*vector2[0]);
}
float norma (float myVector[],int size){	
float suma=0.0;
float C;
for(int i = 0; i<size; i++){		
   suma += myVector[i]*myVector[i];}
C=sqrt(suma);
  printf("La norma del Vector es: %f\n",C);}
float vectorUnitario(float vector[], int size, float*ptr){
float n=norma(vector,3);
for(int i=0;i<size;i++){
 *(ptr+i)=vector[i]/n;}}