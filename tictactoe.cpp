#include<bits/stdc++.h>
using namespace std;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char current_marker;
int current_player;
void drawboard(){//draw the board
    cout<<" "<<board[0][0]<<"|"<<board[0][1]<<"|"<<board[0][2]<<endl;
    cout<<"-------\n";
     cout<<" "<<board[1][0]<<"|"<<board[1][1]<<"|"<<board[1][2]<<endl;
    cout<<"-------\n";
     cout<<" "<<board[2][0]<<"|"<<board[2][1]<<"|"<<board[2][2]<<endl;
}


bool PlaceMarker(int slot){//gives the places(row,col)
    int row ;
    if(slot%3==0)
        row=(slot/3)-1;   
    else
        row=slot/3;
   // cout<<row;
int col;
if(slot%3==0)
    col=2;
else
    col=(slot%3)-1;
    cout<<"("<<row<<","<<col<<")"<<endl;
//cout<<col;
if(board[row][col]!='X' && board[row][col]!='O'){
board[row][col]=current_marker;
return true;
}
else
return false;
}
char winner(){
   for(int i=0;i<3;i++){
    
        //rows
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2])
        return current_player;
//columns

         if(board[0][i]==board[1][i] && board[1][i]==board[2][i])
          return current_player;
    }
    if(board[0][0]==board[1][1]&&board[1][1]==board[2][2] )
    return current_player;
     if(board[0][2]==board[1][1]&&board[1][1]==board[2][0] )
      return current_player;
      return 0;
}
void swap_player_marker(){
    if(current_marker=='X')
    current_marker='O';
    else
    current_marker='X';
    if(current_player==1)
    current_player=2;
    else
    current_player=1;
}
void game(){
    cout<<"Player one choose your marker :";
    char marker_pl;
    cin>>marker_pl;
    current_player=1;
    current_marker=marker_pl;
    drawboard();
    int player_won;
    for(int i=0;i<9;i++){
     cout<<"It's player "<<current_player<<"'s turn"<<endl;
     cout<<"enter your slot : ";
     int slot;
     cin>>slot;
     if(slot<0 || slot>9){
     cout<<"invalid choice.Please try again  ";
     i--;
     continue;
     }
     if(!PlaceMarker(slot)){
     cout<<"Oops! the slot is occupied already try again  ";
     i--;
     continue;
     }
          drawboard();
    player_won=winner();
    if(player_won==1){
    cout<<"The player one is the winner Congratulations!!"<<endl;
    break;
    }
    if(player_won==2){
    cout<<"The player one is the winner Congratulations!!"<<endl;
    break;
    }
     swap_player_marker();
    }
    if(player_won==0)
    cout<<"nobody won.It's tie"<<endl;
}
int main(){
game();
drawboard();
return 0;
}
