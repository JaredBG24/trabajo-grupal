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
//suma de matrices Jared Bernal
   for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cout<<mat1[i][j]+mat2[i][j];
	}
	cout<<endl;	
}

    return 0;
