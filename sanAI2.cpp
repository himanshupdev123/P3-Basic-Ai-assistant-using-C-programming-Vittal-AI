#include <stdio.h>
#include <stdlib.h>
#include<graphics.h>
#include<conio.h>
#include <windows.h>
#include <MMsystem.h>
#include<string>
using namespace std;
char user[100];int opt;string s;
int main()
{
    while(1)
    {
        start:
        gets(user); system("CLS");
        if(strcmp(user,"namaste")==0||strcmp(user,"Namaste")==0||strcmp(user,"hi")==0||strcmp(user,"hello")==0||strcmp(user,"hare krishna")==0||strcmp(user,"jai shree ram")==0||strcmp(user,"hey")==0)
    {
      printf("\n Namaste \n Welcome to Vittal AI\n how may I assist you today ?\n");
      PlaySound(TEXT("namaste.wav"), NULL, SND_SYNC);
      goto start;
    }
    else if(strcmp(user,"bye")==0||strcmp(user,"good bye")==0||strcmp(user,"Radhe Radhe")==0)
    {
        printf("\n good bye \n take care\n Radhe Radhe");
        PlaySound(TEXT("bye.wav"), NULL, SND_SYNC);
      exit(0);
    }
    else if(strcmp(user,"open photos")==0||strcmp(user,"open gallery")==0||strcmp(user,"open pictures")==0||strcmp(user,"open pics")==0)
    {
        string s ="C://Users/Himanshu P Dev/Desktop/photos";
        ShellExecute(NULL,"open",s.c_str(),NULL,NULL,SW_SHOWNORMAL);system("CLS");
        PlaySound(TEXT("pic.wav"), NULL, SND_SYNC);
        goto start;
    }
    else if(strcmp(user,"i feel like writing")==0||strcmp(user,"i want to write")==0||strcmp(user,"open word")==0||strcmp(user,"i feel like writing kano")==0)
    {
        string s ="C://Users/Himanshu P Dev/Desktop/New Microsoft Word Document.docx";
        ShellExecute(NULL,"open",s.c_str(),NULL,NULL,SW_SHOWNORMAL);
         PlaySound(TEXT("word.wav"), NULL, SND_SYNC);
        goto start;
    }
     else if(strcmp(user,"im bored bro")==0||strcmp(user,"im bored")==0||strcmp(user,"i feel bored")==0||strcmp(user,"its boring today")==0)
     {
         printf("Oh ! Thats fine , i am right here to entertain you\n");
         PlaySound(TEXT("enter.wav"), NULL, SND_SYNC);
         printf("\npress 1 to open youtube");
          PlaySound(TEXT("yt.wav"), NULL, SND_SYNC);
           printf("\npress 2 to open spotify");
          PlaySound(TEXT("sy.wav"), NULL, SND_SYNC);
          printf("\npress 3 to open Netflix");
          PlaySound(TEXT("nf.wav"), NULL, SND_SYNC);
          printf("\npress 4 to open Instagram\n");
          PlaySound(TEXT("ig.wav"), NULL, SND_SYNC);
         choice:
         scanf("%d",&opt);
        if(opt==1)
        {
           string s ="https://www.youtube.com/";
             ShellExecute(NULL,"open",s.c_str(),NULL,NULL,SW_SHOWNORMAL);
             PlaySound(TEXT("oyt.wav"), NULL, SND_SYNC);
             system("CLS");goto start;
        }
        else if(opt==2)
        {
             string s ="https://open.spotify.com/?";
             ShellExecute(NULL,"open",s.c_str(),NULL,NULL,SW_SHOWNORMAL);
             PlaySound(TEXT("osy.wav"), NULL, SND_SYNC);
            goto start; system("CLS");
        }
        else if(opt==3)
        {
             string s ="https://www.netflix.com/in/";
             ShellExecute(NULL,"open",s.c_str(),NULL,NULL,SW_SHOWNORMAL);
             PlaySound(TEXT("onf.wav"), NULL, SND_SYNC);
             system("CLS");goto start;
        }
        else if(opt==4)
        {
             string s ="https://www.instagram.com/";
             ShellExecute(NULL,"open",s.c_str(),NULL,NULL,SW_SHOWNORMAL);
             PlaySound(TEXT("oig.wav"), NULL, SND_SYNC);
             system("CLS");goto start;
        }
         else
         {
             printf("\n please enter a valid option !");
             PlaySound(TEXT("valid.wav"), NULL, SND_SYNC);
         goto choice;system("CLS");

         }
        }
         else if(strcmp(user,"make a search")||strcmp(user,"search this on google")||strcmp(user,"google this"))
        {
           char text[100];
        printf("\n what you want to search\n");
        PlaySound(TEXT("search.wav"), NULL, SND_SYNC);
        gets(text);
        string result;
        string s ="https://www.google.co.in/search?q=";
        result=s+text;
        ShellExecute(NULL,"open",result.c_str(),NULL,NULL,SW_SHOWNORMAL);
            goto start;
        }
    else
    {
        printf("\n im sorry\n i didn't get that\n");
        PlaySound(TEXT("sorry.wav"), NULL, SND_SYNC);
        goto start;
    }
    }
}
