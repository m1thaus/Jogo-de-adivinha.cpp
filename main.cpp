#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Inicializa a semente do gerador de números aleatórios
    int numeroSecreto = std::rand() % 100 + 1; // Número aleatório entre 1 e 100
    int tentativa;
    int tentativas = 0;

    std::cout << "\n=== Jogo de Adivinhação ===\n";
    std::cout << "Tente adivinhar o número entre 1 e 100!\n";

    do {
        std::cout << "Digite seu palpite: ";
        std::cin >> tentativa;
        tentativas++;

        if (tentativa > numeroSecreto) {
            std::cout << "Muito alto! Tente novamente.\n";
        } else if (tentativa < numeroSecreto) {
            std::cout << "Muito baixo! Tente novamente.\n";
        } else {
            std::cout << "Parabéns! Você acertou em " << tentativas << " tentativas.\n";
        }
    } while (tentativa != numeroSecreto);

    return 0;
}
