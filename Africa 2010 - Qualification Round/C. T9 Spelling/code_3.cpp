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

int s = 0;

int getPos(int x) {
    int n;
    if(x>=97 && x<=99) {
        n=99-x;
        if(s==2) {
            cout<<" ";
        }
        cout<<A[n];
        s=2;
    } else if( x>=100 && x<=102) {
        n=102-x;
        if(s==3) {
            cout<<" ";
        }
        cout<<D[n];
        s=3;
    } else if( x>=103 && x<=105) {
        n=105-x;
        if(s==4) {
            cout<<" ";
        }
        cout<<G[n];
        s=4;
    } else if( x>=106 && x<=108) {
        n=108-x;
        if(s==5) {
            cout<<" ";
        }
        cout<<J[n];
        s=5;
    } else if( x>=109 && x<=111) {
        n=111-x;
        if(s==6) {
            cout<<" ";
        }
        cout<<M[n];
        s=6;
    } else if( x>=112 && x<=115) {
        n=115-x;
        if(s==7) {
            cout<<" ";
        }
        cout<<P[n];
        s=7;
    } else if( x>=116 && x<=118) {
        n=118-x;
        if(s==8) {
            cout<<" ";
        }
        cout<<T[n];
        s=8;
    } else if( x>=119 && x<=122) {
        n=122-x;
        if(s==9) {
            cout<<" ";
        }
        cout<<W[n];
        s=9;
    } else if(x==32) {
        cout<<"0";
    }
}

int main()
{
    //freopen("input_l3.in","r",stdin);
    //freopen("output_l3.out","w",stdout);

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
	 s=0;
    }


    return 0;
}
