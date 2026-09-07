#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

int main()
{
    int n;
    string participantID[100];
    string participantName[100];
    int score[100];
    string searchID;
    int found = -1;
    int tempScore;
    string tempID;
    string tempName;
    
    cout<<endl<<"***********************************************************************";
    cout<<endl<<"*                    SPORTS EVENT SCORE ANALYSIS                      *";
    cout<<endl<<"***********************************************************************";

    cout<<endl<<endl<<"Enter The Number Of Participants : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
    cout<<"Enter Participant ID : ";
    cin>>participantID[i];
    cout<<"Enter Participant Name : ";
    cin>>participantName[i];
    cout<<"Enter The Score : ";
    cin>>score[i];
    }

    cout<<endl<<endl<<"Search Participants : ";
    cout<<endl<<"Enter Participant ID : ";
    cin>>searchID;

    for(int i=0;i<n;i++)
    {
        if(participantID[i] == searchID)
        {
            found = i;
            break;
        }
    }

    if(found != -1)
    {
        cout<<endl<<"-----------------------------------------------------";
        cout<<endl<<"-                PARTICIPANT FOUND                  -";
        cout<<endl<<"-----------------------------------------------------";

        cout<<endl<<"ID                   : "<<participantID[found];
        cout<<endl<<"Name                 : "<<participantName[found];
        cout<<endl<<"Score                : "<<score[found];
    }
    else
    {
        cout<<endl<<"Participant With ID "<<searchID<<" Not Found."<<endl<<endl; 
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(score[j] < score[j + 1])
            {
                tempScore = score[j];
                score[j] = score[j + 1];
                score[j + 1] = tempScore;

                tempID = participantID[j];
                participantID[j] = participantID[j + 1];
                participantID[j + 1] = tempID;

                tempName = participantName[j];
                participantName[j] = participantName[j + 1];
                participantName[j + 1] = tempName;
            }
        }
    }


    cout<<endl<<endl<<"***********************************************************************";
    cout<<endl<<"*                           RANKING LIST                              *";
    cout<<endl<<"***********************************************************************";

    cout<<endl<<left<<setw(8)<<"Rank"
        <<setw(20)<<"Name"
        <<setw(10)<<"Score"<<endl;

    cout<<endl<<"--------------------------------------------------------------------------";

    for(int i=0;i<n;i++)
    {
        cout<<endl<<left<<setw(8)<<i + 1
            <<setw(20)<<participantName[i]
            <<setw(10)<<score[i]<<endl;
    }

    cout<<endl<<"--------------------------------------------------------------------------";

    cout<<endl<<endl<<"***********************************************************************";
    cout<<endl<<"*                        TOP 3 PARTICIPANTS                           *";
    cout<<endl<<"***********************************************************************";

    int topThree;

    if(n<3)
    {
        topThree = n;
    }
    else
    {
        topThree = 3;
    }
    for(int i=0;i < topThree;i++)
    {
        cout<<endl<<i + 1<<". "
            <<participantName[i]
            <<" - "<<score[i]<<endl;
    }

    cout<<endl<<"--------------------------------------------------------------------------";
cout<<"                                       -developed by Kunj M.Patel-26cs081";

    return 0;
}


