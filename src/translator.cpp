#include <iostream>
#include <string>
#include <set>

std::set<std::string> make_exit_commands(){
        return { "e", "exit", "q", "quit"};
}

int main(){

    std::string chaine;
    auto exitList = make_exit_commands();
    while (true)
    {
        std::cout << "This is a translator, but it does nothing for now..." << std::endl;
        std::getline(std::cin, chaine);
        //if(chaine == "q" || chaine == "quit" || chaine == "e" || chaine == "exit"){
        if(exitList.find(chaine) != exitList.end()){
            break;
        }
        
        
    }

    return 0;
}