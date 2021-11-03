#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

int main(){
    string str,raw,qRid,quality;
    ifstream inFile;
    inFile.open("C:\\Users\\lijinghong\\Desktop\\gens.txt", ios::in);
    
    inFile>>str>>raw>>qRid>>quality;
    cout<<"RID:"<<str<<endl;
    cout<<"RAW:"<<raw<<endl;
    cout<<"qRid:"<<qRid<<endl;
    cout<<"quality:"<<quality<<endl;
    return 0;
}
