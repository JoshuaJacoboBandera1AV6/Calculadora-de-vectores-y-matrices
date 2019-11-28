#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream>

void leerMatrix(int*ptr,int sizef,int sizec);
void printMatrix (int*ptr,int sizef,int sizec);
void sumaMatrix(int matrix1[3][3], int matrix2[3][3], int*ptr);
void restaMatrix(int matrix1[3][3], int matrix2[3][3], int*ptr);
void productoMatrix(int m1[3][3],int m2[3][3],int*ptr);

int main(){
int a[3][3];
int b[3][3];
int c[3][3];
int p[3][3]= {{1,3,4},{1,3,6},{1,2,3}};
int *ptrP=&p[0][0];
int *ptrC=&c[0][0];
int *ptrA=&a[0][0];
int *ptrB=&b[0][0];
int opt;
char repet;
printf("Ejemplo de una matriz:\n");
printMatrix(ptrP,3,3);
do{
printf("Calculadora de matrices\n");
printf("Menu\n");
printf("Elige una operacion a realizar:\n");
printf("1-Suma\n");
printf("2-Resta\n");
printf("3-Multiplicacion\n");
scanf("%d",&opt);
printf("Introduce los valores de la matriz A:\n");
 leerMatrix(ptrA,3,3);
 printMatrix(ptrA,3,3);
printf("Introduce los valores de la matriz B:\n");
 leerMatrix(ptrB,3,3);
 printMatrix(ptrB,3,3);
switch(opt){
 case 1:
 sumaMatrix(a,b,ptrC);
 break;
 case 2:
 restaMatrix(a,b,ptrC);
 break;
 case 3:
 productoMatrix(a,b,ptrC);
 break;
 default:
 printf("Elige una opcion:\n");
 }
printf("La matriz resultante o matriz C es:\n");
printMatrix(ptrC,3,3);
printf("Desea realizar otra operacion?   Si    No\n");
scanf("%s",&repet);
 } while(repet=='s'||repet=='S');
}

void leerMatrix (int*ptr,int sizef,int sizec){
for(int i=0; i<sizef; i++){
 for(int j=0; j<sizec; j++){
  printf("Matriz[%d][%d]:",i,j);
  scanf("%d",ptr+j+3*i);
  } 
 }
}

void printMatrix (int*ptr,int sizef,int sizec){
for(int i=0; i<sizef; i++){
 for(int j=0; j<sizec; j++){
  printf("%d",*(ptr+j+3*i));
  }
printf("\n");
 }
}

void sumaMatrix(int matrix1[3][3], int matrix2[3][3], int*ptr){
 for(int i=0; i<3; i++){
  for(int j=0; j<3; j++){
   *(ptr+j+(3*i))= matrix1[i][j]+matrix2[i][j];
  }
 }
}

void restaMatrix(int matrix1[3][3], int matrix2[3][3], int*ptr){
 for(int i=0; i<3; i++){
  for(int j=0; j<3; j++){
   *(ptr+j+(3*i))= matrix1[i][j]-matrix2[i][j];
  }
 }
}

void productoMatrix(int m1[3][3],int m2[3][3],int*ptr){
 *(ptr)=(m1[0][0]*m2[0][0])+(m1[0][1]*m2[1][0])+(m1[0][2]*m2[2][0]);
 *(ptr+1)=(m1[0][0]*m2[0][1])+(m1[0][1]*m2[1][1])+(m1[0][2]*m2[2][1]);
 *(ptr+2)=(m1[0][0]*m2[0][2])+(m1[0][1]*m2[1][2])+(m1[0][2]*m2[2][2]);
 *(ptr+3)=(m1[1][0]*m2[0][0])+(m1[1][1]*m2[1][0])+(m1[1][2]*m2[2][0]);
 *(ptr+4)=(m1[1][0]*m2[0][1])+(m1[1][1]*m2[1][1])+(m1[1][2]*m2[2][1]);
 *(ptr+5)=(m1[1][0]*m2[0][2])+(m1[1][1]*m2[1][2])+(m1[1][2]*m2[2][2]);
 *(ptr+6)=(m1[2][0]*m2[0][0])+(m1[2][1]*m2[1][0])+(m1[2][2]*m2[2][0]);
 *(ptr+7)=(m1[2][0]*m2[0][1])+(m1[2][1]*m2[1][1])+(m1[2][2]*m2[2][1]);
 *(ptr+8)=(m1[2][0]*m2[0][2])+(m1[2][1]*m2[1][2])+(m1[2][2]*m2[2][2]);
}