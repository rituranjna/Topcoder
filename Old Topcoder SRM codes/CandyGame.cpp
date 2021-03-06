#include <algorithm>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <fstream>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <map>
#include <set>
using namespace std;

#define pb push_back
#define mp make_pair
#define sz size()
#define bg begin()
#define en end()
#define Y second
#define X first
typedef long long ll;

#define fi freopen("input.txt","r",stdin)
#define fo freopen("output.txt","w",stdout)

const double pi     =   acos(-1.0);
const double eps    =   1e-8;

#define print(a) cout<<(#a)<<" = "<<a<<"  ";
#define println(a) cout<<(#a)<<" = "<<a<<"\n";
#define fill(a,val) memset(a ,val, sizeof(a) );

vector <string> parse(string s, string c)
{
  int len = c.length(), p = -len, np;
  vector <string> ans;

  do
    {
      np = s.find(c, p+len);
      ans.push_back(s.substr(p+len, np - p - len));
      p = np;
    }
  while (p != string::npos);

  return ans;
}


/*Solution code starts here */

class CandyGame
{
public:

    vector<string> edge;
    int n;

    ll ans;
    int done;

    int solve( int curr, int p)
     {
          int d=0;
          done++;

          for(int i=0;i<n;i++)
              if(i!=p && edge[curr][i]=='Y')
                 d=max( d, solve(i,curr)+1);

          if(p!=-1)
          ans+=(1LL<<d);
          return d;
     }


int maximumCandy(vector <string> graph, int target)
{
    edge=graph;
    n=edge.sz;

    ans=0;
    done=0;

     solve(target,-1);

     if( (done!=n) || (ans > 2000000000LL) )  return -1;

     return ans;


}


};


double test0() {
	string t0[] = {"NYN", "YNY", "NYN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 1;
	CandyGame * obj = new CandyGame();
	clock_t start = clock();
	int my_answer = obj->maximumCandy(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"NYN", "YNY", "NYN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 2;
	CandyGame * obj = new CandyGame();
	clock_t start = clock();
	int my_answer = obj->maximumCandy(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"NYYY", "YNNN", "YNNN", "YNNN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 0;
	CandyGame * obj = new CandyGame();
	clock_t start = clock();
	int my_answer = obj->maximumCandy(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"NYYY", "YNNN", "YNNN", "YNNN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 1;
	CandyGame * obj = new CandyGame();
	clock_t start = clock();
	int my_answer = obj->maximumCandy(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 4;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string t0[] = {"NYNNNYN",
 "YNYNYNN",
 "NYNYNNN",
 "NNYNNNN",
 "NYNNNNN",
 "YNNNNNY",
 "NNNNNYN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 0;
	CandyGame * obj = new CandyGame();
	clock_t start = clock();
	int my_answer = obj->maximumCandy(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 11;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	string t0[] = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN",
 "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN",
 "NYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN",
 "NNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN",
 "NNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNN",
 "NNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNN",
 "NNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNN",
 "NNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNN",
 "NNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNN",
 "NNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNN",
 "NNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNN",
 "NNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNN",
 "NNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNN",
 "NNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNN",
 "NNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNN",
 "NNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNN",
 "NNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNN",
 "NNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNN",
 "NNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNN",
 "NNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNN",
 "NNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNN",
 "NNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNN",
 "NNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNN",
 "NNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNN",
 "NNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNN",
 "NNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNN",
 "NNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNN",
 "NNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNN",
 "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNN",
 "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYN",
 "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNY",
 "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 0;
	CandyGame * obj = new CandyGame();
	clock_t start = clock();
	int my_answer = obj->maximumCandy(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = -1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}

int main() {
	int time;
	bool errors = false;
	
	time = test0();
	if (time < 0)
		errors = true;
	
	time = test1();
	if (time < 0)
		errors = true;
	
	time = test2();
	if (time < 0)
		errors = true;
	
	time = test3();
	if (time < 0)
		errors = true;
	
	time = test4();
	if (time < 0)
		errors = true;
	
	time = test5();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
