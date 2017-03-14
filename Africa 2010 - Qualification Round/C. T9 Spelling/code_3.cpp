#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

// vector <char> A { 'a' , 'b' , 'c' };
// vector <char> D { 'd' , 'e' , 'f' };
// vector <char> G { 'g' , 'h' , 'i' };
// vector <char> J { 'j' , 'k' , 'l' };
// vector <char> M { 'm' , 'n' , 'o' };
// vector <char> P { 'p' , 'q' , 'r' , 's' };
// vector <char> T { 't' , 'u' , 'v' };
// vector <char> W { 'w' , 'x' , 'y' , 'z' };

vector <int> A { 1 , 2}; 

int main()
{
    freopen("input_s3.in","r",stdin);
    freopen("output_s3.out","w",stdout);
    
    int N;
    vector <string> WordList;
    string str;
    
    cin >> N;
    cin.ignore();

    for(int i =0 ; i< N; i++) {
        getline(cin,str);
        WordList.push_back(str);    
    }

    for(unsigned int j=0;j < WordList.size(); j++){
        cout<<WordList[j]<<endl;
    
    
    char list[100] = "bhargab";

    if(find(A.begin(),A.end(),2)!=A.end()) {
        cout << "SUCCESS";
    }
    // cout << A.begin();   
    return 0;
}