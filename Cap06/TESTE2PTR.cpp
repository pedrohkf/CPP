#include <iostream>
#include <vector>
#include <string>

struct Imagem4K {
    std::string nomeDoArquivo;
    std::vector<int> pixels; 
};

void aplicarFiltroPretoEBranco_RUIM(Imagem4K imagemCopia) {
    std::cout << "Processando a COPIA de " << imagemCopia.nomeDoArquivo << "...\n";
}


void aplicarFiltroPretoEBranco_BOM(Imagem4K* imagemOriginal) {
    std::cout << "Processando a IMAGEM ORIGINAL em " << imagemOriginal->nomeDoArquivo << "...\n";
}

int main() {
    Imagem4K minhaFoto;
    minhaFoto.nomeDoArquivo = "foto_da_praia.jpg";
    minhaFoto.pixels.resize(1000000);

    std::cout << "--- Chamando a funcao RUIM (Sem ponteiro) ---" << std::endl;
    aplicarFiltroPretoEBranco_RUIM(minhaFoto); 

    std::cout << "\n--- Chamando a funcao BOA (Com ponteiro) ---" << std::endl;
    aplicarFiltroPretoEBranco_BOM(&minhaFoto); 

    return 0;
}
