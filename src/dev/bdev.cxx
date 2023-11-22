/*
 * bdev.cxx
 * solution 808981553
 * Copyright 2023 mike <mike@Fedora37>
 */


#include <iostream>
#include <cstdint>
#include <vector>

using namespace std;

void prt_vect(vector<uint64_t> &v);
void prt_vect(vector<uint64_t> &v){
	for(auto &m : v) cout << m << " ";
}

int main(int argc, char **argv)
{
	vector<uint64_t> f;
	vector<uint64_t> g = {0,1,0,3};
	f.insert(f.end(), g.begin(), g.end());
	prt_vect(f);
	for(uint64_t i = 1; i != 82; ++i){
		f[(2*i)] = f[i];
		g = {0,  2*f[(2*i + 1)] - f[i],  0,  3*f[(2*i + 1)] - 2*f[i] };
		f.insert(f.end(), g.begin(), g.end());
		cout << "i:" << i << "  ";
		prt_vect(f);
		uint64_t S = 0;
		uint64_t j = 0;
		while(j <= i) S += f[j++];
		cout << "S[" << i << "] = " << S << endl << endl;; 
	}
	//~ // formated print of vector 'f'
	//~ f.erase(f.begin());
	//~ for(int i = 0; i != f.size(); ++i){
		//~ cout << f[i];
		//~ if(((i % 3) + 1)==3) {
			//~ cout << "   ";
		//~ }else{ 
			//~ cout << " ";
		//~ }
		//~ if(((i % 9) + 1) == 9) cout<<endl;
		
	//~ }
		
		
	

	
	return 0;
}

