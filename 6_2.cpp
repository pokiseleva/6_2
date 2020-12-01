#include <cmath>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <set>
#include <map>
#include <memory>
#include <iterator>
#include <iomanip>
#include <fstream>
using namespace std;


    vector<string> unique(vector<int> ints)
	{
		set<int> a;
		vector<string> res;
		for (auto & c : ints)
		{
			size_t el1 = a.size();
			a.insert(c);
			size_t el2 = a.size();
			if (el2 != el1)
				res.push_back("NO");
			else res.push_back("YES");
		}
		return res;
	}


int main() {
	int n, ints;
	vector<int> a;
	ifstream in;
	in.open("test.txt");
	in >> n;
	for (int i = 0; i < n; i++)
	{
		in >> ints;
		a.push_back(ints);

	}
	vector<string> res = unique(a);
	for (auto & s : res) cout << s << " ";
}