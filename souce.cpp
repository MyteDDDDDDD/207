#include <iostream>
#include<string>
using namespace std;
int n,p,u,t;
string place[200];
int r[200][200];


void cal() {
	cout << 111;
}
void addR(string p1,string p2,int d) {
	int n1, n2;
	for (int i = 0; i < n; i++) {
		if (place[i] == p1)
			n1 = i;
		else if (place[i] == p2)
			n2 = i;
	}
	r[n1][n2] = d;
}

void readR() {
	string s;
	getline(cin, s);
	int s1=0, s2=0, s3=0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ':')
			s1 = i;
		else if (s[i] == ' ') {
			if (s[i + 1] > 57)// not a space in name;
				continue;
			if (s2 == 0)
				s2 = i;
			else
				s3 = i;// double
		}
	}

	string p1 = s.substr(0, s1);
	string p2 = s.substr(s1, s2);
	if (s3 != 0) {
		int d = stoi(s.substr(s2, s3));
		addR(p1, p2, d);
		d= stoi(s.substr(s3));
		addR(p2, p1, d);
	}
	else {
		int d = stoi(s.substr(s2));
		addR(p1, p2, d);
	}

}

int main() {
	cin >> n;
	while (!cin.eof()) {
		for (int i = 0; i <= n; i++) {
			getline(cin, place[i]);
			cout << place[i];
		}
		cin >> p;
		cout << "!";
		for (int i = 0; i < p; i++) {
			cout << 111;
			readR();
		}
		cout << "?" ;
		for (int i = 0; i < n; i++) {
			if (place[i] == "office")
				u = i;
			else if (place[i] == "hall")
				t = i;
		}
		//cal();
		cin >> n;
	}
	


	return 0;
}
