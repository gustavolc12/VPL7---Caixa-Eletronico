#include <string>
#include <utility>

class Intruso{
    /*Continue a implementação da classe Intruso*/
    std::vector<std::pair<std::map<char, std::pair<int, int>>, std::vector<char>>;

    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};