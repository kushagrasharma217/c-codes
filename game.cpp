#include <iostream.h> 
using namespace std;
#include<stdlib>
#include<time.h>
int main()
    {
      int number,guess,attempt=0;
      srand(time(0));
            number=rand()%100 + 1;
            do
            {
                cout<<"\t\t\tGuess the number between 1 and 100<<endl;
                cin>>guess;
                if (guess<number)
                {
                  cout<<"\t\t\tGuess a little higher\n"<<endl;
                  attempt++;
                }
                else if (guess>number)
                {
                  cout<<"\t\t\tGuess a bit lower\n"<<endl; 
                   attempt++;               }
                else
                {          
                     cout<<"\t\t\tYou have guessed the number right shabassh you are still my kaddu\nYou scored  "<<attempt<<" points";
                    }
                  
            } while (number!=guess);
           return 0;
  }



