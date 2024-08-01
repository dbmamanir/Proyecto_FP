#include <iostream>
#include <cstdlib>
using namespace std;

int main (){
    int op; //opcion
    do {
        system ("cls");
        cout<<"\tOPCIONES PARA EL INVENTARIADO DEL KIT LEGO MINDSTORM \n";
        cout<<"1. CANTIDAD DE PIEZAS POR CADA ESPECIE\n";
        cout<<"2. INSERTAR ALGUNA OBSERVACION DEL KIT\n";
        cout<<"3. INSERTAR OBSERVACION DE ALGUNA PIEZA DEL KIT\n";
        cout<<"4. BUSCAR PIEZA Y MOSTRAR SI TIENE ALGUNA OBSERVACION\n"; //falta de piezas, o si algo está roto
        cout<<"5. ...\n";
        cout<<"6. Mostrar todas las tarea\n"; //ordenar por fecha o estado
        cout<<"0. Salir\n";
        cout<<"Seleccione una opcion:";
        cin>>op;
    } while (op != 0);
    return 0;
}
