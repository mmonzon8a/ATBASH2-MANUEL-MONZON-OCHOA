#include <stdio.h>
 
const char fin = '.';
typedef char string[1000]; //La cadena y su numero de cadenas
 
void ChangeLet (char & let){ // Funcion que hace posible el cifrado de la palabra
  if (let=='a'){ //En funcion con IF convierte la letra ingresada por la letra "cifrada"
    let='z';
  }
  else if (let=='b'){
    let='y';
  }
  else if (let=='c'){
    let='x';
  }
  else if (let=='d'){
    let='w';
  }
  else if (let=='e'){
    let='v';
  }
  else if (let=='f'){
    let='u';
  }
  else if (let=='g'){
    let='t';
  }
  else if (let=='h'){
    let='s';
  }
  else if (let=='i'){
    let='r';
  }
  else if (let=='j'){
    let='q';
  }
  else if (let=='k'){
    let='p';
  }
  else if (let=='l'){
    let='o';
  }
  else if (let=='m'){
    let='n';
  }
  else if (let=='n'){
    let='n';
  }
  else if (let=='ñ'){
    let='m';
  }
  else if (let=='o'){
    let='l';
  }
  else if (let=='p'){
    let='k';
  }
  else if (let=='q'){
    let='j';
  }
  else if (let=='r'){
    let='i';
  }
  else if (let=='s'){
    let='h';
  }
  else if (let=='t'){
    let='g';
  }
  else if (let=='u'){
    let='f';
  }
  else if (let=='v'){
    let='e';
  }
  else if (let=='w'){
    let='d';
  }
  else if (let=='x'){
    let='c';
  }
  else if (let=='y'){
    let='b';
  }
  else if (let=='z'){
    let='a';
  }
  else if (let=='A'){
    let='Z';
  }
  else if (let=='B'){
    let='Y';
  }
  else if (let=='C'){
    let='X';
  }
  else if (let=='D'){
    let='W';
  }
  else if (let=='E'){
    let='V';
  }
  else if (let=='F'){
    let='U';
  }
  else if (let=='G'){
    let='T';
  }
  else if (let=='H'){
    let='S';
  }
  else if (let=='I'){
    let='R';
  }
  else if (let=='J'){
    let='Q';
  }
  else if (let=='K'){
    let='P';
  }
  else if (let=='L'){
    let='O';
  }
  else if (let=='M'){
    let='Ñ';
  }
  else if (let=='N'){
    let='N';
  }
  else if (let=='Ñ'){
    let='M';
  }
  else if (let=='O'){
    let='L';
  }
  else if (let=='P'){
    let='K';
  }
  else if (let=='Q'){
    let='J';
  }
  else if (let=='R'){
    let='I';
  }
  else if (let=='S'){
    let='H';
  }
  else if (let=='T'){
    let='G';
  }
  else if (let=='U'){
    let='F';
  }
  else if (let=='V'){
    let='E';
  }
  else if (let=='W'){
    let='D';
  }
  else if (let=='X'){
    let='C';
  }
  else if (let=='Y'){
    let='B';
  }
  else if (let=='Z'){
    let='A';
  }
}
 
int main(){ //Inicio del programa
 
  int k = 0; //Iniciacion y declaracion de la variable que convierte a la palabra
 
  string texto; //Declaracion de la variable para la palabra ingresada
 
  printf("A continuacion introduce la palabra a descifrar: "); //Solicitud de ingresar el texto
  scanf("%[^\n]",&texto);
 
  while (texto[k] != fin){ // Ciclo que hace posible  la conversion de las letras del texto
    ChangeLet(texto[k]);
    k++;
  }
 
  printf("La palabra descifrada es: %s",texto); //Immpresion de la palabra cifrada
 
}
 
