#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] > x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	
	//Write your code here
	float x[20];
	int count = 0, i = 0;
	ifstream source("score1.txt");
	string textline;
	while(getline(source,textline)){
		x[count] = atof(textline.c_str());
		count++;
	}
	sort(x,20);
	ofstream dest("rank.txt");
	int j = 0;
	while(i < count){
		if(x[i] <= x[i-1])
		{
			dest << x[i] << "=" << i+1 << "\n";
			j = 0;
		}else
		{
			dest << x[i] << "=" << i+1-j << "\n";
			j++;
		}
		i++;
	}	
	return 0;
}

