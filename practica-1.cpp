#include <iostream>
#include <clocale>

using namespace std;

int main(){
    setlocale(LC_ALL,"");
    int producto, cantidad;
    float subtotal, total;
    char otra;
    cout <<"Productos de almacen."<<endl;
    cout<< "\n -----MENU-----";
    cout<< "\n Producto 1 : $2.98";
    cout<< "\n Producto 2 : $4.50";
    cout<< "\n Producto 3 : $9.98";
    cout<< "\n Producto 4 : $4.49";
    cout<< "\n Producto 5 : $6.87 \n";



    do {
        cout<< "\n Elija el número de producto: \n";
        cin>> producto;
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
            default: cout<<"\n Opción no valida \n";
        }
    total=subtotal+total;
     cout <<" ¿Desea realiar otra compra? \n s=si  n=no \n"; cin >>otra;
    }
    while ( otra=='s');

    cout<< "El total es: \n $"<<total<<endl;

}
