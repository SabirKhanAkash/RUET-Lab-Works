#include<bits/stdc++.h>
using namespace std;

int main()
{
    char state ='A';
    char input[1000];
    char A[2],B[2],C[2];
    cout<<"Enter the transition table values for A,B,C respectively: \n0  1"<<endl;
    gets(A);
    gets(B);
    gets(C);

    cout<<"Enter your input: ";
    gets(input);

    for(int i=0 ; i<strlen(input);i++)
    {
        if(input[i] == '0')
            state = 'B';
        else if(input[i] == '1' && state == 'A')
            state = 'A';
        else if(input[i] == '0' && state == 'B')
            state = 'B';
        else if(input[i] == '1' && state == 'B')
            state = 'C';
        /*
        else if(input[i] == '0' || input[i] == '1' && state == 'C')
        {
            state = 'D';
            break;
        }
        */

        if(state == 'C')
            break;
    }
    if(state == 'A')
        cout<<"Final State for "<<input<<" is : q0"<<endl;
    else if(state == 'B')
        cout<<"Final State for "<<input<<" is : q1"<<endl;
    else if(state == 'C')
        cout<<"Final State for "<<input<<" is : q2"<<endl;
    else if(state == 'D')
        cout<<"Final State for "<<input<<" is : Fi"<<endl;
    return 0;
}

