/* Tipos Abstratos e Registros */
#include<stdio.h>

typedef struct data { 
int dia;
 int mes;
 int ano;
 } tData;
 
typedef struct periodo {
 tData inicio;
 tData fim;
 int numDias;
 } tPeriodo;
 
tPeriodo p = { { 1, 1, 2012},
 { 1, 1, 2013},
 365 };
 
struct periodo q;

int main() {
printf("Tipos Abstratos e Registros!!\n");
printf("Periodo p: inicio = %d/%d/%d\ninicio =
 %d/%d/%d\ndias=%d\n",
 p.inicio.dia, p.inicio.mes, p.inicio.ano,
 p.fim.dia, p.fim.mes, p.fim.ano,
 p.numDias );
q.inicio.dia = p.fim.dia;
q.inicio.mes = p.fim.mes;
q.inicio.ano = p.fim.ano;
q.fim.dia = p.inicio.dia;
q.fim.mes = p.inicio.mes;
q.fim.ano = p.inicio.ano;
q.numDias = -365;
printf("Periodo q: inicio = %d/%d/%d\ninicio =
 %d/%d/%d\ndias=%d\n”,
 q.inicio.dia, q.inicio.mes, q.inicio.ano,
 q.fim.dia,q.fim.mes,q.fim.ano,q.numDias);
return 0; }