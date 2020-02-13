#if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
#endif
#include <tchar.h>
#include <windows.h>
#include<stdio.h>
#include<iostream>
typedef long LONG;
using namespace std;

void AddControlsTextField(HWND,int);
void AddControlsTextBox(HWND,int);
void AddControlsButtonCredit(HWND,int);
void AddControlsTextBoxCredit(HWND,int);
void AddControlsTextFieldCredit(HWND,int);
void AddControlsButtonGPA(HWND,int);
void AddControlsTextFieldGPA(HWND,int);
void AddControlsTextBoxGPA(HWND,int);

HWND textfield, button;    /* Declares Textfield and Button for the program*/
HWND TextBoxName;          /* Declares TextBox for the Name*/
HWND TextBoxDept;          /* Declares TextBox for the Department*/
HWND TextBoxRoll;          /* Declares TextBox for the Roll No*/
HWND TextBoxCourse;        /* Declares TextBox for the Course Number*/
HWND TextBoxCourseName;    /* Declares TextBox for the Course Name*/
HWND hEdit;
HWND hEdit2;
HWND hEdit3;
HWND Text;

int CourseNumber=0;
int getText=0;
int getText2=0;
int getText3=0;
long getText4;
char num;
int i;

char text[20];
char text2[5];
char text3[10];
int text4[3];

LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM); /*  Declare Windows procedure  */

TCHAR szClassName[ ] = _T("CodeBlocksWindowsApp"); /*  Make the class name into a global variable  */

int WINAPI WinMain (HINSTANCE hThisInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpszArgument,
                     int nCmdShow)
{
    HWND hwnd;               /* This is the handle for our window */
    MSG messages;            /* Here messages to the application are saved */
    WNDCLASSEX wincl;        /* Data structure for the windowclass */

    /* The Window structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
    wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
    wincl.cbSize = sizeof (WNDCLASSEX);

    /* Use default icon and mouse-pointer */
    wincl.hIcon = LoadIcon (NULL, IDI_WINLOGO);
    wincl.hIconSm = LoadIcon (NULL, IDI_WINLOGO);
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL;                 /* No menu */
    wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
    wincl.cbWndExtra = 0;                      /* structure or the window instance */
    /* Use Windows's default colour as the background of the window */
    wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND;

    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
        return 0;

    /* The class is registered, let's create the program*/
    hwnd = CreateWindowEx (
           0,                   /* Extended possibilites for variation */
           szClassName,         /* Classname */
           _T("CGPA Calculator"),       /* Title Text */
           WS_MAXIMIZEBOX |     /* Maximize Box */
           WS_MINIMIZEBOX |     /* Minimize Box */
           WS_SYSMENU,          /* System Menu */
           CW_USEDEFAULT,       /* Windows decides the position */
           CW_USEDEFAULT,       /* where the window ends up on the screen */
           800,                 /* The programs width */
           600,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );

    /* Make the window visible on the screen */
    ShowWindow (hwnd, nCmdShow);

    /* Run the message loop. It will run until GetMessage() returns 0 */
    while (GetMessage (&messages, NULL, 0, 0))
    {
        /* Translate virtual-key messages into character messages */
        TranslateMessage(&messages);
        /* Send message to WindowProcedure */
        DispatchMessage(&messages);
    }

    /* The program return-value is 0 - The value that PostQuitMessage() gave */
    return messages.wParam;
}


/*  This function is called by the Windows function DispatchMessage()  */

LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)                  /* handle the messages */
    {
        case WM_CREATE:
        textfield = CreateWindow("STATIC",
                                 "  *** Welcome To CGPA Calculator ***",
                                  WS_VISIBLE | WS_CHILD | WS_BORDER,
                                  280, 20, 250, 25,
                                  hwnd, NULL, NULL, NULL);
        textfield = CreateWindow("STATIC",
                                 " Your Name :",
                                  WS_VISIBLE | WS_CHILD | WS_BORDER,
                                  220, 70, 90, 20,
                                  hwnd, NULL, NULL, NULL);
        TextBoxName = CreateWindow("EDIT",
                               "",
                               WS_VISIBLE | WS_CHILD | WS_BORDER,
                               320, 70, 160, 20,
                               hwnd, NULL, NULL, NULL);
        button = CreateWindow("BUTTON",
                              "Submit",
                              WS_VISIBLE | WS_CHILD | WS_BORDER,
                              500, 70, 90, 20,
                              hwnd, (HMENU) 1, NULL, NULL);



        textfield = CreateWindow("STATIC",
                                 " Department :",
                                  WS_VISIBLE | WS_CHILD | WS_BORDER,
                                  220, 100, 90, 20,
                                  hwnd, NULL, NULL, NULL);
        TextBoxDept = CreateWindow("EDIT",
                               "",
                               WS_VISIBLE | WS_CHILD | WS_BORDER,
                               320, 100, 160, 20,
                               hwnd, NULL, NULL, NULL);
        button = CreateWindow("BUTTON",
                              "Submit",
                              WS_VISIBLE | WS_CHILD | WS_BORDER,
                              500, 100, 90, 20,
                              hwnd, (HMENU) 2, NULL, NULL);

        textfield = CreateWindow("STATIC",
                                 " Roll No. :",
                                  WS_VISIBLE | WS_CHILD | WS_BORDER,
                                  220, 130, 90, 20,
                                  hwnd, NULL, NULL, NULL);
        TextBoxRoll = CreateWindow("EDIT",
                               "",
                               WS_VISIBLE | WS_CHILD | WS_BORDER,
                               320, 130, 160, 20,
                               hwnd, NULL, NULL, NULL);
        button = CreateWindow("BUTTON",
                              "Submit",
                              WS_VISIBLE | WS_CHILD | WS_BORDER,
                              500, 130, 90, 20,
                              hwnd, (HMENU) 3, NULL, NULL);

        textfield = CreateWindow("STATIC",
                                 " Number of Courses :",
                                  WS_VISIBLE | WS_CHILD | WS_BORDER,
                                  165, 160, 145, 20,
                                  hwnd, NULL, NULL, NULL);
        TextBoxCourse = CreateWindow("EDIT",
                               "",
                               WS_VISIBLE | WS_CHILD | WS_BORDER,
                               320, 160, 160, 20,
                               hwnd, NULL, NULL, NULL);
        button = CreateWindow("BUTTON",
                              "Submit",
                              WS_VISIBLE | WS_CHILD | WS_BORDER,
                              500, 160, 90, 20,
                              hwnd, (HMENU) 4, NULL, NULL);

        button = CreateWindow("BUTTON",
                              "Get Result",
                              WS_VISIBLE | WS_CHILD | WS_BORDER,
                              340, 460, 80, 20,
                              hwnd, (HMENU) 4, NULL, NULL);
        break;
        case WM_COMMAND:
            switch(LOWORD(wParam))
            {
            case 1:
                char *Name;
                Name = &text[0];
                getText = GetWindowText(TextBoxName,Name,20);
                ::MessageBox(hwnd,Name,"Name Submitted",MB_OK);
                break;

            case 2:
                char *Dept;
                Dept = &text2[0];
                getText2 = GetWindowText(TextBoxDept,Dept,20);
                ::MessageBox(hwnd,Dept,"Department Submitted",MB_OK);
                break;

            case 3:
                char *Roll;
                Roll = &text3[0];
                getText3 = GetWindowText(TextBoxRoll,Roll,20);
                ::MessageBox(hwnd,Roll,"Roll No. Submitted",MB_OK);
                break;

            case 4:

                //getText4 = GetWindowLongA(TextBoxCourse,GWL_STYLE);
                cout<<GetWindow(TextBoxCourse,message)<<endl;
                //getText4 = GetWindowText(TextBoxCourse,CourseNum,3);
                //::MessageBox(hwnd,CourseNum,"Course No. Submitted",MB_OK);
                //cout<<CourseNumber<<endl;
                //cout<<GetWindowLongA(TextBoxCourse,GWL_STYLE)<<endl;
                int x=25,y=25;
                for(int i=1;i<=9;i++)
                {
                    AddControlsTextField(hwnd,x);
                    AddControlsTextBox(hwnd,x);
                    AddControlsTextFieldCredit(hwnd,y);
                    AddControlsTextBoxCredit(hwnd,y);
                    AddControlsButtonCredit(hwnd,y);
                    AddControlsTextFieldGPA(hwnd,y);
                    AddControlsTextBoxGPA(hwnd,y);
                    AddControlsButtonGPA(hwnd,y);
                    x=x+25;
                    y=y+25;
                }
                break;
            }
            break;
        case WM_DESTROY:
            PostQuitMessage (0);       /* send a WM_QUIT to the message queue */
            break;
        default:                      /* for messages that we don't deal with */
            return DefWindowProc (hwnd, message, wParam, lParam);
    }

    return 0;
}

void AddControlsTextField(HWND hwnd,int i)
{
    hEdit = CreateWindowW(L"Static",
                  L" Course Name: ",
                  WS_VISIBLE | WS_CHILD | WS_BORDER,
                  30, 190+i, 100, 20,
                  hwnd, NULL, NULL, NULL);
}

void AddControlsTextBox(HWND hwnd,int i)
{
    hEdit2 = CreateWindowW(L"EDIT",
                  L"",
                  WS_VISIBLE | WS_CHILD | WS_BORDER,
                  145, 190+i, 80, 20,
                  hwnd, NULL, NULL, NULL);
}

void AddControlsButtonCredit(HWND hwnd,int i)
{
    hEdit3 = CreateWindowW(L"BUTTON",
                  L" Submit ",
                  WS_VISIBLE | WS_CHILD | WS_BORDER,
                  420, 190+i, 70, 20,
                  hwnd, (HMENU) 5, NULL, NULL);
}

void AddControlsTextFieldCredit(HWND hwnd,int i)
{
    hEdit = CreateWindowW(L"Static",
                  L"  Credit : ",
                  WS_VISIBLE | WS_CHILD | WS_BORDER,
                  270, 190+i, 60, 20,
                  hwnd, NULL, NULL, NULL);
}

void AddControlsTextBoxCredit(HWND hwnd,int i)
{
    hEdit2 = CreateWindowW(L"EDIT",
                  L"",
                  WS_VISIBLE | WS_CHILD | WS_BORDER,
                  340, 190+i, 70, 20,
                  hwnd, NULL, NULL, NULL);
}

void AddControlsTextFieldGPA(HWND hwnd,int i)
{
    hEdit = CreateWindowW(L"Static",
                  L" Earned GPA : ",
                  WS_VISIBLE | WS_CHILD | WS_BORDER,
                  510, 190+i, 100, 20,
                  hwnd, NULL, NULL, NULL);
}

void AddControlsTextBoxGPA(HWND hwnd,int i)
{
    hEdit2 = CreateWindowW(L"EDIT",
                  L"",
                  WS_VISIBLE | WS_CHILD | WS_BORDER,
                  630, 190+i, 60, 20,
                  hwnd, NULL, NULL, NULL);
}

void AddControlsButtonGPA(HWND hwnd,int i)
{
    hEdit3 = CreateWindowW(L"BUTTON",
                  L" Submit ",
                  WS_VISIBLE | WS_CHILD | WS_BORDER,
                  700, 190+i, 70, 20,
                  hwnd, (HMENU) 5, NULL, NULL);
}
