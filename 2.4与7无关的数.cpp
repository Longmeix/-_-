#include <iostream>
using namespace std;

bool Besides7(int x){
	if(x%7 == 0)
		return false;
	while(x != 0){
		if(x%10 == 7){
			return false;
		}
		x /= 10;
	}
	return true;
}

int main(){
	int N,i;
	int sqr_sum = 0;
	cin>>N;
	for(i=1; i<=N; i++){
		if( Besides7(i) ){
			sqr_sum += i*i;
		}
	}
	cout<<sqr_sum;
	return 0;
}
