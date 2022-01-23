#include<iostream>
#include<windows.h>
using namespace std;

int main(){
    char a[9]={'1','2','3','4','5','6','7','8','9'};
    int i=0;
    char p;
    while(i<9){
        system("cls");
        cout<<"\n\n\n\t\t\t\tTic Tac Toe Game";
        cout<<"\n\n\n\t\tPlayer 1(X)\t\t\t\tPlayer 2(0)";
        cout<<"\n\t\t\t       |       |       ";
        cout<<"\n\t\t\t   "<<a[0]<<"   |   "<<a[1]<<"   |   "<<a[2];
        cout<<"\n\t\t\t_______|_______|_______";
        cout<<"\n\t\t\t       |       |       ";
        cout<<"\n\t\t\t   "<<a[3]<<"   |   "<<a[4]<<"   |   "<<a[5];
        cout<<"\n\t\t\t_______|_______|_______";
        cout<<"\n\t\t\t       |       |       ";
        cout<<"\n\t\t\t   "<<a[6]<<"   |   "<<a[7]<<"   |   "<<a[8];
        cout<<"\n\t\t\t       |       |       ";

        if(i%2==0){
            cout<<"\n\n\t\tPlayer 1(X)\n\t\tEnter the position(number):: ";
            cin>>p;
            if(a[p-'0'-1]=='X' || a[p-'0'-1]=='0'){
                system("cls");
                cout<<"\n\n\n\t\tEnter Valid Position";
                Sleep(100);
                cin.ignore();
                cin.get();
                continue;
            }
            for(int j=0;j<9;j++){
                if(p==a[j]){
                    a[j]='X';
                    i++;
                }
            }
        }
        else{
            cout<<"\n\n\t\tPlayer 2(0)\n\t\tEnter the position(number):: ";
            cin>>p;
            if(a[p-'0'-1]=='X' || a[p-'0'-1]=='0'){
                system("cls");
                cout<<"\n\n\n\t\tEnter Valid Position";
                Sleep(100);
                cin.ignore();
                cin.get();
                continue;
            }
            for(int j=0;j<9;j++){
                if(p==a[j]){
                    a[j]='0';
                    i++;
                }
            }
        }
        cin.ignore();
        
        
        

        system("cls");
        cout<<"\n\t\t\t       |       |       ";
        cout<<"\n\t\t\t   "<<a[0]<<"   |   "<<a[1]<<"   |   "<<a[2];
        cout<<"\n\t\t\t_______|_______|_______";
        cout<<"\n\t\t\t       |       |       ";
        cout<<"\n\t\t\t   "<<a[3]<<"   |   "<<a[4]<<"   |   "<<a[5];
        cout<<"\n\t\t\t_______|_______|_______";
        cout<<"\n\t\t\t       |       |       ";
        cout<<"\n\t\t\t   "<<a[6]<<"   |   "<<a[7]<<"   |   "<<a[8];
        cout<<"\n\t\t\t       |       |       ";


        if((a[0]==a[1] && a[1]==a[2]) || (a[0]==a[3] && a[3]==a[6]) || (a[0]==a[4] && a[4]==a[8])){
            if(a[0]=='X'){
                cout<<"\n\n\n\t\t\tPlayer 1(X) Won!!";
            }
            else{
                cout<<"\n\n\n\t\t\tPlayer 2(X) Won!!";
            }
            return 0;
        }
        if((a[1]==a[4] && a[4]==a[7]) || (a[3]==a[4] && a[4]==a[5]) || (a[2]==a[4] && a[4]==a[6])){
            if(a[4]=='X'){
                cout<<"\n\n\n\t\t\tPlayer 1(X) Won!!";
            }
            else{
                cout<<"\n\n\n\t\t\tPlayer 2(X) Won!!";
            }
            return 0;
        }
        if((a[2]==a[5] && a[5]==a[8]) || (a[6]==a[7] && a[7]==a[8])){
            if(a[8]=='X'){
                cout<<"\n\n\n\t\t\tPlayer 1(X) Won!!";
            }
            else{
                cout<<"\n\n\n\t\t\tPlayer 2(X) Won!!";
            }
            return 0;
        }
        
    }
    cout<<"\n\n\n\t\tNeither Player 1 Won Neither Player 2 Won";
    return 0;
}