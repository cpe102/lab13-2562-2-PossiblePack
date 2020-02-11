#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	//Write your code here.
	int position=0;
	for(int j=1; j<N; j++){
		for(int i=0; i<N; i++){
			if(i!=j){
				cout << " " << d[i] << " ";
			}else cout << "[" << d[i] << "]";
		}
		cout << " =>  ";
		for(int k=j; k>0 ;k--){
			if(d[k]>d[k-1]) swap(d,k,k-1);
			position[] = k;
			}
			for(int m=0; m<N; m++){
				if(d[m]!=position[m]) 
				cout << " " << d[m] << " ";
				else cout << "[" << d[m] << "]";
			}
			cout << "\n";
		}
}


int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
