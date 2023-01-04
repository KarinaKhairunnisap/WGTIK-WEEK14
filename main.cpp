#include "graph.h"


int main()
{

    adrNode G;
    info(G) = NULL;
    cout << info(G) << endl;
    adrNode P = newNode_1301213106('A');
    addNode_1301213106(G, P);

    P = newNode_1301213106('B');
    addNode_1301213106(G, P);

    P = newNode_1301213106('C');
    addNode_1301213106(G, P);

    P = newNode_1301213106('D');
    addNode_1301213106(G, P);

    addEdge_1301213106(G, 'A', 'C');
    addEdge_1301213106(G, 'A', 'D');
    addEdge_1301213106(G, 'A', 'B');

    addEdge_1301213106(G, 'C', 'A');

    addEdge_1301213106(G, 'D', 'B');
    addEdge_1301213106(G, 'D', 'A');

    addEdge_1301213106(G, 'B', 'A');
    addEdge_1301213106(G, 'B', 'D');

    printGraph_1301213106(G);

    if (isConnected_1301213106(G, 'A', 'C')){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
    return 0;


}
