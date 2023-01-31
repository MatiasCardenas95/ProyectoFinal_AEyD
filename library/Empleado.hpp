#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <iostream>
#include "../library/Pedido.hpp"

using namespace std;

class Empleado 
{
    public: 
        void MostrarPedido(Pedido* pedido);
        
        Empleado();
        ~Empleado();     
};
#endif