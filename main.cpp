#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;
int menu();
void EJERCICIO1();
void EJERCICIO2();
void EJERCICIO3();
void llenarArr(int a[], int b);
void ordenar(int a[], int b);
void imprimir(int a[], int b);
void ingresar(int a[]);
int busqueda (int a[], int n, int dato);
void meses(int i);
int arreglo[6], arreglo2[6], opcion;
void menu1();
void ingresar1();
void mostrar();
void mostrar2();
void cambios();
int main() {
 int opcion;
 do
 {
 opcion = menu();
 switch (opcion)
 {
 case 1:
 {
 EJERCICIO1();
 break;
 }
 case 2:
 {
 EJERCICIO2();
 break;
 }
 case 3:
 {
 EJERCICIO3();
 break;
 }
 }
 } while (opcion != 4);
 cout << "\n\t\t\t\t-------- FIN DEL TRABAJO GRUPAL--------" << endl;
 return 0;
}
int menu()
{
 int op = 0;
 while ((op < 1) || (op > 4))
 {
cout << "\n\t\t\tTRABAJO EN GRUPO" << endl;
cout << "\n\t\tALGORITMOS Y ESTRUCTURAS DE DATOS" << endl;
cout << "\nSELECCIONE UNA OPCIÓN DEL MENÚ" << endl;
cout<<endl;
 cout << "1. INTERCAMBIAR POSICIONES DE UN VECTOR" << endl;
 cout << "2. ORDENAMIENTO DE UN VECTOR" << endl;
 cout << "3. CUENTA DE AHORROS VIRTUAL DEL BANCO DE PICHINCHA" << endl;
 cout << "4. SALIR" << endl;
 cout << "Eliga una opción: ";
 cin >> op;
 if ((op < 1) || (op > 4))
 {
 cout<<"\nOpción incorrecta, ingrese de nuevo."<<endl;
}

 }
 return op;
}
void EJERCICIO1()
{
ingresar1();
mostrar();
 mostrar2();
}
void EJERCICIO2()
{
int arr[100];
int tam;
cout << "Ingrese el tamaño del arreglo: ";
cin >> tam;
llenarArr(arr, tam);
}
void EJERCICIO3()
{
int dato;
bool ingresa =false;

 int arreglo[12];
 cout<< "\t BIENVENIDO AL BANCO PICHINCHA \n";
 ingresar(arreglo);
 }
void llenarArr(int a[], int b)
{
int x=1;
for (int i = 0; i <b; i++)
{
cout << "Ingrese el valor " << x <<": ";
cin >> a[i];
x++;
}
ordenar(a, b);
}
void ordenar(int a[], int b)
{
int aux;
for (int i = 0; i < b; i++)
{
for (int c = i+1; c <b ; c++)
{
if (a[c]<a[i])
{
aux = a[c];
a[c] = a[i];
a[i] = aux;
}
}
}
imprimir(a, b);
}
void imprimir(int a[], int b)
{
  ofstream ordenamiento;
  ordenamiento.open("ordenamiento.txt",ios::out);
cout << endl;
cout << "Elementos ordenados: " << endl;
ordenamiento << "Elementos ordenados: " << endl;

for (int i = 0; i < b; i++)
{
cout << a[i]<< endl;
ordenamiento << a[i]<< endl;
}
ordenamiento.close();
}
void ingresar(int a[])
{
  ofstream cuenta;
  cuenta.open("cuenta.txt",ios::out);
  int dato;
bool ingresa =false;
 double cantidad;
 int i,j=1;
 for (i=0;i<12;i++)
 {
 do
 {
 cout<< "Ingrese la cantidad de dinero del mes de "<<j<< " : ";
 cuenta<< "Ingrese la cantidad de dinero del mes de "<<j<< " : ";
 cin >> cantidad;
 cuenta << cantidad << endl;
 a [i] = cantidad;
 }while(cantidad<0);
 j++;
 }
  do{
   cout << "Ingrese la cantidad a buscar(0 para salir) : ";
   cin >> dato;
   cuenta << "Ingrese la cantidad a buscar(0 para salir) : ";
   cuenta<< dato << endl;
   if(dato==0)
   {
     ingresa=true;
   }

 if (busqueda(a, 12, dato) == -1){
 cout << "Cantidad de dinero ingresada no encontrada " << endl;
 cuenta << "Cantidad de dinero ingresada no encontrada " << endl;
 }
 else {
 cout << "Cantidad de dinero encontrada en el mes "<< busqueda(a, 12, dato) << endl;
 cuenta << "Cantidad de dinero encontrada en el mes "<< busqueda(a, 12, dato) << endl;

 }
 } while(ingresa== false);
 cuenta.close();
}
int busqueda (int a[], int n, int dato)
{
 for (int i=0 ; i<n; i++)
 {
 if (a[i] == dato)
 {

 return i+1;
 }
 }
 return -1;
}
void meses(int i)
{

 switch (i){
 case 1:
 cout << "Enero";
 break;
 case 2:
 cout << "Febrero";
 break;
 case 3:
 cout << "Marzo";
 break;
 case 44:
 cout << "Abril";
 break;
 case 5:
 cout << "Mayo";
 break;
 case 6:
 cout << "Junio";
 break;
 case 7:
 cout << "Julio";
 break;
 case 8:
 cout << "Agosto";
 break;
 case 9:
 cout << "Septiembre";
 break;
 case 10:
 cout << "Octubre";
 break;
 case 11:
 cout << "Noviembre";
 break;
 case 12:
 cout << "Diciembre";
 break;
 }
}
void ingresar1()
{

 for(int i=0; i<6; i++)
 {
 cout<<"Ingresa el digito en la posicion["<<i<<"]: ";
 cin>>arreglo[i];
 }
}
void mostrar()
{
 cout<<"Los digitos en el vector:\n{";
 for(int i=0; i<6; i++)
 {
 cout<<arreglo[i]<<", ";
 }
 cout<<"}";
}
void mostrar2()
{
  ofstream intercambio;
  intercambio.open("intercambiar.txt", ios::out);
 cout<<"\nLos digitos en el vector invertido:\n{";
 intercambio<<"\nLos digitos en el vector invertido:\n{";
 for(int i=5; i>=0; i--)
 {
 cout<<arreglo[i]<<", ";
 intercambio<<arreglo[i]<<", ";
 }
 cout<<"}";
 intercambio.close();
}