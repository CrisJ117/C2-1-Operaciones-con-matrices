//================================
//= PROGRAMA: OPERACIONES BASICAS=
//= AUTO : STALIN FRANCIS        =
//= VESION: 1.02                 =
//================================
#include<iostream>
#include<stdlib.h>
using namespace std;
#include "colaborador1.h" // Genesi Simisterra
#include "colaborador2.h" // Kevin Antonio Tapuy Cañola
#include "colaborador3.h" // EN ESTE ARCHIVO VA LA FUNCION DE restar ()
#incluye "colaborador4.h" // Clarisa Ortiz Castillo
#include "colaborador5.h" // Cristopher Justyn Tigua Vivero

void mostrar(float (*r)[5])
{
    cout<<endl<<endl;
        for(int i=0;i<5;i++){
	    for(int j=0;j<5;j++){
    cout<<r[i][j]<<" ";
	}
    cout<<"\n";
	}

}

//FUCION PRINCIPAL
int main()
{
	int op,flag, cantidad;
	float matriz1[5][5],matriz2[5][5],resultado[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
	do{
	system("clear");
	cout<<"         ====================== MENU ==========================="<<endl;
	cout<<"         ==       OPERACIONES CON MATRICES EN 2 DIMENSIO      =="<<endl;
	cout<<"         == 1.- Ingresar los valores de las matrices \n       =="<<endl;
	cout<<"         == 2.- Obtener el producto de las dos matrices \n    =="<<endl;
	cout<<"         == 3.- Mostrar la potencias 2 de la primera matriz \n=="<<endl; 
	cout<<"         == 4.- Mostrar la transpuesta de la primera matriz \n=="<<endl;
	cout<<"         == 5.- Calcular la media y varianza y compararlas \n =="<<endl;
	cout<<"         == 0.- Salir del menu \n                             =="<<endl;
	cout<<"         ======================================================="<<endl;
        cout<<" Ingrese una opción : "; cin>>op;
	switch(op){
		case 1:
void ingresar() {
	 float matriz[5][5];
	 
	 
	cout<<"\=======INGRESAR LOS VALORES DE LAS MATRICES=======\n";
	 float a, ingresar;
      for(int i = 0; i < 5; i++){
    cout << "\n Ingresar valor " << i + 1 << "****:\n";
      for(int j = 0; j < 5; j++){
	cout << "\n posicion " << i + 1 << "****:\n";
	cin >> a;
    matriz[i][j] = a;
	}
	ingresar(matriz1,matriz2);
	mostrar(matriz1);
	mostrar(matriz2);
		break;
	    case 2:
	// ESTA FUNCION PERMITE CALCULAR EL PRODUCTO ENTRE DOS MATRICES.
void producto(float (*m1)[5], float (*m2)[5], float (*r)[5]){
	
	
	cout<<"\========OBTENER EL PRUDUCTO DE DOS MATRIZES========\n";

      for(int i=0; i<5; ++i){

      for(int j=0; j<5; ++j){
      r[i] [j] = 0;
    }
    }
      for(int i=0; i<5; ++ i){
      for(int j=0; j<=5; ++j){
      for(int z=0; z<5; ++z)
      r[i][j] += m1[i][z] * m2[z][j];
    }
	
    }	
	producto(matriz1,matriz2,resultado);
	mostrar(resultado);
		break;
	producto(matriz1,matriz2,resultado);
	mostrar(resultado);
		break;
		case 3:
	// ESTA FUNCION PERMITE OBTENER LA POTENCIA 2 DE UNA MATRIZ.
	
	potencia(matriz1,2,resultado);
	mostrar(resultado);
		break;
		case 4:
	// ESTA FUNCION CALCULA LA TRANSPUEST DE LA PRIMERA MATRIZ
void transpuesta(float (*m1)[5], float (*r)[5]){  


    cout<<"\======OBTENER LA TRASPUESTA DE LA PRIMERA MATRIZ======\n"; 

      for(int m=0;m<5;m++){
      for(int n=0;n<5;n++){
    
       r[n][m]=m1[n][m];
    
    cout<<r[n][m]<<" ";
    }
    cout<<"\n"; 
    } 

    }
	transpuesta(matriz1,resultado);
	mostrar(resultado);
		break;
		case 5:
	//CCALCULA Y MUESTRA LA MADIA Y VARIANZA DE LAS DOS MATRICES
void mediayvarianza(float (*m1)[5], float (*m2)[]){

	
    cout<<"\=============CALCULAR LA MEDIA Y VARIANZA=============\n";
    cout<<"\nCuantos numeros son? ";
    cin>>cantidad;
     
    sumatoria = new int[cantidad];
     
      for(int i= 0;i < cantidad;i++)
    {
    cout<<"Escribe el valor "<<i+1<<":";
    cin>>sumatoria[i];
    }
    
      for(int e = 0;e < cantidad;e++)
    {
    media = media + sumatoria[e];
    }
    
    media = media / cantidad;
    
    system("cls");
    
    cout<<"La Media es: ";
    cout<<media<<endl;
    
      for(int k = 0;k < cantidad;k++)
    {
    varianza = varianza + (((sumatoria[k])-(media))*((sumatoria[k])-(media)));
         
    }
    }
    varianza = varianza / cantidad;d
    cout<<"la varianza es: ";
    cout<<varianza<<endl;
    cout<<"La desviacion estandar es +/-: ";
    cout<<sqrt(varianza);
    
    delete[] sumatoria;
		break;
	}
		  if(op!=0){
	cout << "Opcion no permitida !\n" <<  "Press Enter to continue\n";
    // pause the program until user input
	        flag=cin.ignore().get();
	}		  
	      if(op==0){
    cout<<"Salimos del Sistema: "<<endl;

	}
	}while(op!=0);

	return(0);

}