#ifndef UNTITLED5_MYGRAPH_H
#define UNTITLED5_MYGRAPH_H

#include "data.h"
#include "jval.h"

void  createGraph(Graph *);
void addEdge(Graph *,int edge_1,int edge_2,int *weight);
void addVertex(Graph *,int key,char *mark);
void printGraph(const Graph *,int tag);
int inDegree(const Graph *,int key);
int outDegree(const Graph *,int key);
int getVertexCount(const Graph *);
int getID(const Graph *,char *);
int getEdgesCount(const Graph *);
int checkTopo(const Graph *,int *arr);
int dijkstra(const Graph *,int start,int end,int *edge,int *money,int *arr,int tag_1);
int DFS(const Graph *,int start,int end,int *weight,int *arr,int *time_s,int *time_e,int tag);
int BFS(const Graph *,int start,int end,int *weight,int *arr,int *time_s,int *time_e,int tag);
void printArr(const Graph *,int *arr,int total);
int getweight(const Graph *,int edge_1,int edge_2);
char* getName(const Graph *,int id);
int getConnected(const Graph *graph,int v1,int *arr);
void dropGraph(Graph *graph);

#endif
