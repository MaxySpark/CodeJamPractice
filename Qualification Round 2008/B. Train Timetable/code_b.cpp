#include <iostream>
#include <vector>
#include <cstring>
#include <fstream>
using namespace std;

class Train {
public:
    int T;
    int NA;
    int NB;
    vector <string> FA;
    vector <string> FB;
    void input();
    void display();
};

void Train :: input() {
    string str;
    cin >> T;
    cin >> NA;
    cin >> NB;
    cin.ignore();

    for(int i=0;i < NA; i++) {
        getline(cin,str);
        FA.push_back(str);
    }

    for(int i=0;i < NB; i++) {
        getline(cin,str);
        FA.push_back(str);
    }
}

void Train :: display() {

    for(unsigned int i=0; i< FA.size(); i++) {
        cout<<FA[i]<<endl;
    }

    for(unsigned int i=0; i< FB.size(); i++) {
        cout<<FB[i]<<endl;
    }

}

int main()
{

    freopen("input_sb.in","r",stdin);
    freopen("output_sb.out","w",stdout);

    int N;
    cin>>N;
    Train T[N];
    for(int i=0;i<N;i++) {
        T[i].input();
        T[i].display();
    }
	return 0;
}
