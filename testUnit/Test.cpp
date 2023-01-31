#include "../ext/googletest/googletest/include/gtest/gtest.h"

#include "../library/Articulo.hpp"
#include "../library/Cliente.hpp"
#include "../library/Empleado.hpp"


//Test Articulo

TEST(Articulo, PruebaPrecio)
{
    Articulo * articuloTest = new Articulo();

    articuloTest->setPrecio(150);

    std::cout << "***" << articuloTest->getPrecio() << "***" << std::endl ;


    EXPECT_EQ(150,articuloTest->getPrecio());

}

//Test Cliente

TEST(Cliente, PruebaNombre)
{
    Cliente * clienteTest = new Cliente();

    clienteTest->setNombre("Mellamotest");

    std::cout << "***" << clienteTest->getNombre() << "***" << std::endl ;


    EXPECT_EQ("Mellamotest",clienteTest->getNombre());
}

//Test Pedido

TEST(Pedido, PruebaPedido)
{
    Cliente* clienteTest2= new Cliente();
    Articulo* articuloTest2 = new Articulo();

    clienteTest2->setApellido("ClienteApellidoTest");

    Pedido * pedidoTest = new Pedido(clienteTest2,articuloTest2);

    std::cout << "***" << pedidoTest->getApellidoCliente() << "***" << std::endl ;


    EXPECT_EQ("ClienteApellidoTest",pedidoTest->getApellidoCliente());
}



