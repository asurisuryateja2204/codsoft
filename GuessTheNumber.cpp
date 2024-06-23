#include<iostream>
#include<cstdlib>//used to implent rand() in code
#include<ctime>//used to implement time in code
using namespace std;
//rand(){"used to generate random numbers"}
//int random=offset+(rand()%range) {"used to set a range for random number generator"}
//int random=1+(rand()%100) {"ranges from 1 to 100"}
int main(){
 //   srand(time(0));//generate a new number every time we run the code
//int random=1+(rand()%100); 
cout<<"\n\t\tHEY WELCOME TO GUESS THE NUMBER GAME";
cout<<"\n\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
cout<<"\n\t    You have to guess the number between 1 and 100."<<endl;
cout<<"Consist of limited choices based onthe level you have been choosed.Good luck!"<<endl;
while(true){
    //by using true or 1 it becomes infinite loop
    cout<<"\n ***CHOOSE THE LEVEL*** \n";
    cout<<"L1 for easy!\t";
    cout<<"L2 for moderate!\t";
    cout<<"L3 for difficult\t";
    cout<<"press 0 for ending the game!\n"<<endl;
    int difficultyChoice;
    cout<<"Enter The Number";
    cin>>difficultyChoice;
    if(difficultyChoice==0){
        break;
    }
     srand(time(0));
     int random=1+(rand()%100); 
     int UsersChoice;

    if(difficultyChoice==1){
        cout<<"\ncongratulations you have 10 choices tofind the random number.";
        int ChoicesLeft=10;//choices left
        for(int i=0;i<=10;i++){
            cout<<"\n\nEnter The Number:";
            cin>>UsersChoice;
            if(UsersChoice==0){
                exit(0);
            }
            if(UsersChoice==random){
                cout<<"Excellent! You won,"<<UsersChoice<<" Is The secret number"<<endl;
                cout<<"\t\t\t Thanks for playing..."<<endl;
                cout<<"Comeback for us!\n\n"<<endl;
                break;//continue again and again until we press 0 beacause of while(true)
            }
            else{
                cout<<"Nope, "<<UsersChoice<<" It's Wrong choice\n";
                if(UsersChoice>random){
                    cout<<"Shit,"<<UsersChoice<<" The choosed number is larger"<<endl;
                    }
                    else{
                         cout<<"Shit,"<<UsersChoice<<" The choosed number is smaller"<<endl;
                    }
                    ChoicesLeft--;//decrements the option for every wrong option
                    cout<<ChoicesLeft<<"choices left."<<endl;
                    if(ChoicesLeft==0){
                        cout<<"You couldn't find the secret number,if was"<<random<<", You lose!\n\n";
                        cout<<"Don't be Sad Play again\n\n";
                    }
                }
            }
        }
    
     else if(difficultyChoice==2){
         cout<<"\ncongratulations you have 5 choices to find the random number.";
        int ChoicesLeft=5;//choices left
        for(int i=0;i<=5;i++){
            cout<<"\n\nEnter The Number:";
            cin>>UsersChoice;
               if(UsersChoice==0){
                exit(0);
            }
            if(UsersChoice==random){
                cout<<"Excellent! You won,"<<UsersChoice<<" Is The secret number"<<endl;
                cout<<"\t\t\t Thanks for playing..."<<endl;
                cout<<"Comeback for us!\n\n"<<endl;
                break;//continue again and again until we press 0 beacause of while(true)
            }
            else{
                cout<<"Nope, "<<UsersChoice<<" It's Wrong choice\n";
                if(UsersChoice>random){
                    cout<<"Shit,"<<UsersChoice<<" The choosed number is larger"<<endl;
                    }
                    else{
                         cout<<"Shit,"<<UsersChoice<<" The choosed number is smaller"<<endl;
                    }
                    ChoicesLeft--;//decrements the option for every wrong option
                    cout<<ChoicesLeft<<" choices left."<<endl;
                    if(ChoicesLeft==0){
                        cout<<"You couldn't find the secret number,if was"<<random<<", You lose!\n\n";
                        cout<<"Don't be Sad Play again\n\n";
                    }
                }
            }
        }
    
    
    else if(difficultyChoice==3){ cout<<"\ncongratulations you have 3 choices tofind the random number.";
        int ChoicesLeft=3;//choices left
        for(int i=0;i<=3;i++){
            cout<<"\n\nEnter The Number:";
            cin>>UsersChoice;
               if(UsersChoice==0){
                exit(0);
            }
            if(UsersChoice==random){
                cout<<"Excellent! You won,"<<UsersChoice<<" Is The secret number"<<endl;
                cout<<"\t\t\t Thanks for playing..."<<endl;
                cout<<"Comeback for us!\n\n"<<endl;
                break;//continue again and again until we press 0 beacause of while(true)
            }
            else{
                cout<<"Nope, "<<UsersChoice<<" It's Wrong choice\n";
                if(UsersChoice>random){
                    cout<<"Shit,"<<UsersChoice<<" The choosed number is larger"<<endl;
                    }
                    else{
                         cout<<"Shit,"<<UsersChoice<<" The choosed number is smaller"<<endl;
                    }
                    ChoicesLeft--;//decrements the option for every wrong option
                    cout<<ChoicesLeft<<"choices left."<<endl;
                    if(ChoicesLeft==0){
                        cout<<"You couldn't find the secret number,if was"<<random<<" , You lose!\n\n";
                        cout<<"Don't be Sad Play again\n\n";
                    }
                }
            }
        }
    
   // else if(difficultyChoice==0){
     //  break;
         //abort();//exits the loop
         //exit(0);//also exits the loop
   // }
    else{
        cout<<"invalid choice.Please check the number";
    }
//cout<<random<<endl;
return 0;
}
}
