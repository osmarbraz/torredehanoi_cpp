#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/**
 * Método recursivo para mostrar a sequência de ações.
 *
 * Exibe a sequência de ações para mover os discos do pino origem para o
 * pino de destino. Utiliza o pino do meio(auxiliar) para realizar as ações.
 *
 * @param numeroDiscos Quantidade de discos a serem movidos.
 * @param origem Nome do pino de origem.
 * @param meio Nome do pino de auxiliar.
 * @param destino Nome do pino de destino.
 */
void jogar(int numeroDiscos, char origem, char meio, char destino) {
    //Se existe somente um disco move da origem para o destino
    if (numeroDiscos == 1) {
        cout << "Disco 1 de " << origem << " para " << destino << endl;
    } else {
        //Move o disco da origem para o meio
        jogar(numeroDiscos - 1, origem, destino, meio);
        //Mostra a ação de mover o disco da origem para o destino
        cout << "Disco " << numeroDiscos << " de " << origem << " para " << destino << endl;
        //Move o disco do meio para o destino
        jogar(numeroDiscos - 1, meio, origem, destino);
    }
}

/**
 * Método principal.
 * 
 * @param argc
 * @param argv
 * @return 
 */
int main(int argc, char** argv) {
    //Leitura da quantidade de discos. O valor default é 3.
    int numeroDiscos = 3;
    cout << "Digite a quantidade de disco da primeira torre: ";
    cin >> numeroDiscos;
    //Exibe a sequência de ações para mover os discos da origem para o destino.
    cout << endl << "Sequência de ações para " << numeroDiscos << " discos:" << endl;
    jogar(numeroDiscos, 'A', 'B', 'C');
    return 0;
}
