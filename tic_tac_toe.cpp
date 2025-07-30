#include<iostream>



bool chekwinner(char *space);
void playerX(char *space);
void playerO(char *space);
void PrintFonction(char *space);
bool Draw(char *space);
int position ;
char space[9] = {' ', ' ', ' ',' ', ' ', ' ',' ',' ', ' '};
int main(){
    while (true)
    {
        PrintFonction(space);
        std::cout << "\nplayer x enter number between(0-8): ";
        playerX(space) ;
        PrintFonction(space);
        if(chekwinner(space)== false){
            break;
        }
        if(Draw(space) ==true){
            std::cout << "\nDraw !";
            break;
        }

        std::cout << "player o enter number between(0-8): ";
        playerO(space);
        PrintFonction(space);
        if(chekwinner(space)== false){
            break;
        }
        if(Draw(space) ==true){
            std::cout << "\nDraw !";
            break;
        }
    }
    
}
void PrintFonction(char *space){
    std::cout << "\n     |     |     |\n";
    std::cout << "  "<< space[0]<<"  |  "<<space[1]<<"  |  "<<space[2]<<"  |\n";
    std::cout << "_____|_____|_____|\n";
    std::cout << "     |     |     |\n";
    std::cout << "  "<< space[3]<<"  |  "<<space[4]<<"  |  "<<space[5]<<"  |\n";
    std::cout << "_____|_____|_____|\n";
    std::cout << "  "<< space[6]<<"  |  "<<space[7]<<"  |  "<<space[8]<<"  |\n";
}
void playerX(char *space){ 
    while(true){
        std::cin >> position ;
        if(8 >= position >= 0){
            if (space[position] == ' '){
                space[position] = 'X';
                break;
            }else{
                std::cout << "\nnot found !\n";
                PrintFonction(space);
                std::cout << "\nplayer x enter number between(0-8): ";
            }
        }else{
            std::cout << "position invalid !\n";
        }
    }
}
void playerO(char *space){
    while(true){
        std::cin >> position ;
        if(8 >= position >= 0){
            if (space[position] == ' '){
                space[position] = 'O';
                break;
            }else{
                std::cout << "\nnot found !\n";
                PrintFonction(space);
                std::cout << "\nplayer o enter number between(0-8): ";
            }
        }else{
            std::cout << "position invalid !\n";
        }
    }
}
bool chekwinner(char *space){
    if((space[0]!= ' ')&& (space[0]==space[1]) && (space[0]== space[2])){
        std::cout << "(space[0]!= ' ')&& (space[0]==space[1]) && (space[0]== space[2])" ;
        PrintFonction(space);
        std::cout << "player " << space[0] << " win";
        return false;
    }
    else if((space[0]!=' ')&& (space[0]==space[4]) && (space[0]== space[8])){
        std::cout << "(space[0]!=' ')&& (space[0]==space[4]) && (space[0]== space[8])";
        PrintFonction(space);
        std::cout << "player " << space[0] << " win";
        return false;
    }
    else if((space[0]!=' ')&& (space[0]==space[3]) && (space[0]== space[6])){
        std::cout << "(space[0]!=' ')&& (space[0]==space[3]) && (space[0]== space[6])";
        PrintFonction(space);
        std::cout << "player " << space[0] << " win";
        return false;
    }
    else if((space[2]!=' ')&& (space[2]==space[5]) && (space[2]== space[8])){
        std::cout << "(space[2]!=' ')&& (space[2]==space[5]) && (space[0]== space[8])";
        PrintFonction(space);
        std::cout << "player " << space[2] << " win";
        return false;
    }
    else if((space[2]!= ' ')&& (space[2]==space[4]) && (space[2]== space[6])){
        std::cout << "(space[2]!= ' ')&& (space[2]==space[4]) && (space[0]== space[6])";
        PrintFonction(space);
        std::cout << "player " << space[2] << " win";
        return false;
    }
    else if((space[1]!= ' ')&& (space[1]==space[4]) && (space[1]== space[7])){
        std::cout << "(space[1]!= ' ')&& (space[1]==space[4]) && (space[1]== space[7])";
        PrintFonction(space);
        std::cout << "player " << space[1] << " win";
        return false;
    }
    else if((space[3]!= ' ')&& (space[3]==space[4]) && (space[3]== space[5])){
        std::cout << "(space[3]!= ' ')&& (space[3]==space[4]) && (space[3]== space[6])";
        PrintFonction(space);
        std::cout << "player " << space[3] << " win";
        return false;
    }
    else if((space[6]!= ' ')&& (space[6]==space[7]) && (space[8]== space[6])){
        std::cout << "(space[6]!= ' ')&& (space[6]==space[7]) && (space[8]== space[6])";
        PrintFonction(space);
        std::cout << "player " << space[6] << " win";
        return false;
    }
    return true;
}
bool Draw(char *space){
    for(int i = 0 ; i < 9 ; i++){
        if(space[i] == ' '){
            return false;
        }
    }
    return true;
}