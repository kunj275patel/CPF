#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n ;

    // Array

    string participantID[100];
    string participantName[100];
    int score[100];

    // Variables for analysis

    int TotalScore = 0 ;
    int highestScore ;
    int lowestScore = 0 ;
    float averageScore = 0 ;

    cout << "***********************\n" << endl;
    cout << "\tSPORTS EVENT SCORE ANALYSIS\t\n" << endl;
    cout << "***********************\n" << endl;

    //Accept number of participants
    cout << "\nEnter Number Of Participants : ";
    cin >> n;

    //Accept particpant details
    for (int i = 0; i < n; i++)
    {

    cout << "Enter Participant Id : ";
    cin >> participantID[i];

    cout << "Enter Participant Name : ";
    cin >> participantName[i];

    cout << "Enter Score : ";
    cin >> score[i];

    }

    //Intialize highest and lowest
    highestScore = score[0] ;
    lowestScore = score[0] ;

    //Calculate total, highest and lowest
    for (int i = 0 ; i < n ; i++)
    {
        TotalScore = TotalScore + score[i];

        if( score[i] > highestScore)
        {
            highestScore = score[i] ;
        }
        if( score[i] < lowestScore)
        {
            lowestScore = score[i] ;
        }
    }

    // Calculate average

    averageScore = (float)TotalScore / n ;

    // Display participant Records
    cout << "\n-------------------------------------------------------------" << endl ;
    cout << "\t\t PARTICIPANT PERFORMANCE" << endl ;
    cout << "\n-------------------------------------------------------------" << endl ;

    cout << left << setw(12) << "ID"
        << setw(20) << "Name"
        << setw(10) << "Score" << endl;

    cout << "\n-------------------------------------------------------------" << endl ;

    for( int i = 0 ; i < n; i++)

    {
    cout << left << setw(12) << participantID[i]
        << setw(20) << participantName[i]
        << setw(10) << score[i] << endl;
    }

    cout << "\n-------------------------------------------------------------" << endl ;

    // DISPLAY ANALYSIS
    cout << "\n\t\t SCORE ANALYSIS" << endl ;
    cout << "\n-------------------------------------------------------------" << endl ;

    cout << "Total Score   : "<< TotalScore << endl ;
    cout << "Average Score : "<< averageScore << endl ;
    cout << "Highest Score : "<< highestScore << endl ;
    cout << "Lowest Score  : "<< lowestScore << endl ;

     cout << "\n-------------------------------------------------------------" << endl ;
    cout<<"                                       -developed by Kunj M.Patel-26cs081";

     return 0 ;
       

 
}
