#include <iostream>
using namespace std;

int main() {
    int cyfry[10]={0,0,0,0,0,0,0,0,0,0};
    int A[]={4,2,6,9,2,4,7,6,9,2,9,3,5,1,5,7,3,1};
    for(int i=0;i<sizeof(A)/sizeof(*A);i++){
        switch(A[i]){
            case 0:
                cyfry[0]+=1;
        break;
            case 1:
                cyfry[1]+=1;
        break;
            case 2:
                cyfry[2]+=1;
        break;
            case 3:
                cyfry[3]+=1;
        break;
            case 4:
                cyfry[4]+=1;
        break;
            case 5:
                cyfry[5]+=1;
        break;
            case 6:
                cyfry[6]+=1;
        break;
            case 7:
                cyfry[7]+=1;
        break;
            case 8:
                cyfry[8]+=1;
        break;
            case 9:
                cyfry[9]+=1;
        break;
    }
    }
    for(int j=0;j<10;j++){
        if (cyfry[j]%2==1){
            cout<<j<<endl;
        }
    }
    return 0;
}
