#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &A,int &B,int &C,int &D){
    int x[] = {A, B, C, D};
    int j =  rand()%4;
    
    for(int i=0; i<3 ; i++){
        swap(x[j],x[i]);
        A = x[0];
        B = x[1];
        C = x[2];
        D = x[3];
    }
}