// Lab3-Tres Numeros Aleatorios
// Yan Santiago Diaz/YanSantiago1
// 801-24-7589
// Pagina web separado: www.cpp.sh/

#include <iostream>
#include <cstdlib>

using namespace std;


int main() 
{
// srand(time(0)) para que el rand() genere nuevos numeros cada segundo.
    srand(time(0));

    int Orden1, Orden2, Orden3;

// Tres variables en int diferentes con la ecuacion dada en el guia.
    int numeroAleatorio1 = rand() % (100 - 0 + 1) + 0;
    int numeroAleatorio2 = rand() % (100 - 0 + 1) + 0;
    int numeroAleatorio3 = rand() % (100 - 0 + 1) + 0;

//Uso de if statements para determinar el orden en cada posibilidades de 3 numeros
// En esta, si n.1 es mayor que n.2 y n.3, orden1 es n.1. Dentro del if hay otro if principal hay otro if en la cual identifica si n.2 es mayor que n.3, orden2 es n.2 y orden3 es n.3. "else" seria el resto.
    if (numeroAleatorio1 >= numeroAleatorio2 && numeroAleatorio1 >= numeroAleatorio3) {
    Orden1 = numeroAleatorio1;
    if (numeroAleatorio2 >= numeroAleatorio3) {
        Orden2 = numeroAleatorio2;
        Orden3 = numeroAleatorio3;
    } else  {
        Orden2 = numeroAleatorio3;
        Orden3 = numeroAleatorio2;
    }
 }
//Igualmente aqui las condiciones se escriben igual que arriba solo que con diferentes ordenes.
 else if (numeroAleatorio2 >= numeroAleatorio1 && numeroAleatorio2 >= numeroAleatorio3) {
    Orden1 = numeroAleatorio2;
    if (numeroAleatorio1 >= numeroAleatorio3) {
        Orden2 = numeroAleatorio1;
        Orden3 = numeroAleatorio3;
    } else {
        Orden2 = numeroAleatorio3;
        Orden3 = numeroAleatorio1;
    }
 }
 else {
    Orden1 = numeroAleatorio3;
    if (numeroAleatorio1 >= numeroAleatorio2) {
        Orden2 = numeroAleatorio1;
        Orden3 = numeroAleatorio2;
    } else {
        Orden2 = numeroAleatorio2;
        Orden3 = numeroAleatorio1;
    }
 }
//Para poder desplegar los numeros y luego sus ordenes respecto a las condiciones dadas arriba
    cout << "Numeros aleatorios generados: " << numeroAleatorio1 << ", " << numeroAleatorio2 << ", " << numeroAleatorio3;   
    cout << "\n" << endl;
    cout << "Orden descendiente: " << Orden1 << " >= " << Orden2 << " >= " << Orden3 << endl;
    
    
    return 0;
}
