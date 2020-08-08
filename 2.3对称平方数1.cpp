#include <iostream>
using namespace std;

int Reverse(int x){
	int revx = 0;
	while(x != 0){
		revx = revx*10 + x%10;
		x /= 10;
	}
	return revx; 
}

int main() {
	int N,sqr_N;
	for(N=0; N<=256; N++){
		sqr_N = N*N;
		if(sqr_N == Reverse(sqr_N)){
			cout<<N<<endl;
		}
	}
}
