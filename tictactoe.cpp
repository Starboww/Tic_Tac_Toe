#include<iostream>
#include<stdlib.h>
using namespace std;
void print2(char y[3][3],int pos,int fac,int cho,int chom);
void winner(int choice,int choicem)
{
    if(choicem==1)
        {
          if(choice==1)
          {  cout<<"\n";
              cout<<" PLAYER X WON\n";
              cout<<" PLAYER 0 BETTER LUCK NEXT TIME\n";
          }
          else if(choice=2)
          {
              cout<<"\n";
              cout<<" PLAYER 0 WON\n";
              cout<<" PLAYER x BETTER LUCK NEXT TIME\n";
          }
        }
        else if(choicem==2)
        {
            if(choice==1)
            {
              cout<<"\n";
              cout<<" PLAYER 0 WON\n";
              cout<<" PLAYER x BETTER LUCK NEXT TIME\n";  
            }
            else if(choice==2)
            {
                cout<<"\n";
              cout<<" PLAYER X WON\n";
              cout<<" PLAYER 0 BETTER LUCK NEXT TIME\n";
            }

        }
}
int posit(char x[3][3],int choice,int factor,int choicem)
{int position=0;
if(choice==1)
    {
    cout<<"ENTER NUMBER OF YOUR CHOICE PLAYER 1 'X' \n";
    cin>>position;
    print2(x,position,factor,choice,choicem);
    }
    else if(choice==2)
    {
        cout<<"ENTER NUMBER OF YOUR CHOICE PLAYER 2 '0' \n";
        cin>>position;
        print2(x,position,factor,choice,choicem);
    }
    return 0;
}
//function print 1 start
void print1(char x[3][3],int rolex,int factor,int choicem)
{   
    cout<<"\n";
    cout<<"\n";
    cout<<"                                ||                   ||   "<<endl;
    cout<<"                "<<"\t"<<x[0][0]<<"       ||       "<<"  "<<x[0][1]<<"\t"<<"     ||       "<<x[0][2]<<endl;
    cout<<"                                ||                   ||   "<<endl;
    cout<<"              ========================================================="<<endl;
    cout<<"                                ||                   ||   "<<endl;
    cout<<"                "<<"\t"<<x[1][0]<<"       ||       "<<"  "<<x[1][1]<<"\t"<<"     ||       "<<x[1][2]<<endl;
    cout<<"                                ||                   ||   "<<endl;
    cout<<"              ========================================================="<<endl;
    cout<<"                                ||                   ||   "<<endl;
    cout<<"                "<<"\t"<<x[2][0]<<"       ||       "<<"  "<<x[2][1]<<"\t"<<"     ||       "<<x[2][2]<<endl;
    cout<<"                                ||                   ||   "<<endl;
 //pattern end
    cout<<"\n";
    posit(x,rolex,factor,choicem);
 

}
//check function start
int check(char a[3][3],int y,int choice,int choicem)
{//vertical
    if(a[0][0]==a[1][0]&&a[1][0]==a[2][0]&&a[0][0]==a[2][0])
    {   
        winner(choice,choicem);
        exit(0);
    }
    else if(a[0][1]==a[1][1]&&a[1][1]==a[2][1]&&a[0][1]==a[2][1])
    {
        winner(choice,choicem);
        exit(0);
    }
    else if(a[0][2]==a[1][2]&&a[1][2]==a[2][2]&&a[0][2]==a[2][2])
    {
        winner(choice,choicem);
        exit(0);
    }
    //horizontal
    else if(a[0][0]==a[0][1]&&a[0][1]==a[0][2]&&a[0][2]==a[0][0])
    {
        winner(choice,choicem);
        exit(0);
    }
    else if(a[1][0]==a[1][1]&&a[1][1]==a[1][2]&&a[1][2]==a[1][0])
    {
       winner(choice,choicem);
       exit(0);
    }
    else if(a[2][0]==a[2][1]&&a[2][1]==a[2][2]&&a[2][2]==a[2][0])
    {
       winner(choice,choicem);
       exit(0);
    }
    //digonals
    else if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[2][2]==a[0][0])
    {
        winner(choice,choicem);
        exit(0);
    }
    else if(a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&a[2][0]==a[0][2])
    {
       winner(choice,choicem);
       exit(0);
    }
    else if(y==9)
    {
        cout<<"IT'S A TIE";  
        exit(0);      
    }
   return 0;
}

    //print2 started
void print2(char x[3][3],int position,int factor,int choice,int choicem)
{ 
    int i=0,j=0;
    if(position==1)
    {
        i=0;
        j=0;
    }
    else if(position==2)
    {
        i=0;
        j=1;
    }
    else if(position==3)
    {
        i=0;
        j=2;
    }
    else if(position==4)
    {
        i=1;
        j=0;
    }
    else if(position==5)
    {
        i=1;
        j=1;
    }
    else if(position==6)
    {
        i=1;
        j=2;
    }
    else if(position==7)
    {
        i=2;
        j=0;
    }
    else if(position==8)
    {
        i=2;
        j=1;
    }
    else if(position==9)
    {
        i=2;
        j=2;
    }
    else if(position>9)
    {
      cout<<"\nWRONG SELECTION\n";
      exit(0);
    }
    else{
        cout<<"IDK";
    }
    //end assignment
    //main assingment
    if(choicem==1)
    {
    if(factor%2==0)
    {
        x[i][j]='X';
    }
    else if(factor%2!=0)
    {
        x[i][j]='0';
    }
    }
    //else
    else if(choicem==2)
    {
         if(factor%2==0)
    {
        x[i][j]='0';
    }
    else if(factor%2!=0)
    {
        x[i][j]='X';
    }
    }
    //pattern start
     cout<<"\n";
    cout<<"\n";
    cout<<"                                ||                   ||   "<<endl;
    cout<<"                "<<"\t"<<x[0][0]<<"       ||       "<<"  "<<x[0][1]<<"\t"<<"     ||       "<<x[0][2]<<endl;
    cout<<"                                ||                   ||   "<<endl;
    cout<<"              ========================================================="<<endl;
    cout<<"                                ||                   ||   "<<endl;
    cout<<"                "<<"\t"<<x[1][0]<<"       ||       "<<"  "<<x[1][1]<<"\t"<<"     ||       "<<x[1][2]<<endl;
    cout<<"                                ||                   ||   "<<endl;
    cout<<"              ========================================================="<<endl;
    cout<<"                                ||                   ||   "<<endl;
    cout<<"                "<<"\t"<<x[2][0]<<"       ||       "<<"  "<<x[2][1]<<"\t"<<"     ||       "<<x[2][2]<<endl;
    cout<<"                                ||                   ||   "<<endl;
 //pattern end
    cout<<"\n";
    cout<<"\n";


}





int main()
{   int baseval,i;
    int choicem,choice;
    char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    char role1='X';
    char role2='0';
    cout<<"                                   WELCOME TO THE GAME                                           "<<endl;
    cout<<"\n";
    cout<<"                                      TIC-TAC-TOE                                                "<<endl;
    cout<<"\n";
    cout<<"                                    PRESS 1 TO START                                             "<<endl;
    cin>>baseval;
if(baseval==1)
{
    cout<<"       ENTER YOUR CHOICE: P1          1)X       2)0                                              "<<endl;
    cin>>choicem;
    cout<<"\n";
    if(choicem==1)
    {
    cout<<"                        PLAYER 1= "<<role1<<"      PLAYER 2="<<role2<<endl;
    cout<<"\n";
    }
    else if(choicem==2)
    {
      cout<<"                        PLAYER 1= "<<role2<<"      PLAYER 2="<<role1<<endl; 
      cout<<"\n"; 
    }
 choice=choicem;
    //starting of devil loop
    if (choicem==1)
    {
        for(i=0;i<9;i++)
        { if(i%2==0)
           {
              choice=1;
           }
           else if(i%2!=0)
           {
               choice=2;
           }
            print1(a,choice,i,choicem);
           
            check(a,i,choice,choicem);
            
        }

    }
    else if(choice==2)
    {
         for(i=0;i<9;i++)
        { if(i%2==0)
           {
              choice=2;
           }
           else if(i%2!=0)
           {
               choice=1;
           }

            print1(a,choice,i,choicem);
            check(a,i,choice,choicem);
          
        }
    }

}
 cout<<"\nTHE END\n";


    return 0;

}
     