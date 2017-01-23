#include <bits/stdc++.h>

using namespace std;
int N;

struct point{
    int x,y;
}p[50];

double area(){
    double a=0,b=0;
    for (int i=0;i<N;i++){
        a += p[i].x * p[(i+1)%N].y;
        b += p[i].y * p[(i+1)%N].x;
    }
    return abs((a-b)/2.0);
}

int main()
{
    int T;
   // cin >> T;
   // while (T--){
        cin >> N;
        for (int i=0; i<N; i++)
        {
            cin >> p[i].x >> p[i].y;
        }
        cout << round(area()) << endl;
   // }
}
