/*
 * Bài 2. Cho đầu vào là 1 từ điển tiếng anh
 * Hai từ được coi là kề nhau nếu chúng chỉ khác nhau tối đa 1 ký tự
 * VD. help, hell,
 * Hell, whell
 * Man,nan
 * Man, many
 * Many,any
 *   1.   Đầu vào từ điển, hãy liệt kê các cặp từ như vậy
 *   2.   Cho đầu vào là từ ladder và từ add, hỏi xem có cách biến đổi nào để biến từ từ ladder thành add không.
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "fields.h"
#include "mygraph.h"
int check1(char *string1,char *string2,int n){
    int t = 0;
    for (int i = 0; i < n; ++i)
        if (tolower(string1[i]) != tolower(string2[i])) {
            ++t;
            if(i == 0 && i == n -1 && t < 2) continue;
            else return 0;
        }
    return 1;
}
int check2(char *string1,char *string2,int n){
    if(tolower(string2[0]) == tolower(string1[0])){
        for (int i = 1; i < n; ++i)
            if (tolower(string1[i]) != tolower(string2[i]))
                return 0;
        return 1;
    }
    else{
        for (int i = n-1; i >= 0; --i)
            if (tolower(string1[i]) != tolower(string2[i+1]))
                return 0;
        return 1;
    }
}
int check(char *string1,char *string2){
    if(stricmp(string1,string2) == 0) return 0;
    int n = strlen(string1);
    int m = strlen(string2);
    if(m - n == 1 || m - n == -1 || m - n == 0);
    else return 0;
    if(m == n) return check1(string1,string2,n);
    if(m > n) return check2(string1,string2,n);
    return check2(string2,string1,m);
}
void addE(Graph *graph,char *string){
    JRB p;
    jrb_traverse(p,graph->vertex)
        if(p != NULL && check(string,jval_s(p->val))){
            addEdge(graph,getID(graph,string),jval_i(p->key),NULL);
            addEdge(graph,jval_i(p->key),getID(graph,string),NULL);
        }
}
void readFile(Graph *graph){
    IS is = new_inputstruct("tudien.txt");
    int id = 1;
    while(get_line(is) != -1){
        addVertex(graph,id++,is->fields[0]);
        addE(graph,is->fields[0]);
    }
    jettison_inputstruct(is);
}

int main(int argc,char *argv[]){
    char s1[100];
    char s2[100];
    int arr[2000];
    int total = 0;
    int x;
    Graph graph;
    createGraph(&graph);
    readFile(&graph);
    do{
        printf("Nhập từ thứ nhất : ");
        fflush(stdin);
        scanf("%[^\n]s",s1);
        printf("Nhập từ thứ hai : ");
        fflush(stdin);
        scanf("%[^\n]s",s2);
        int id1 = getID(&graph,strlwr(s1));
        int id2 = getID(&graph,strlwr(s2));
        if(id1 != -1 && id2 != -1)total = dijkstra(&graph,id1,id2,NULL,&x,arr,0);
        if(total == -1 || total == 0) printf("Không thể chuyển từ \"%s\" sang \"%s\"",s1,s2);
        else{
            printf("Bạn thể chuyển như sau : ");
            printArr(&graph,arr,total);
        }
        printf("\nBạn muốn chuyển từ tiếp (y/n) : ");
        fflush(stdin);
        x = fgetc(stdin);
    }while(x != 'n');
    dropGraph(&graph);
    return 0;
}
