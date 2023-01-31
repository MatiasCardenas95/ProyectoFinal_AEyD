#include <iostream>
#include "../library/Empleado.hpp"

#include <vector>

using namespace std;

int main()
{
    Empleado* empleado = new Empleado();

    Cliente* cliente = new Cliente();
    
    cliente->setNombre("Matias");
    cliente->setApellido("Cardenas");

    Articulo * articulo[2];

    articulo [0] = new Articulo ();
    articulo [1] = new Articulo ();
    articulo [2] = new Articulo ();

    articulo [0]->setNombre("Camisuli");
    articulo [0]->setPrecio(200);
    articulo [1]->setNombre("Gorraconbigote");
    articulo [1]->setPrecio(500);
    articulo [2]->setNombre("LenteSol");
    articulo [2]->setPrecio(500);
 
    Pedido* pedido[2];

    pedido [0] = new Pedido(cliente,articulo[0] );
    pedido [1] = new Pedido(cliente,articulo[1] );
    pedido [2] = new Pedido(cliente,articulo[2] );

    for (int i=0; i < 3; i++)
    {   
        cout << "\n" << endl;
        empleado->MostrarPedido(pedido[i]);
        
    }  

    for(int i=0;i<3;i++)
    {
        delete pedido[i];
        delete articulo[i];
    }

    delete cliente;
    delete empleado;
    
    return 0;
}
