#include <iostream>
#include <clocale>

using namespace std;

int main(){
    setlocale(LC_ALL,"");

//Declaración de variables
    int producto, cantidad;
    float subtotal, total;
    char otra;

//Se muestra el menú de opciones para que el usuario haga una elección
    cout <<"Productos de almacen."<<endl;
    cout<< "\n -----MENU-----";
    cout<< "\n Producto 1 : $2.98";
    cout<< "\n Producto 2 : $4.50";
    cout<< "\n Producto 3 : $9.98";
    cout<< "\n Producto 4 : $4.49";
    cout<< "\n Producto 5 : $6.87 \n";


//Primero se le pide al usuario que ingrese el número del producto que desea
    do {
        cout<< "\n Elija el número de producto: \n";
        cin>> producto;

/*Si coincide con alguna de las opciones, se le pedira la cantidad del producto que quiere. Se multiplica el
precio de ese producto por la cantidad para obtener el subtotal el cual se muestra inmediatamente*/
         switch (producto) {
            case 1: cout << "\n Cantidad del producto: \n"; cin>> cantidad;
            subtotal=2.98*cantidad;
            cout << "El subtotal es: \n $"<<subtotal<<endl;
            break;
            case 2: cout << "\n Cantidad del producto: \n"; cin>> cantidad;
            subtotal=4.50*cantidad;
             cout << "El subtotal es: \n $"<<subtotal<<endl;
            break;
            case 3: cout << "\n Cantidad del producto: \n"; cin>> cantidad;
            subtotal=9.98*cantidad;
             cout << "El subtotal es: \n $"<<subtotal<<endl;
            break;
            case 4: cout << "\n Cantidad del producto: \n"; cin>> cantidad;
            subtotal=4.49*cantidad;
             cout << "El subtotal es: \n $"<<subtotal<<endl;
            break;
            case 5: cout << "\n Cantidad del producto: \n"; cin>> cantidad;
            subtotal=6.87*cantidad;
             cout << "El subtotal es: \n "<<subtotal<<endl;
            break;

/*Si el número introducido no coincide, alerta que la opciónno es valida, entonces, se ejecuta la siguiente
instrucción*/
            default: cout<<"\n Opción no valida \n";
            }

 /*En la variable total se va guardando el subtotal de los productos elegidos; se le pregunta al usuario si desea
 realizar otra compra, si es así, se repite el ciclo*/
    total=subtotal+total;
     cout <<" ¿Desea realizar otra compra? \n s=si  n=no \n"; cin >>otra;
    }
    while ( otra=='s');

//Si ya no desea realizar otra compra, se muestra el valor total
    cout<< "El total es: \n $"<<total<<endl;

    return 0;
}
