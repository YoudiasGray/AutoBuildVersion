/*
youdias @ 20171025
examples for use AutoUpdateBuildVersion
*/

#include <iostream>
#include <string>

#include "BuildVersion.h"

using namespace std;

int ShowVersion()
{
    string ReleaseVersion="0";
    string FunctionChangeVersion="0";
    string BugFixVersion="0";
    string BuildVersion_=BuildVersion;
    string Versino=ReleaseVersion+"."+FunctionChangeVersion+"."+BugFixVersion+\
                  "."+BuildVersion_;
    cout<<"Version:"<<Versino<<endl;
}

int main()
{
    ShowVersion();
    cout<<"Hello,World!"<<endl;
    return 0;
}
