#include<iostream>
using namespace std;
class Item {
    public:
        int C;
        int I;
        int P[2000];
        void input() {
            cin>>C;
            cin>>I;
            for(int i=0;i<I;i++) {
                cin>>P[i];
            }
        }
        
        void position() {
            for(int i=0;i<I;i++) {
                for(int j=i+1;j<I;j++) {
                    if((P[i]+P[j])==C) {
                        cout<<i+1<<" "<<j+1<<endl;
                        break;
                    }
                }
            }
        }
};

int main() {
    int N;
    int cases[50];
    cin >> N;
    Item A[N];

    for(int i=0;i<N;i++) {
        A[i].input();
        cout<<"Case #"<<i+1<<": ";
        A[i].position();
    }
    return 0;
}
