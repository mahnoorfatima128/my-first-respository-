#include <iostream>
#include <cstdlib>
using namespace std;

char arr[3][3] = {{'1','2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int a, i;
string user1;
string user2;
void structure()
{

   cout<< "Enter name of first user:" << endl;
   cin>>user1;
   cout<< "Enter name of 2nd user:" << endl;
   cin>>user2;
   cout<<user2<<" WILL HAVE 1ST TURN WITH TOKEN: X" << endl;
   cout<<"\n";
   cout<<user1<< " YOUR TOKEN IS: O"<<endl;
}
void outline()
{
   cout <<"\t"<< "    |  " << "    | " <<endl;
   cout <<"\t"<< arr[0][0] << "   |" << arr[0][1] << "     |" << arr[0][2] << endl;
   cout <<"\t"<< "-----------------" << endl;
   cout <<"\t"<<"    |  " << "    | " << endl;
   cout <<"\t"<<arr[1][0] << "   |" << arr[1][1] << "     |" << arr[1][2] << endl;
   cout <<"\t"<< "    |  " << "    | " << endl;
   cout <<"\t"<<"-----------------" << endl;
   cout <<"\t"<< arr[2][0] << "   |" << arr[2][1] << "     |" << arr[2][2] << endl;
   cout <<"\t"<< "    |  " << "    | " << endl;
}
void game()
 {
   for ( i = 1; i <= 9; i++)
   {
       cin >>a;
      if (i % 2 == 0)
      {

    switch(a)
    {
      case 1:	  
      arr[0][0] = 'O';
    system("CLS");
      break;
      case 2:
      arr[0][1] = 'O';
    system("CLS");
      break;
      case 3:
      arr[0][2] = 'O';
    system("CLS");
      break;
      case 4:
      arr[1][0] = 'O';
    system("CLS");
      break;
      case 5:
        arr[1][1] = 'O';
    system("CLS");
        break;
      case 6:
        arr[1][2] = 'O';
    system("CLS");
        break;
      case 7:
        arr[2][0] = 'O';
    system("CLS");
        break;
      case 8:
        arr[2][1] = 'O';
    system("CLS");
        break;
      case 9:
        arr[2][2] = 'O';
    system("CLS");
        break;
    default:
            cout << "Enter a valid position";
            i--;
          
      }

      }
      else
      {     
       switch(a)
      {
      case 1:
      arr[0][0] = 'X';
    system("CLS");
      break;
      case 2:
      arr[0][1] = 'X';
    system("CLS");
      break;
      case 3:
      arr[0][2] = 'X';
    system("CLS");
      break;
      case 4:
      arr[1][0] = 'X';
    system("CLS");
      break;
      case 5:
        arr[1][1] = 'X';
    system("CLS");
        break;
      case 6:
        arr[1][2] = 'X';
    system("CLS");
        break;
      case 7:
        arr[2][0] = 'X';
    system("CLS");
        break;
      case 8:
        arr[2][1] = 'X';
    system("CLS");
        break;
      case 9:
        arr[2][2] = 'X';
    system("CLS");
        break;
      default:
            cout << "Enter a valid position";
            i--;
        
      }
      }
      if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2])
      {
      	 arr[0][0] ='W';
		 arr[0][1] ='I';
		 arr[0][2] ='N';
		 arr[1][0] =' ';
		 arr[1][1] =' ';
		 arr[1][2] =' ';
		 arr[2][0] =' ';
		 arr[2][1] =' ';
		 arr[2][2] =' ';
         if (i % 2 == 0){

            cout << "----The winner is " << user1<<"----";
            cout<<"\n";
            outline();
        }
         else{
		 
            cout << "----The winner is " << user2<<"----";
            cout<<"\n";
            outline();
        }
      break;
      }
     else if (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2])
      {
      	 arr[1][0] ='W';
		 arr[1][1] ='I';
		 arr[1][2] ='N';
		 arr[0][0] =' ';
		 arr[0][1] =' ';
		 arr[0][2] =' ';
		 arr[2][0] =' ';
		 arr[2][1] =' ';
		 arr[2][2] =' ';
         if (i % 2 == 0){
            cout<<"\n";
            outline();
            cout << "----The winner is " << user1<<"----";
            break;
         }
         else{
            cout<<"\n";
            outline();
            cout << "----The winner is " << user2<<"----";
         break;
         }
      }
      else if (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2])
      {
      	 arr[2][0] ='W';
		 arr[2][1] ='I';
		 arr[2][2] ='N';
		 arr[1][0] =' ';
		 arr[1][1] =' ';
		 arr[1][2] =' ';
		 arr[0][0] =' ';
		 arr[0][1] =' ';
		 arr[0][2] =' ';
         if (i % 2 == 0){
            cout<<"\n";
            outline();
            cout << "----The winner is " << user1<<"----";
            break;
         }
         else{
            cout<<"\n";
            outline();
            cout << "----The winner is " << user2<<"----";
         break;
         }
      }

      else if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0])
      {
      	 arr[0][0] ='W';
		 arr[1][0] ='I';
		 arr[2][0] ='N';
		 arr[0][1] =' ';
		 arr[1][1] =' ';
		 arr[1][2] =' ';
		 arr[0][2] =' ';
		 arr[2][1] =' ';
		 arr[2][2] =' ';
         if (i % 2 == 0){
            cout<<"\n";
            outline();
            cout << "----The winner is " << user1<<"----";
            break;
         }
         else{
            cout<<"\n";
            outline();
            cout << "----The winner is " << user2<<"----";
         break;
         }
      }

      else if (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1])
      {
      	 arr[0][1] ='W';
		 arr[1][1] ='I';
		 arr[2][1] ='N';
		 arr[0][0] =' ';
		 arr[1][0] =' ';
		 arr[2][0] =' ';
		 arr[0][2] =' ';
		 arr[1][2] =' ';
		 arr[2][2] =' ';
         if (i % 2 == 0){
            cout<<"\n";
            outline();
            cout << "----The winner is " << user1<<"----";
            break;
         }
         else{
            cout<<"\n";
            outline();
            cout << "----The winner is " << user2<<"----";
         break;
         }
      }

     else if (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2])
      {
      	 arr[0][2] ='W';
		 arr[1][2] ='I';
		 arr[2][2] ='N';
		 arr[0][0] =' ';
		 arr[0][1] =' ';
		 arr[1][0] =' ';
		 arr[1][1] =' ';
		 arr[2][0] =' ';
		 arr[2][1] =' ';
         if (i % 2 == 0){
            cout<<"\n";
            outline();
            cout << "----The winner is " << user1<<"----";
            break;
         }
         else{
            cout<<"\n";
            outline();
            cout << "----The winner is " << user2<<"----";
         break;
         }
      }

    else if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
      {
      	 arr[0][0] ='W';
		 arr[1][1] ='I';
		 arr[2][2] ='N';
		 arr[0][1] =' ';
		 arr[0][2] =' ';
		 arr[1][0] =' ';
		 arr[1][2] =' ';
		 arr[2][0] =' ';
		 arr[2][1] =' ';
         if (i % 2 == 0){
            cout<<"\n";
            outline();
            cout << "----The winner is " << user1<<"----";
            break;
         }
         else{
            cout<<"\n";
            outline();
            cout << "----The winner is " << user2<<"----";
         break;
         }
      }

     else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
      {
      	 arr[0][2] ='W';
		 arr[1][1] ='I';
		 arr[2][0] ='N';
		 arr[0][0] =' ';
		 arr[0][1] =' ';
		 arr[1][0] =' ';
		 arr[1][2] =' ';
		 arr[2][1] =' ';
		 arr[2][2] =' ';
         if (i % 2 == 0){
            cout<<"\n";
            outline();
            cout << "----The winner is " << user1<<"----";
            break;
         }
         else{
            cout<<"\n";
            outline();
            cout << "----The winner is " << user2<<"----";
         break;
         }
      }
      else
      {
      cout<<"\n";
      outline();
      }
   }
   i=i+1;
   if(i>9){
   	cout<<"It's a tie nobody won"<<endl;
   }
}
int main()
 {

   cout<<"\t      ***TIC TAC TOE***"<<endl;
   structure();
   outline();
   game();

   return 0;
 }
