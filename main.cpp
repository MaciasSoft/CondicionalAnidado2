#include <iostream>

using namespace std;

int main()
{
    int numLlantas,descuento,totCompra;
    int precioUnitario;
    char c='$';

    cout <<"VENTA DE LLANTAS (Precio Unitario: $11000)"<<endl<<endl;
    cout << "Introduzca el numero de llantas que desea comprar: ";
    cin >>numLlantas;

    if (numLlantas>0 && numLlantas<5)
    {
        precioUnitario=300;
        cout << "el precio por llanta es: "<<c<<precioUnitario<<endl;
        totCompra=numLlantas*precioUnitario;
        cout << "El precio total por el numero de llantas compradas es: "<<c<<totCompra<<endl;

    }
    else
    {
        if (numLlantas>=5 && numLlantas<=10)
        {
            precioUnitario=250;
            cout << "el precio por llanta es: "<<c<<precioUnitario<<endl;
            totCompra=numLlantas*precioUnitario;
            cout << "El precio total por el numero de llantas compradas es: "<<c<<totCompra<<endl;
        }
        else
        {
            if(numLlantas>0)
            {
                precioUnitario=200;
                cout << "el precio por llanta es: "<<c<<precioUnitario<<endl;
                totCompra=numLlantas*precioUnitario;
                cout << "El precio total por el numero de llantas compradas es: "<<c<<totCompra<<endl;
            }
            else{cout<<"Valor Incorrecto"<<endl;}
        }
    }


    return 0;
}
