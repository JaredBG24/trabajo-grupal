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
    
    //mostrar matriz
    
    return 0;
