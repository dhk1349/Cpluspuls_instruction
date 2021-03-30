#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream readFile;
    readFile.open("../sample.txt");

    if (readFile.is_open()){
        string line;

        while(getline(readFile, line, '\n')){
            cout<<line<<endl;
        }
    }
    readFile.close();

    string line;
    string title;
    cout<<"Type anything: ";
    cin>>line;
    cout<<"Type file name: ";
    cin>>title;

    ofstream writeFile;
    writeFile.open(title);
    if(writeFile.is_open()){
        writeFile<<line;
    }
    writeFile.close();
    return 0;
}