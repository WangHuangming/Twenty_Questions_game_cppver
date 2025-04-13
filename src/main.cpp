#include "twenty_question_game.h"
#include <iostream>

int main() {
    //greeting
    greeting();
    //init the game
    TreeNode root("cat",true);
    
    while (true){
       //play the game
        play(root);

        //play again
        std::cout<<"Do you want to play again (yes/no)? "<<std::endl;
        std::string answer=readUserInput();
        if(answer=="yes"){
            
        }else if(answer=="no"){
            break;
        }else{
            std::cout << "Invalid input. Please respond with 'yes' or 'no'." << std::endl;
            return 0;
        }
    }
    std::cout<<"Goodbye:)"<<std::endl;
    return 0;
}