operacionesbasicas
#include<iostream>
using namespace std;
int main(){
    int m,n; //m=fila n=columnas
    cout<<"SUMAR MATRICES"<<endl;
    cout<<"Ingrese numero de filas"<<endl;
    cin>>m;
    cout<<"Ingrese numero de columnas"<<endl;
    cin>>n;
    
    int mat1[m][n] , mat2[m][n];
    cout<<"LLENADO DE LA MATRIZ 1:"<<endl;
    for(int i=0;i<m;i++){
    	for(int j=0;j<n;j++){
    		cout<<"Ingrese numero:";
    		cin>>mat1[i][j];
    	}
    }
    cout<<"\n";
    cout<<"*****************"<<endl;
    cout<<"LLENADO DE MATRIZ 2"<<endl;
    for(int i=0;i<m;i++){
    	for(int j=0;j<n;j++){
    		cout<<"Ingrese numero:";
    		cin>>mat2[i][j];
    	}
    }
    
    //mostrar matriz nahomi alcivar
    
    return 0;
	
cout<<"\n";
cout<<"La matriz 1 es:"<<endl;
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cout<<"Ingrese numero:";
		cin>>mat1[i][j];
	}
}

cout<<"\n";
cout<<"La matriz 2 es:"<<endl;
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cout<<"Ingrese numero:";
		cin>>mat2[i][j];
	}
}
//suma de matrices-Jared Bernal
#include<iostream>

using namespace std;

int main(){
	int c=0, i=0;
float matriz1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float matriz2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float suma[10],resta[10],producto[10],division[10];
	
	cout<<"La suma de las dos matrices es la siguiente: "<<endl;
	for(i=0;i<10;i++){
		suma[i] = matriz1[i] + matriz2[i];
		cout << suma[i]<<endl;
	}
	return 0;
}
	
//division de matrices-Jared Bernal
#include<iostream>
using namespace std;
int main()
{
int i=0;
float matriz1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float matriz2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float suma[10],resta[10],producto[10],division[10];

cout<<"La division de las dos matrices es la siguiente: "<<endl;
	for(i=0;i<10;i++){
		division[i] = matriz1[i] / matriz2[i];
		cout << division[i]<<endl;
	}
	return 0;
}
        //Resta de matrices Anthony Martinez
#include<iostream>

using namespace std;

int main(){
	int c=0, i=0;
float matriz1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float matriz2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float suma[10],resta[10],producto[10],division[10];
	
	cout<<"El resultado de la resta de las dos matrices es el siguiente: "<<endl;
	for(i=0;i<10;i++){
		resta[i] = matriz1[i] - matriz2[i];
		cout << resta[i]<<endl;
	}
	return 0;
}
