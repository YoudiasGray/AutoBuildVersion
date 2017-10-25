/*
g++ AutoGenerateBuildVersion.cpp  -o AutoGenerateBuildVersion
*/
/*
youdias @ 201710251841
auto generate current time-stamp to version.h
*/

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <time.h>

using namespace std;

string GetTimeStamp()
{
    string ret="";
    time_t curtime=time(0);
    int tmp=curtime;
    char str[20];
    memset(str,0,20);
    sprintf(str,"%d",tmp);
    ret=str;
    return ret;
}

int main()
{
    ofstream file_write("BuildVersion.h",ios::trunc);
    if(!file_write)
    {
        cout<<"open file error"<<endl;
        return -1;
    }
    string info="#define BuildVersion \""+GetTimeStamp()+"\"";
    file_write<<info<<endl;
    file_write.close();
    return 0;
}



