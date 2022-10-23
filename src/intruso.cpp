#include "../includes/intruso.hpp"
void Intruso::set_senha_vazada(std::string vazou){
    std::map<char, std::pair<char, char>> codigo;
    std::vector<char> senha;
    for(int i=0;i<5;i++){
        codigo[char('A'+i)] = std::pair<char, char> (vazou[4*i],vazou[4*i+2]);
    }
    for(int i=5;i<11;i++){
        senha.push_back(vazou[4*i]);
    }
    armazenamento.push_back(std::pair<std::map<char, std::pair<char, char>>, std::vector<char>>(codigo, senha));
    
}
std::string Intruso::crack_senha(){
    std::pair<char, char> senha[10][10];
    std::vector<char> resultado;
    std::string retorno;
    for(int i=0; i<armazenamento.size(); i++){
        for(int j=0; j<6; j++){
            senha[i][j]= this->armazenamento[i].first[(this->armazenamento[i]).second[j]];
        }
    }std::cout<<"Saiu Transfeiru para o vetor"<<std::endl;
    for(int i=0; i<6; i++){
        bool verifica = true;
        for(int j=0; j<armazenamento.size()-1; j++){
            if(senha[1][i].first == senha[j+1][i].first || senha[j][i].first == senha[j+1][i].second){
                
            }
            else{
                verifica = false;
                break;
            }
        }
        if(verifica){
            resultado[i]=senha[1][i].first;
        }else{
            resultado[i]=senha[1][i].second;
        }
        retorno+=resultado[i]+' ';
    }
    return retorno;
}