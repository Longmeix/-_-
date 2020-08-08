#include <iostream> 
using namespace std;

int main(){
	int N,i,a;
	int rev_N;
	for(N=1000; N<10000; N++){
		rev_N = 0; 
		a = N;
		for(i=0; i<4; i++){
			rev_N = rev_N*10 + a%10;
			a = a/10;
		}
//		cout<<rev_N<<endl;
		if(N*9 == rev_N){
			cout<<N<<endl;
		}
	}
	return 0; 
}
