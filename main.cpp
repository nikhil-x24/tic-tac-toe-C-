#include <iostream>
using namespace std;

char board[3][3]= {'1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' ,'9' };
char Player = 'X';


void Draw(){
    system("cls");
    cout<<"This is Tic Tac Toc Game"<<endl;
     for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++ ){
            cout<<" "<<board[i][j]<<" | ";
        }
        cout<<endl;
        cout<<"---------------"<<endl;
    }


}
void Input(){
    char a;
    cout<<"Press the desired Number Field : " ;
    cin>>a;

    if(a=='1')
        board[0][0]=Player;
    if(a=='2')
        board[0][1]=Player;
    if(a=='3')
        board[0][2]=Player;
    if(a=='4')
        board[1][0]=Player;
    if(a=='5')
        board[1][1]=Player;
    if(a=='6')
        board[1][2]=Player;
    if(a=='7')
        board[2][0]=Player;
    if(a=='8')
        board[2][1]=Player;
    if(a=='9')
        board[2][2]=Player;


}

char TogglePlayer(){
    if(Player=='X')
        Player='O';
    else
        Player='X';

    return '/';


}
char Win(){
    //For Player 1
    if( board[0][0]=='X' && board[0][1]=='X' && board[0][2]=='X')
        return 'X';
    else if( board[1][0]=='X' && board[1][1]=='X' && board[1][2]=='X')
        return 'X';
    else if( board[2][0]=='X' && board[2][1]=='X' && board[2][2]=='X')
        return 'X';

    else if( board[0][0]=='X' && board[1][0]=='X' && board[2][0]=='X')
        return 'X';
    else if( board[0][1]=='X' && board[1][1]=='X' && board[2][1]=='X')
        return 'X';
    else if( board[0][2]=='X' && board[1][2]=='X' && board[2][2]=='X')
        return 'X';
    else if( board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X')
        return 'X';
    else if( board[0][2]=='X' && board[1][1]=='X' && board[2][0]=='X')
        return 'X';


    //For Player 2
    else if( board[0][0]=='O' && board[0][1]=='O' && board[0][2]=='O')
        return 'O';
    else if( board[1][0]=='O' && board[1][1]=='O' && board[1][2]=='O')
        return 'O';
    else if( board[2][0]=='O' && board[2][1]=='O' && board[2][2]=='O')
        return 'O';

    else if( board[0][0]=='O' && board[1][0]=='O' && board[2][0]=='O')
        return 'O';
    else if( board[0][1]=='O' && board[1][1]=='O' && board[2][1]=='O')
        return 'O';
    else if( board[0][2]=='O' && board[1][2]=='O' && board[2][2]=='O')
        return 'O';
    else if( board[0][0]=='O' && board[1][1]=='O' && board[2][2]=='O')
        return 'O';
    else if( board[0][2]=='O' && board[1][1]=='O' && board[2][0]=='O')
        return 'O';

    return '/';

}




int main()
{



    Draw();
    while(1){

    Input();
    Draw();
    TogglePlayer();

    if(Win()== 'X'){
        cout<<"X is the Winner !" <<endl;
        break;
    }
    else if(Win()== 'O'){
        cout<<"O is the Winner !"<<endl;
        break;
    }

    }

    system("pause");

    return 0;
}
