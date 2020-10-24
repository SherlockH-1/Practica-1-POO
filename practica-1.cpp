#include <iostream>
#include <clocale> //Biblioteca para la configuración regional
#include <cctype>
using namespace std;

int main(){
    setlocale(LC_ALL,""); //Establece la configuración regional

//Declaración de variables
    int producto{};
    int cantidad{};
    float subtotal;
    float total{};
    char otra{};

//Se muestra el menú de opciones para que el usuario haga una elección
    cout << "PRODUCTOS DE ALMACÉN.\n"
    "\n -------MENU-------"
    "\n Producto 1 : $2.98"
    "\n Producto 2 : $4.50"
    "\n Producto 3 : $9.98"
    "\n Producto 4 : $4.49"
    "\n Producto 5 : $6.87 \n" << endl;

//Primero se le pide al usuario que ingrese el número del producto que desea
    do {
        cout << "Escriba el número de producto: ";
        cin >> producto;
/*Si coincide con alguna de las opciones, se le pedira la cantidad del producto que quiere. Se multiplica el
precio de ese producto por la cantidad para obtener el subtotal el cual se muestra inmediatamente*/
    switch (producto) {
        case 1: cout << "Cantidad del producto: "; cin >> cantidad;
                subtotal= 2.98 * cantidad;
                cout << "El subtotal es: $" << subtotal << endl;
            break;
        case 2: cout << "Cantidad del producto: "; cin >> cantidad;
                subtotal= 4.50 * cantidad;
                cout << "El subtotal es: $" << subtotal << endl;
            break;
        case 3: cout << "Cantidad del producto: "; cin >> cantidad;
                subtotal = 9.98 * cantidad;
                cout << "El subtotal es: $" <<subtotal << endl;
            break;
        case 4: cout << "Cantidad del producto: "; cin >> cantidad;
                subtotal= 4.49 * cantidad;
                cout << "El subtotal es: $" << subtotal << endl;
            break;
        case 5: cout << "Cantidad del producto: "; cin >> cantidad;
                subtotal= 6.87 * cantidad;
                cout << "El subtotal es: $" <<subtotal<<endl;
            break;
/*Si el número introducido no coincide, alerta que la opciónno es valida, entonces, se ejecuta la siguiente
instrucción*/
        default: cout << "No existe el producto." << endl;
}
 /*En la variable total se va guardando el subtotal de los productos elegidos; se le pregunta al usuario si desea
 realizar otra compra, si es así, se repite el ciclo*/
total = subtotal + total;
 cout << "\n¿Desea realizar otra compra? (s=sí / n=no) \n"; cin >> otra;
}
    while ( tolower(otra) == 's');
//Si ya no desea realizar otra compra, se muestra el valor total
    cout << "El total es: $" << total << endl;
    return 0;
}

