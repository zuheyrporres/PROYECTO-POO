#include "DATOS.cpp"
#include <iostram>
using namespace std;
 
 class Cliente : Persona {
 
 	private : string nit; 
 	
 
 	public : 
 	cliente () { 
	 }
	 
	Cliente( string nom, string ape, string dir, int tel, string n) : Persona(nom,ape,dir,tel){
	nit = n;
	}

  void setNit(string n){nit = n;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setTelefono(int tel){telefono = tel;}
  
  string getNit(){	return nit;}
  string getNombres(){	return nombres;}
  string getApellidos(){	return apellidos;}
  string getDireccion(){	return direccion;}
  int getTelefono(){	return telefono;} 
 
	void mostrar(){
	cout<<"______________________"<<endl;
	cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
}
  
  
 };
