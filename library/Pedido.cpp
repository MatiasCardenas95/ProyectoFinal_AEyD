#include "../library/Pedido.hpp"

Pedido::Pedido(Cliente *_cliente,Articulo *_articulo): cliente(_cliente),articulo(_articulo)
{   
    cout << "Se construyo el Pedido" << endl;
}

Pedido::~Pedido()
{
    cout << "Se destruyo el pedido" << endl;
}

string Pedido::getNombreCliente()
{
    return cliente->getNombre();
}

string Pedido::getApellidoCliente()
{
    return cliente->getApellido();
}

string Pedido::getNombreArticulo()
{
    return articulo->getNombre();
}

float Pedido::getPrecioArticulo()
{
    return articulo->getPrecio();
}



