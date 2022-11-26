#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
map<string, bool> agent;
void reset()
{
	for (auto it = agent.begin(); it != agent.end(); it++)
		(*it).second = true;
}
bool all_false()
{
	for (auto it = agent.begin(); it != agent.end(); it++)
		if ((*it).second == true)
			return false;
	return true;
}
int main()
{
	int n, m;
	while (cin >> n)
	{
		string tmp;
		for (int i = 0; i < n; i++)
		{
			cin >> tmp;
			agent[tmp] = true;
		}
		cin >> m;
		int cnt = 0;
		for (int i = 0; i < m; i++)
		{
			cin >> tmp;
			if (agent.count(tmp) == 1)
			{
				agent[tmp] = false;
				if (all_false() == true)
				{
					reset();
					agent[tmp] = false;
					cnt++;
				}
			}
		}
		if (agent.size() == 1 && cnt != 0)
			cout << -1 << endl;
		else
			cout << cnt << endl;
	}
}
