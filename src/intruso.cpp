#include "../includes/intruso.hpp"
void Intruso::set_senha_vazada(std::string vazou){
    std::map<char, std::pair<int, int>> codigo;
    std::vector<char> senha;
    for(int i=0;i<5;i++){
        codigo[char('A'+i)] = std::pair<int, int> ((int)vazou[4*i], (int)vazou[4*i+2]);
    }
    for(int i=5;i<11;i++){
        senha.push_back(vazou[4*i]);
    }
    armazenamento.push_back(std::pair<std::map<char, std::pair<int, int>>, std::vector<char>>(codigo, senha));
    
}
std::string Intruso::crack_senha(){
    std::vector<std::vector<std::pair<int, int>>> senha;
    for(int i=0; i<armazenamento.size(); i++){
        for(int j=0; j<6; j++){
            senha[i][j]= (armazenamento[i]).first[(armazenamento[i]).second[j]];
        }
    }
    
}