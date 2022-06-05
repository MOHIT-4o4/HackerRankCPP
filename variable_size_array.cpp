#include <vector>
#include <iostream>
using namespace std;


int main() {
    int value1,value2;
    int numValues;
    int numArrays;
    int s=0;
    cin>>numArrays>>numValues;
    int *a[numArrays];
    while(numArrays--){
            int numElements;
            cin>>numElements;
            a[s] = new int [numElements];
            for(int i=0;i<numElements;i++){
                cin>>a[s][i];
            }
            s++;
        }
        
    while(numValues--){
        cin>>value1>>value2;
        cout<<a[value1][value2]<<endl;
    }
    return 0;
}