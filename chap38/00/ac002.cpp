#include <iostream>
using namespace std;

const int maxn=1001,maxm=100001;

struct Edge{
    int next;
    int from;
	int to;
	int dist;	
}edge[maxn];

int head[maxn],edgeNum;

void addEdge(int from,int to,int dist){
    edge[++edgeNum].next = head[from];
    edge[edgeNum].from = from;
    edge[edgeNum].to = to;
    edge[edgeNum].dist = dist;
    head[from] = edgeNum;
}
/*
6
1 2
1 3
1 4
2 3
2 5
5 1


1,2
edge[1].next = head[1] = 0
edge[1].to = 2
edge[1].dist = 1
head[1]=1
1,3
edge[2].next = head[1] =1
edge[2].to = 3
edge[2].dist = 1
head[1]=2
1,4
edge[3].next = head[1] = 2
edge[3].to = 4
edge[3].dist = 1
head[1]=3
2,3
edge[4].next = head[2] = 0
edge[4].to = 3
edge[4].dist = 1
head[2]=4
2,5
edge[5].next = head[2] = 4
edge[5].to = 5
edge[5].dist = 1
head[2]=5
5,1
edge[6].next = head[5] = 0
edge[6].to = 1
edge[6].dist = 1
head[5]=6

head{0,3,5,0,0,6,0}
edge.next{0,0,1,2,3,0,4,0}



*/
int main(){
	edgeNum = 0;
	int e,a,b;
	cin >> e;
	for(int i=1;i<=e;i++){
		cin >> a >> b;
		addEdge(a,b,1);
	}
	
	for(int n=0;n<10;n++)
	for(int i=head[n];i!=0;i=edge[i].next){
		cout << edge[i].from << "->" << edge[i].to << endl;
	}
	
	cout << "OK" << endl;
			
    return 0;
}
