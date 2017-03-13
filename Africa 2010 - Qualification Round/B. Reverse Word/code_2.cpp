#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
    
    int N;
    vector<string> WordList;
    char str[1000];
    string str2;
    char d[2]=" ";
    int count=0;
    cin>>N;
    while(getline(cin,str2)) {
       
        strcpy(str,str2.c_str());
        if(strlen(str)!=0) {
            char *token;
            token = strtok(str,d);
            
            while(token != NULL) {
                WordList.insert(WordList.begin(),token);
                token = strtok(NULL,d);
            }
            
            cout<<"Case #"<<++count<<": ";

            for(unsigned int i=0; i < WordList.size(); i++) {
                cout<<WordList[i]<<" ";
                if(i==WordList.size()-1) {
                    cout<<endl;
                    WordList.clear();
                }
            }

        }
        

    } 
    return 0;
}

