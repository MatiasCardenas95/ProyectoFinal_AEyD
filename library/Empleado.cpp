#include "../library/Empleado.hpp"

Empleado::Empleado()
{
    cout << "Se construyo el Controlador" << endl;
}

Empleado::~Empleado()
{
    cout <<"Se destruyo el controlador" << endl;
}

void Empleado::MostrarPedido(Pedido* pedido)
{  
        cout << "Nombre cliente: " << pedido->getNombreCliente()<< endl ;
        cout << "Apellido cliente: " << pedido->getApellidoCliente()<< endl;
        cout << "Articulo:" << pedido->getNombreArticulo() << endl;
        cout << "Articulo Precio: " << pedido->getPrecioArticulo() << endl;
}

