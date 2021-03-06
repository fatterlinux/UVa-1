#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

#define INF	1<<30
#define FOI(i, A, B) for (i = A; i <= B; i++)
#define FOD(i, A, B) for (i = A; i >= B; i--)

int main(){
	//freopen("testI.txt", "r", stdin);
	//freopen("testO.txt", "w", stdout);
	while (true) {
		int N, i, j;
		cin >> N;
		if (N == 0) break;
		int preR = INF, preD = INF, mm = INF;
		string S;
		cin >> S;
		FOI(i, 0, N-1) {
			if (S[i] == 'Z') {
				mm = 0;
				break;
			}
			if (S[i] == 'R') {
				preR = i;
				mm = min(mm, abs(preR - preD));
				continue;
			}
			if (S[i] == 'D') {
				preD = i;
				mm = min(mm, abs(preD - preR));
				continue;
			}
		}
		cout << mm << endl;
	}
	return 0;
}
