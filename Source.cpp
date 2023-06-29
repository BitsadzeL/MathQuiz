#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<ctime>
#include<random>
using namespace std;
int main() {
	srand(time(0));
	ifstream ifs("questions.txt");
	ofstream ofs("users.txt", fstream::app);
	string name, questions[1000], h, a, b, answer;
	int   u=0,n, qulebi = 0, i, k, p, l, j, o, q, f, m,ai;
	vector<string> v;
	vector<string> question;
	vector<int> w; 
	vector<int> g;
	cout << "Enter your name!" << endl;
	cin >> name; 
	ifs >> n; 
	for (i = 0; i < n; i++)
	{
		getline(ifs, questions[i]);
		v.push_back(questions[i]);
	}
	cout << "Enter amount of questions!" << endl;
	cin >> k;
	if (k < 1 || k>1000)
	{
		cout << "Something went wrong!!!" << endl;
	}
	else
	{
		for (j = 0; j < k; j++)
		{
			m = rand() % 1001;
			w.push_back(m);
			h = v[m];
			question.push_back(h);
			for (i = 0; i < h.size(); i++)
			{
				if (h[i] == ';')
				{
					p = i;
					g.push_back(p);
					ai = g[0];
					a = h.substr(i + 1, h.size());
					b = h.substr(0, ai); 
				}
			}
			cout << b << endl;
			cout << "Enter answer!" << endl;
			cin >> answer;
			if (answer == a)
			{
				cout << "Congrats! That's correct" << endl;
				qulebi++;
			}
			else
			{
				cout << "Think better next time!" << endl;
			}
		}
		ofs << name << " " << qulebi << "/" << k << endl;
		cout << "Your result:" << qulebi << '/' << k;
	}
}
