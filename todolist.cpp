#include<iostream>
#include<windows.h>//used to perform multiple operation like clear or pause the terminal etc..
using namespace std;
void print_tasks(string tasks[],int task_count){
    cout<<"Tasks To Do: "<<endl;
    cout<<"--------------------"<<endl;
    for(int i=0;i<task_count;i++){
        cout<<"Task"<<i<<":"<<tasks[i]<<endl;
    }
     cout<<"--------------------"<<endl;
}
int main(){
    string task[10]={""};
     //counter vr->know how many tasks we have
     int task_count=0;
     int option;
     while(option!=0){
        cout<<"*****TO DO LIST*****"<<endl;
        cout<<"Click 1 to Add New Task"<<endl;
        cout<<"Click 2 to  View Task"<<endl;
        cout<<"Click 3 to Delete Task"<<endl;
        cout<<"Click 0 to Terminate the task"<<endl;
        cin>>option;
        switch(option){
            case 1:
            if(task_count>9){
                cout<<"*****TASK LIST IS FULL*****"<<endl;
            }
            else{
                cout<<"Enter A New Task: ";
                cin.ignore();//not take the empty spaces
                getline(cin,task[task_count]);//t get line or para
                task_count++;
            
            break;
            }
            case 2:
            system("cls");

            print_tasks(task,task_count);
            break;
            case 3:
            system("cls");
             print_tasks(task,task_count);
            int del_task=0;
            cout<<"Enter the task to delete: ";
            cin>>del_task;
            
            if(del_task<0 || del_task>9){
                cout<<"Invalid choice";
              break;
            }

        
        for(int i=del_task;i<task_count;i++){
            task[i]=task[i+1];
        }
        task_count=task_count-1;;
         break;
    
     }
    

   
}
return 0;
}