#include "../library/Articulo.hpp"

Articulo::Articulo()
{
    cout << "Se construyo el articulo" << endl;
}

void Articulo::setNombre(string _nombre)
{
    nombre = _nombre;
} 

void Articulo::setPrecio(float _precio )
{
    precio = _precio;
}

string Articulo::getNombre()
{
    return nombre;
} 

float Articulo::getPrecio()
{
    return precio;
} 

Articulo::~Articulo()
{
    cout << "Se destruyo el articulo" << endl;
}