#include<bits/stdc++.h>
#define NMAX 100000
#define ll long long
#define pb push_back
int n;
long long x[NMAX];
long long y[NMAX];
#define infinite 1000000000
using namespace std;
struct Analysis {
  long long area;
  vector<vector<int> > borders;
};

Analysis analyze(vector<int> indicesToSkip) {
  long long minX = infinite, minY = infinite, maxX = -infinite, maxY = -infinite;
  for (int i = 0; i < n; i++) {
    bool skip = false;
    for (int j = 0; j < indicesToSkip.size(); j++) {
      if (indicesToSkip[j] == i) {
	skip = true;
      }
    }

    if (skip) continue;

    minX = min(minX, x[i]);
    maxX = max(maxX, x[i]);
    minY = min(minY, y[i]);
    maxY = max(maxY, y[i]);
  }
  Analysis a;
  a.area = (maxX - minX) * (maxY - minY);

  vector<int> up, down, left, right;

  for (int i = 0; i < n; i++) {
    bool skip = false;
    for (int j = 0; j < indicesToSkip.size(); j++) {
      if (indicesToSkip[j] == i) {
	skip = true;
      }
    }

    if (skip) continue;

    if (x[i] == minX) left.push_back(i);
    if (x[i] == maxX) right.push_back(i);
    if (y[i] == minY) up.push_back(i);
    if (y[i] == maxY) down.push_back(i);
  } 

  if (up.size() <= 3) a.borders.push_back(up);
  if (down.size() <= 3) a.borders.push_back(down);
  if (left.size() <= 3) a.borders.push_back(left);
  if (right.size() <= 3) a.borders.push_back(right);

  return a;
}
int main() {
  freopen("reduce.in", "r", stdin);
  freopen("reduce.out", "w", stdout); 
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x[i];
    cin >> y[i];
  }

  Analysis a = analyze(vector<int>());
  long long bestArea = a.area;
  for (vector<int> pointsOnBorder : a.borders) {
    Analysis smallerAnalysis = analyze(pointsOnBorder);
    bestArea = min(bestArea, smallerAnalysis.area);
    for (vector<int> pointsOnBorder2 : smallerAnalysis.borders) {
      if (pointsOnBorder2.size() + pointsOnBorder.size() <= 3) {
	for (int p : pointsOnBorder) {
	  pointsOnBorder2.push_back(p);
    }
   	Analysis analysis3 = analyze(pointsOnBorder2);
  	bestArea = min(bestArea, analysis3.area);
  	for (vector<int> pointsOnBorder3 : analysis3.borders) {
	    if (pointsOnBorder2.size() + pointsOnBorder3.size() <= 3) {
	      for (int p : pointsOnBorder2) {
	        pointsOnBorder3.push_back(p);
	      }
	      Analysis analysis4 = analyze(pointsOnBorder3);
	      bestArea = min(bestArea, analysis4.area);
	      }
       }
      }
    }
  }
cout << bestArea;
}