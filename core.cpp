#include <bits/stdc++.h>
using namespace std;



/*


	▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
	▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▀▀▀▀▄▒▒▒▒▒▒▒▒
	▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▀▒▒▒▒▒▒▒▒
	▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒
	▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄▄▄▄▀▒▒▒▒▒▒▒▒
	▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
	▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██▌░░▒▒▒▒▒▒▒▒▒▒▒▄▄▄▄▄▒▒▒▒▒▒▒▒▒
	▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░▄▄███▀░░░░▒▒▒▒▒▒▒▒▒▒█▒▒▒▒█▒▒▒▒▒▒▒▒
	▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░█████░▄█░░░░▒▒▒▒▒▒▒▒▒█▒▒▒▒█▒▒▒▒▒▒▒▒
	▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░▄████████▀░░░░▒▒▒▒▒▒▒▒▒█▀▀▀▀▒▒▒▒▒▒▒▒▒
	▒▒░░░░░░░░░░░░░░░░░░░░░░░░▄█████████░░░░░░░▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒
	▒░░░░░░░░░░░░░░░░░░░░░░░░░░▄███████▌░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
	▒░░░░░░░░░░░░░░░░░░░░░░░░▄█████████░░░░░░░░▒▒▒▒▒▒▒▒█▀▒▒▒█▒▒▒▒▒▒▒▒
	▒░░░░░░░░░░░░░░░░░░░░░▄███████████▌░░░░░░░░▒▒▒▒▒▒▒▒█▒█▒▒█▒▒▒▒▒▒▒▒
	▒░░░░░░░░░░░░░░░▄▄▄▄██████████████▌░░░░░░░░▒▒▒▒▒▒▒▒█▒▒█▒█▒▒▒▒▒▒▒▒
	▒░░░░░░░░░░░▄▄███████████████████▌░░░░░░░░░▒▒▒▒▒▒▒▒█▒▒▒▄█▒▒▒▒▒▒▒▒
	▒░░░░░░░░░▄██████████████████████▌░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
	▒░░░░░░░░████████████████████████░░░░░░░░░░▒▒▒▒▒▒▒▒█▀▀▀▀▄▒▒▒▒▒▒▒▒
	▒█░░░░░▐██████████▌░▀▀███████████░░░░░░░░░░▒▒▒▒▒▒▒▒█▄▄▄▄▀▒▒▒▒▒▒▒▒
	▐██░░░▄██████████▌░░░░░░░░░▀██▐█▌░░░░░░░░░▒▒▒▒▒▒▒▒▒█▒▒▒▒█▒▒▒▒▒▒▒▒
	▒██████░█████████ ░░░░░░░░░░▐█▐█▌░░░░░░░░░▒▒▒▒▒▒▒▒▒█▄▄▄▄▀▒▒▒▒▒▒▒▒
	▒▒▀▀▀▀░░░██████▀░░░░░░░░░░░░▐█▐█▌░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
	▒▒▒▒▒░░░░▐█████▌░░░░░░░░░░░░▐█▐█▌░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
	▒▒▒▒▒▒░░░░███▀██░░░░░░░░░░░░░█░█▌░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
	▒▒▒▒▒▒▒▒░▐██░░░██░░░░░░░░▄▄████████▄▄▄▄▄▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
	▒▒▒▒▒▒▒▒▒██▌░░░░█▄░░░░░░▄███████████████████▄▄▄▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
	▒▒▒▒▒▒▒▒▒▐██▒▒░░░██▄▄████████████████████████████████████████████
	▒▒▒▒▒▒▒▒▒▒▐██▒▒▄█████████████████████████████████████████████████
	▒▒▒▒▒▒▒▒▒▒▄▄█████████████████████████████████████████████████████
	█████████████████████████████████████████████████████████████████

	  _   _                                  _______ _                 _         _____  _           _   
	 | \ | |                                |__   __| |               | |       |  __ \| |         | |  
	 |  \| | __ _ _   _ _   _  ___ _ __        | |  | |__   __ _ _ __ | |__     | |__) | |__   __ _| |_ 
	 | . ` |/ _` | | | | | | |/ _ \ '_ \       | |  | '_ \ / _` | '_ \| '_ \    |  ___/| '_ \ / _` | __|
	 | |\  | (_| | |_| | |_| |  __/ | | |      | |  | | | | (_| | | | | | | |   | |    | | | | (_| | |_ 
	 |_| \_|\__, |\__,_|\__, |\___|_| |_|      |_|  |_| |_|\__,_|_| |_|_| |_|   |_|    |_| |_|\__,_|\__|
	         __/ |       __/ |                                                                          
	        |___/       |___/                                                                           


*/



// #define int long long
typedef long long ll;
typedef unsigned long long ull;
const int oo = INT_MAX;
const double PI = acos(-1.0);
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef pair<ii,ii> iv;
typedef vector <vector<int>> vdp;
#define X first
#define Y second
#define pb push_back
#define ins insert
#define el '\n'

#define Fast ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define TEN " "
#define Fio freopen (TEN".inp","r",stdin); freopen (TEN".out","w",stdout);
#define Ro freopen (TEN".inp","r",stdin);
#define Wo freopen (TEN".out","w",stdout);
#define clrscr system("cls");



signed main()
{
	Fast
	// Fio
	// Ro
	// Wo
	//
	// auto begin = std::chrono::high_resolution_clock::now();

	// int t;
	// cin >> t;
	// for (int tt = 1; tt <= t; tt++){

		

	// }

	// auto end = std::chrono::high_resolution_clock::now();
	// cout << setprecision(5) << fixed << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
	return 0;
}