#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

const int A[3] = { 222, 22, 2 };
const int D[3] = { 333, 33, 3 };
const int G[3] = { 444, 44, 4 };
const int J[3] = { 555, 55, 5 };
const int M[3] = { 666, 66, 6 };
const int P[4] = { 7777, 777, 77, 7 };
const int T[3] = { 888, 88 ,8 };
const int W[4] = { 9999 ,999, 99, 9 };

int getPos(int x) {
    int n;
    if(x>=97 && x<=99) {
        n=99-x;
        cout<<A[n];
    } else if( x>=100 && x<=102) {
        n=102-x;
        cout<<D[n];
    } else if( x>=103 && x<=105) {
        n=105-x;
        cout<<G[n];
    } else if( x>=106 && x<=108) {
        n=108-x;
        cout<<J[n];
    } else if( x>=109 && x<=111) {
        n=111-x;
        cout<<M[n];
    } else if( x>=112 && x<=115) {
        n=115-x;
        cout<<P[n];
    } else if( x>=116 && x<=118) {
        n=118-x;
        cout<<T[n];
    } else if( x>=119 && x<=122) {
        n=122-x;
        cout<<W[n];
    } else if(x==32) {
        cout<<"0";
    }
}

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

        for(int i=0;i < WordList[j].size() ;i++) {
            getPos(int(WordList[j][i]));
        }
	 cout<<endl;
    }


    return 0;
}
