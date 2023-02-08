#include<bits/stdc++.h>
using namespace std;

template <typename T>
set<T> intersection(const set<T>& s1, const set<T>& s2) {
	set<T> ret;
	for (const T& i : s1) {
		if (s2.count(i)) {
			ret.insert(i);
		}
	}
	return ret;
}

int main() {
	ifstream read("guess.in");
	int animal_num;
	read >> animal_num;
	vector<set<string> > animals(animal_num);
	for (int a = 0; a < animal_num; a++) {
		string name;
		int num;
		read >> name >> num;
		for (int ai = 0; ai < num; ai++) {
			string guess;
			read >> guess;
			animals[a].insert(guess);
		}
	}

	int yes = 0;
	for (int a1 = 0; a1 < animal_num; a1++) {
	for (int a2 = a1 + 1; a2 < animal_num; a2++) {
			set<string> common = intersection(animals[a1], animals[a2]);
			yes = max(yes, (int) common.size() + 1);
		}
	}

	ofstream("guess.out") << yes << endl;
}