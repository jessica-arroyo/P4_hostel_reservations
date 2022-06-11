

// Puse las operaciones que estaban en el DCD, pero capaz que hay más.
//A las operaciones que no aparecía como que devolvieran algo, les puse void.
//Vamos a usar -> o . (dinámico o estático)? Creo que dinámico.


//Ver los include a poner. Los .hpp a incluír.

#ifndef HOSTAL_H
#define HOSTAL_H

#include <map>
//#include <set> si usamos.
#include <iterator>
#include <iostream>

class Hostal {
  private:
    string nombre ;
    string direccion ;
    int telefono ;
    float calificacionPromedio ;
    map<int , Habitacion *> habitaciones;
    map<int , Reserva *> reservas;
    std::map<std::string , Empleado *> empleados;
    std::map<std::string , Huesped *> huespedes;
    
  
  public:
    Hostal(std::string nombre, std::string direccion, int telefono,0) ; //empieza con calificacionPromedio=0.
    ~Hostal() ;
    string getNombre() ;
    string getDireccion() ;
    int getTelefono() ;
    int getCalificacionPromedio() ;
    void setNombre(string nom) ;
    void setDireccion(string direc) ;
    void setTelefono(int tel) ;
    void setCalPromedio(int calProm) ;
    
  
   /* bool exists(string hostal.nombre) ; //esto no se debe de poder: debería ser std::string hostal.getNombre() 
 void create(DtHostalInicial hostal) ; //el constructor sería este,el de arriba, o ambos? Aparte creo que es DtHostal normal.
 */
 //veo que siempre le pasan una referencia al objeto, en vez del objeto en sí.
 void add(Hostal nuevo) ;
 DtHostal getDtHostal() ;
 Hostal find(std::string nombreHostal) ; 
 void linkeohos(Habitacion hab) ;
 void asignarEmpleadoAHostal(Empleado emp) ;
 void accesoHostal() ;
 void agregarReservaAlHostal(Reserva res) ;
 void entrarRes() ;
 // void obtenerReservas() ; es un void? No debería devolver un conjunto o un map más bien de Reserva?
 //string getNombreHostal() ; // es el mismo de arriba?
 //void obtenerEstadiasdelHostal(std::string emailHuesped) ; verificar que esta efectivamente no devuelva nada (por lo de obtener pero no devuelve nada).
 
 
}; 

#endif

