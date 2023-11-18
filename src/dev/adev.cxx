/*
 * adev.cxx
 * 
 * Copyright 2023 mike <mike@Fedora37>
 */


#include <iostream>
#include <cstdint>
#include <vector>

using namespace std;

void prt_vect(vector<uint64_t> &v);
void prt_vect(vector<uint64_t> &v){
	for(auto &m : v) cout << m << " ";
	cout << endl;
}

int main(int argc, char **argv)
{
	vector<uint64_t> f;
	vector<uint64_t> g = {0,1,0,3};
	f.insert(f.end(), g.begin(), g.end());
	prt_vect(f);
	for(uint64_t i = 1; i != 9; ++i){
		f[(2*i)] = f[i];
		//~ f[(4*i + 1)] = 2*f[(2*i + 1)] - f[i];
		//~ f[(4*i + 3)] = 3*f[(2*i + 1)] - 2*f[i];
		g = {0, 2*f[(2*i + 1)] - f[i], 0, 3*f[(2*i + 1)] - 2*f[i]};
		f.insert(f.end(), g.begin(), g.end());
		prt_vect(f);
		if(i == 4) break;
	}
	

	
	return 0;
}

