#include <iostream>
#include <limits>
#include <cmath>
//problema 12
int divisi(){
	int i=1,g=0;
	int max = std::numeric_limits<int>::max();
	for(int cont=0;cont<max;cont++){
		int meta=0;
		int sum=g+i;
		i++;
		g=sum;
		int sqrtsum=(int)sqrt(sum);
		for(int j=1;j<=sqrtsum;j++){
			if(sum%j==0){
				meta+=2;
			}
			if(meta>500){
				return sum;
			}
		}
	}
	return 0;
}
int main(){
	std::cout<<divisi();
	return 0;
}
