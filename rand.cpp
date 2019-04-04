#include <iostream>
using namespace std;

int M=10;
int N=20;

int main() {
	
	srand(time(NULL));
	int ret = rand() % (N-M+1) + M;
	cout << ret << endl;
	return ret;
	
	}
