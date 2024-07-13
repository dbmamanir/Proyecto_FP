#include <iostream>
#include <cstdlib>
using namespace std;

int main (){
    int op; //opcion
    do {
        system ("cls");
        cout<<"\tAgenda de Tareas\n";
        cout<<"1. Agregar tarea\n";
        cout<<"2. Eliminar tarea\n";
        cout<<"3. Actualizar tarea\n";
        cout<<"4. Marcar el estado de la tarea\n"; //pendiente, proceso, terminado
        cout<<"5. Buscar tarea\n";
        cout<<"6. Mostrar todas las tarea\n"; //ordenar por fecha o estado
        cout<<"0. Salir\n";
        cout<<"Seleccione una opcion:";
        cin>>op;
    } while (op != 0);
    return 0;
}