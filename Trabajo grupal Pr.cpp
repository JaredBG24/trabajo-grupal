#include<iostream>
using namespace std;
int main()
{
int i=0;
float matriz1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float matriz2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float suma[10],resta[10],producto[10],division[10];

//Nahomi Alcivar-Mostrar por pantalla

for(int i=0;i<10;i++){
		cout<<matriz1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<10;i++){
		cout<<matriz2[i]<<" ";
	}

//Jared Bernal Galarraga-Suma

cout<<"La suma de las dos matrices es la siguiente: "<<endl;
	for(i=0;i<10;i++){
	suma[i] = matriz1[i] + matriz2[i];
	cout << suma[i]<<endl;
	}

//Anthony Martinez-Resta	
	
cout<<"La resta de las dos matrices es la siguiente: "<<endl;
	for(i=0;i<10;i++){
	resta[i] = matriz1[i] - matriz2[i];
	cout << resta[i]<<endl;
	}
	
//Jeremy Leonardo-Multiplicacion

cout<<"La multiplicación de las dos matrices es la siguiente: "<<endl;
	for(i=0;i<10;i++){
	producto[i] = matriz1[i] * matriz2[i];
	cout << producto[i]<<endl;
	}

//Jared Bernal Galarraga-Division
	
cout<<"La division de las dos matrices es la siguiente: "<<endl;
	for(i=0;i<10;i++){
	division[i] = matriz1[i] / matriz2[i];
	cout << division[i]<<endl;
	}
	return 0;
}
