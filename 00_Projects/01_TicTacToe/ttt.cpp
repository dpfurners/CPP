#include <iostream>
#include <array>
#include <string>

using namespace std;

array<array<char, 3>, 3> field{};

void display_field();
bool check_move(int x, int y);

void make_move(string *name, const char *sym){
    int x = INT16_MAX, y = INT16_MAX;
    char sep;
    cout << endl << "[" << *name << "] It is your turn" << endl;
    while (!check_move(x, y)){
        display_field();
        cout << "[" << *name << "] where do you want to place your move? (x,y)" << endl;
        cin >> x >> sep >> y;
    }
    field[y-1][x-1] = *sym;
}

void display_field(){
    for (int y = 1; y <= field.size(); y++) {
        if (y == 1)
            cout << "  " << 1 << " " << 2 << " " << 3 << endl;
        cout << y << " " << field[y-1][0] << "|" << field[y-1][1] << "|" << field[y-1][2] << endl;
        if (y < field.size())
        cout << " -------" << endl;
    }
}

bool check_move(int x, int y){
    if ((x < 1) || (x > 3) || (y < 1) || (y > 3)){
        if (x != INT16_MAX && y != INT16_MAX){
            cout << "x,y must be between 1 and 3" << endl;
        }
        return false;
    }
    if (field[y][x] == 0){
        cout << "Someone already placed a move there" << endl;
        return false;
    }else
        return true;
}

string check_winner(string *player1, const char *sym_p1, string *player2, const char *sym_p2){
    //check rows
    for(int y = 0; y < field.size(); y++){
        if(field[y][0] == field[y][1] && field[y][0] == field[y][2] && (field[y][0] == *sym_p1 || field[y][0] == *sym_p2)){
            if (field[y][0] == *sym_p1)
                return *player1;
            if (field[y][0] == *sym_p2)
                return *player2;
        }
    }

    //check columns
    for(int x = 0; x < field[0].size(); x++){
        if(field[0][x] == field[1][x] && field[0][x] == field[2][x] && (field[0][x] == *sym_p1 || field[0][x] == *sym_p2)){
            if (field[0][x] == *sym_p1)
                return *player1;
            if (field[0][x] == *sym_p2)
                return *player2;
        }
    }

    //check diagonals
    if(field[0][0] == field[1][1] && field[0][0] == field[2][2] && (field[0][0] == *sym_p1 || field[0][0] == *sym_p2)){
        if (field[0][0] == *sym_p1)
            return *player1;
        if (field[0][0] == *sym_p2)
            return *player2;
    }
    if(field[0][2] == field[1][1] && field[0][2] == field[2][0] && (field[0][2] == *sym_p1 || field[0][2] == *sym_p2)){
        if (field[0][2] == *sym_p1)
            return *player1;
        if (field[0][2] == *sym_p2)
            return *player2;
    }
    return "none";
}

void reset_field(){
    for (array<char, 3> &y : field){
        for (char &x : y){
            x = ' ';
        }
    }
}

int main(){
    string player1, player2;
    const char sym_p1 = 'X', sym_p2 = 'O';

    cout << "[Player1] Please enter your name:";
    cin >> player1;
    cout << "[Player2] Please enter your name:";
    cin >> player2;

    reset_field();

    for (int i = 0; i < 9; i++){
        if ((i%2) == 0)
            make_move(&player1, &sym_p1);
        else
            make_move(&player2, &sym_p2);
        auto winner = check_winner(&player1, &sym_p1, &player2, &sym_p2);
        if (winner != "none"){
            cout << "Congratulations " << winner << " won the game!" << endl;
            break;
        }
    }

    return 0;
}