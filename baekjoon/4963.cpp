#include <iostream>
#include <cstring> //memset
using namespace std;
 
const int MAX = 50;
 
int w, h;
int map[MAX][MAX]; //지도
bool visited[MAX][MAX]; //방문
 
typedef struct
{
        int dx, dy;
}dir;
 
dir direction[8] = { {1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1} }; //E SE S SW W NW N NE
 
void roamIsland(int y, int x)
{
        //바다면 갈 수 없고 이미 방문한 곳을 올 필요 없다
        if (!map[y][x] || visited[y][x])
                 return;
       
        visited[y][x] = true; //해당 지점 방문 표시
 
        for (int i = 0; i < 8; i++)
        {
                 int newY = y + direction[i].dy;
                 int newX = x + direction[i].dx;
                 //범위 안에 움직일 수 있고 방문하지 않은 지점일 경우에만 돌아다닌다
                 if (newX >= 0 && newX < w && newY >= 0 && newY < h)
                         roamIsland(newY, newX);
        }
}
 
int main(void)
{
        while (1)
        {
                 cin >> w >> h;
                 if (w == 0 && h == 0)
                         break;
 
                 memset(visited, false, sizeof(visited));
 
                 for (int i = 0; i < h; i++)
                         for (int j = 0; j < w; j++)
                                 cin >> map[i][j];
 
                 int islandCnt = 0;
 
                 for(int i=0; i<h; i++)
                         for (int j = 0; j < w; j++)
                                 if (!visited[i][j] && map[i][j]) //섬이고 아직 방문하지 않은 곳이 있다면
                                 {
                                          roamIsland(i, j); //섬 안을 돌아다녀라
                                          islandCnt++;
                                 }
 
                 cout << islandCnt << endl;
        }
        return 0;
}

