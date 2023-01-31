#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <iostream>
#include <vector>
#include "../library/Cliente.hpp"
#include "../library/Articulo.hpp"

using namespace std;

class Pedido
{
    private:
        Cliente*cliente;
        Articulo* articulo;

    public:  

        Pedido(Cliente *_cliente,Articulo* _articulo);
        ~Pedido(); 

        string getNombreCliente();
        string getApellidoCliente();
        string getNombreArticulo();
        float getPrecioArticulo();
    
};
#endif