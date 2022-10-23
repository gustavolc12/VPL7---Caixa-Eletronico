#include <string>
#include <vector>
#include <map>
#include <utility>

class Intruso{
    /*Continue a implementação da classe Intruso*/
    std::vector<std::pair<std::map<char, std::pair<char, char>>, std::vector<char>>> armazenamento;

    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};