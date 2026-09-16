#include <iostream>
#include <string>

// 1. Criamos a estrutura de uma Arma
struct Arma {
    std::string nome;
    int dano;
};

int main() {
    Arma espadaMistica = {"Espada de Bronze", 15};
    Arma escudoDeFerro = {"Escudo Pesado", 5};
    
    Arma* maoDireita = nullptr;

    std::cout << "--- INICIO DO JOGO ---" << std::endl;

    maoDireita = &espadaMistica;
    std::cout << "Voce equipou: " << maoDireita->nome << " (Dano: " << maoDireita->dano << ")" << std::endl;

    std::cout << "\n--- VOCE FOI AO FERREIRO ---" << std::endl;
    espadaMistica.dano = 35;
    std::cout << "O ferreiro melhorou a Espada de Bronze na sua mochila para 35 de dano!" << std::endl;

    std::cout << "\n--- VERIFICANDO A ARMA NA SUA MAO ---" << std::endl;
    std::cout << "Arma na mao: " << maoDireita->nome << " (Novo Dano: " << maoDireita->dano << ")" << std::endl;

    return 0;
}
