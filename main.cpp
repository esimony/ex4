//
// Created by eden on 12/01/2020.
//

#ifndef EX4_BOOT_H
#define EX4_BOOT_H

#include <iostream>
#include "MySerialServer.h"
#include "MyTestClientHandler.h"
#include "MyParallelServer.h"
#include "MyClientHandler.h"
#include "State.h"
#include "Point.h"
#include "SearchSolver.h"

#include "CacheManager.h"
#include "FileCacheManager.h"
#include "StringReverse.h"
#include "Matrix.h"
#include "SearchSolver.h"
#include "BFS.h"
#include "DFS.h"
#include "BestFS.h"
#include "AStar.h"

//#define SERIAL_TEST

using namespace std;

namespace boot{
    class Main;
}

class boot::Main {
public:
    static int main(int port) {
        try {
////#ifdef SERIAL_TEST
//            MySerialServer *mss = new MySerialServer();
//            Solver<string ,string> *sr = new StringReverse();
//            CacheManager<string> *cm = new FileCacheManager(5);
//            ClientHandler *c = new MyTestClientHandler(sr, cm);
//            mss->open(port, c);
//            mss->stop();
//////#else
//            MyParallelServer *mps = new MyParallelServer();
//            CacheManager<string> *cm = new FileCacheManager(5);
//            // Run the project whit a star algorithm, cause according to the trail is the best searcher
//            Searcher<Point> * aStar = new AStar<Point>();
//            Solver<vector<string>, string> *solver = new SearchSolver(aStar);
//            ClientHandler *c = new MyClientHandler(solver ,cm);
//            mps->open(port, c);
//            mps->stop();
            //vector<string> vec = {"1,2,3","-1,5,6","7,8,9","0,0","2,2","end"};
           // Searchable<Point> *m = new Matrix(vec);
           // Searcher<Point>* searcher = new BFS<Point>();
            //vector<State<Point>*> BFSsearch = searcher->search(m);


//#endif

            return 0;
        } catch (const char * e) {
            cout << e << endl;
        }
        // TODO: delete all new members
    }
};

int main(int argc, char *argv[]) {
   // boot::Main::main(atoi(argv[1]));
  // State<Point> *s = new State<Point>(new Point(0,0),1);
//   State<Point> *v = s;
//   cout << s->getCost() << endl;
////   if (s->operator==(v))
////       cout << 1;
////   else
////       cout << 0;
   vector<string> vec =
           {




           };
//                        {"1,1,3,1,2,3,4,5,4,4,4",
//                         "-1,2,3,1,2,3,4,5,4,4,4",
//                         "1,2,3,1,2,3,4,5,4,4,4",
//                         "1,2,3,1,2,3,4,5,4,4,4",
//                         "1,2,3,1,2,3,4,5,4,4,4",
//                         "1,2,3,1,2,3,4,5,4,4,4",
//                         "1,2,3,1,2,3,4,5,4,4,4",
//                         "1,2,3,1,2,3,4,5,4,4,4",
//                         "1,2,3,1,2,3,4,5,4,4,-1",
//                         "1,2,3,1,2,3,4,5,4,-1,4",
//                         "1,2,3,1,2,3,4,5,4,4,4",
//                         "0,0",
//                         "10,10",
//                         "end"};
//   Searchable<Point> *m = new Matrix(vec);
////   BestFS<Point>* test = new BestFS<Point>();
////   test->search(m);
    Searcher<Point> * bestFS = new BestFS<Point>();
    Searcher<Point> * bFS = new BFS<Point>();
    Searcher<Point> * dFS = new DFS<Point>();
    Searcher<Point> * aStar = new AStar<Point>();
    SearchSolver * solver1 = new SearchSolver(aStar);
    SearchSolver * solver2 = new SearchSolver(bestFS);
    SearchSolver * solver3 = new SearchSolver(bFS);
    SearchSolver * solver4 = new SearchSolver(dFS);
//
   string solu1 = solver1->solve(vec);
    string solu2 = solver2->solve(vec);
    string solu3 = solver3->solve(vec);
    string solu4 = solver4->solve(vec);
  cout << "A Star :" << solu1 << endl;
    cout << "BesFs :" << solu2 << endl;
    cout << "BFS :" << solu3 << endl;
    cout << "DFS :" << solu4 << endl;
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 3; ++j) {
//
//        }
//        cout << endl;
////    }
////    vector<State<Point>> adj_vec = m->getAllPossibleStates(*s);
////    for (auto i :adj_vec)
////        cout << "(" << i.getState()->getX() << ","<< i.getState()->getY() << ")" << endl;
//
//    Searcher<Point>* searcher = new BFS<Point>();
//    vector<State<Point>*> BFSsearch = searcher->search(m);
//    for (auto i :BFSsearch)
//        cout << "BFS: (" << i->getState()->getX() << ","<< i->getState()->getY() << ")" << endl;
//    cout << "number of nodes = " << searcher->getNumberOfNodes() << endl;
}
#endif //EX4_BOOT_H

//Matrix1:
//"14,10,16,4,17,2,11,15,5,-1",
//"1,10,6,10,2,7,4,15,1,2",
//"2,13,3,8,15,20,11,17,12,19",
//"5,7,14,6,18,13,20,2,8,5",
//"4,15,-1,20,15,7,11,12,19,2",
//"4,4,18,14,16,1,-1,1,18,15",
//"10,5,1,10,17,19,18,0,15,9",
//"15,10,20,15,0,2,20,3,0,13",
//"13,2,19,2,-1,8,-1,7,19,15",
//"-1,12,5,1,5,9,18,11,-1,5",
//"0,0",
//"9,9",
//"end"

//Matrix2:
//"20,13,5,17,5,3,18,8,13,4,0,2,20,0,7",
//"12,10,6,20,12,12,0,19,18,3,6,1,2,0,1",
//"12,17,14,0,0,7,20,8,4,7,2,10,2,14,16",
//"13,9,9,4,5,10,1,4,1,8,15,0,9,7,18",
//"3,5,17,16,19,-1,-1,9,4,16,19,20,1,9,11",
//"20,10,4,7,17,1,1,17,11,4,18,9,12,3,19",
//"10,20,3,3,20,19,18,17,5,17,17,12,19,11,10",
//"2,2,9,8,-1,0,17,20,11,2,-1,1,6,11,9",
//"15,7,18,3,5,14,0,7,12,6,17,2,2,18,15",
//"13,14,12,17,14,4,19,19,4,15,5,4,8,19,13",
//"6,10,12,16,19,2,20,11,16,4,6,14,14,14,0",
//"6,3,2,11,18,5,9,6,10,17,11,-1,20,2,1",
//"-1,19,6,0,2,5,10,6,16,10,6,3,0,10,0",
//"19,2,17,14,20,1,12,3,6,16,14,2,0,14,5",
//"20,5,8,14,16,7,9,6,19,12,5,14,6,18,7",
//"0,0",
//"14,14",
//"end"

//Matrix3:
//"6,1,9,17,9,0,20,13,12,7,17,11,5,4,9,18,15,10,-1,6",
//"17,17,2,10,9,20,1,3,6,14,10,6,-1,12,3,4,10,16,16,11",
//"8,8,5,11,0,19,15,0,7,5,19,6,1,4,16,3,5,10,20,15",
//"4,15,11,20,17,11,-1,10,4,6,12,6,5,6,5,6,2,7,10,4",
//"3,17,6,-1,12,-1,12,11,13,11,0,5,6,9,0,16,20,3,2,15",
//"1,13,11,5,18,19,16,19,6,16,15,13,3,10,0,9,10,13,8,2",
//"19,9,4,7,10,13,18,20,5,6,9,5,4,7,19,-1,2,18,20,3",
//"5,8,13,16,3,14,8,11,18,16,8,12,1,-1,9,12,6,17,6,5",
//"4,1,15,0,14,19,17,15,11,9,20,4,19,13,14,1,2,17,12,13",
//"10,12,15,10,19,6,4,20,17,10,10,13,20,20,4,14,20,-1,4,11",
//"11,17,14,8,2,20,14,6,0,6,18,14,12,18,9,5,9,10,19,15",
//"15,8,17,11,1,-1,14,16,1,5,20,20,11,6,6,10,10,7,5,7",
//"18,0,9,1,18,6,16,11,7,19,1,0,10,7,1,3,8,8,9,20",
//"20,4,14,12,0,0,8,5,2,9,16,18,7,10,-1,1,14,4,13,10",
//"13,8,17,10,17,14,3,7,9,0,-1,14,16,9,5,4,15,6,13,17",
//"11,0,5,8,-1,12,16,5,0,1,20,-1,3,16,2,10,13,14,7,3",
//"18,6,12,18,17,10,1,10,9,20,4,2,-1,20,18,20,8,10,15,10",
//"1,7,8,11,13,12,9,3,5,17,11,13,5,2,9,7,10,11,6,1",
//"13,20,18,11,20,9,14,-1,15,13,3,6,11,16,18,2,11,3,15,5",
//"12,10,19,18,20,6,12,5,6,0,13,20,1,4,15,5,3,1,15,15",
//"0,0",
//"19,19",
//"end"

//Matrix4:
//"17,12,7,7,3,6,1,18,6,15,-1,0,5,9,9,8,10,7,10,1,9,14,11,18,16",
//"3,0,0,16,3,20,9,-1,4,16,14,15,8,-1,17,10,19,10,-1,5,15,7,17,10,11",
//"5,12,20,6,1,14,1,10,5,10,17,7,13,0,-1,17,8,12,20,6,5,7,3,10,7",
//"6,0,12,20,15,19,16,6,20,11,17,-1,10,20,0,20,5,3,8,16,12,8,2,-1,14",
//"4,2,9,20,20,7,10,15,17,5,8,5,11,4,-1,20,9,17,12,2,19,3,0,12,7",
//"10,0,18,9,1,9,18,14,14,5,4,9,6,12,19,16,9,18,14,6,17,-1,2,12,12",
//"10,6,18,2,14,0,17,7,13,19,19,0,17,6,11,19,9,20,13,12,12,4,20,0,6",
//"14,11,15,17,13,19,9,0,2,10,16,14,0,7,-1,15,9,1,8,5,9,1,2,11,2",
//"5,18,14,0,7,12,16,3,14,7,15,1,6,12,4,12,14,8,18,7,8,4,12,8,15",
//"11,11,15,1,2,3,5,6,8,1,1,6,17,14,9,1,12,6,11,16,13,3,5,2,15",
//"12,6,-1,8,9,3,2,2,13,8,13,3,20,4,1,20,20,9,15,0,7,6,8,19,7",
//"2,6,17,17,19,5,0,15,-1,10,0,17,-1,9,2,13,10,6,11,18,4,10,3,9,4",
//"18,4,3,12,7,13,-1,3,3,17,-1,12,5,8,-1,8,2,0,14,16,8,11,15,5,2",
//"16,19,3,20,10,15,14,20,4,19,12,1,-1,-1,16,12,6,1,4,19,17,5,18,16,14",
//"15,7,13,14,19,17,8,13,10,10,14,17,18,13,13,0,10,1,18,14,9,10,9,3,8",
//"7,-1,11,6,2,3,0,10,19,1,16,9,14,13,16,15,4,0,17,1,9,12,5,0,0",
//"18,19,7,14,-1,6,10,15,7,5,18,7,14,11,9,7,3,15,3,13,13,7,14,14,9",
//"1,17,0,18,13,13,9,8,7,15,0,2,-1,16,4,19,12,20,5,9,10,15,12,4,17",
//"10,8,13,17,12,1,9,16,2,2,7,1,1,-1,17,14,2,7,7,20,20,13,2,5,6",
//"16,20,10,17,0,17,1,-1,1,-1,9,20,18,19,-1,17,2,10,10,18,1,18,12,0,10",
//"-1,14,4,17,15,-1,9,2,12,2,20,20,6,10,10,10,1,15,11,10,3,10,18,5,10",
//"13,5,0,5,16,15,9,14,13,20,19,7,17,13,9,2,15,16,5,10,9,8,19,19,2",
//"8,3,17,12,13,0,17,17,3,11,12,3,16,3,-1,15,1,18,18,2,16,4,10,17,4",
//"10,17,4,14,17,5,5,1,18,20,7,4,19,4,4,16,-1,18,0,18,17,20,4,2,0",
//"0,15,5,-1,18,18,9,19,14,15,11,4,10,15,12,3,2,19,19,20,5,17,5,8,3",
//"0,0",
//"24,24",
//"end"

//Matrix5:
//"12,3,9,18,8,7,12,10,20,15,0,12,0,4,0,9,3,1,13,7,16,3,7,19,3,20,17,13,10,15",
//"2,18,2,13,0,20,3,9,1,11,2,-1,0,9,11,16,19,9,14,5,6,9,7,9,8,11,18,8,11,4",
//"5,6,5,0,7,-1,16,1,5,6,5,-1,17,4,-1,16,17,16,-1,17,0,13,3,13,11,-1,11,17,20,14",
//"12,20,15,7,20,16,7,15,12,1,5,19,20,2,5,16,12,13,18,3,10,20,9,8,0,19,2,9,15,18",
//"18,0,1,1,1,2,1,6,10,7,2,1,2,-1,7,17,-1,-1,18,2,19,10,8,7,17,18,1,20,5,7",
//"3,-1,2,5,11,10,10,11,12,4,12,9,19,-1,12,20,13,2,11,18,18,11,15,4,16,14,1,17,8,2",
//"11,20,11,-1,14,5,2,4,17,0,4,10,13,11,13,9,7,11,8,8,10,8,15,6,13,15,9,16,6,6",
//"8,2,7,14,-1,12,2,1,3,4,20,1,7,17,14,18,-1,5,8,1,2,18,0,19,1,15,20,11,15,15",
//"2,0,14,5,17,16,16,19,0,10,16,3,20,18,3,2,3,0,18,8,3,6,-1,-1,19,5,18,4,20,12",
//"-1,13,-1,12,6,8,17,17,0,18,11,4,-1,12,16,5,10,4,4,10,8,14,1,4,12,9,1,1,13,8",
//"18,2,-1,17,6,18,14,0,19,10,13,19,1,6,17,19,12,6,17,3,10,6,9,8,-1,4,3,3,20,5",
//"12,5,14,5,4,19,9,1,11,7,3,14,2,4,19,3,9,11,8,0,16,4,18,20,11,14,0,2,2,8",
//"10,17,6,18,11,5,16,17,6,14,2,20,19,15,6,5,6,6,3,10,18,13,10,3,11,-1,10,16,12,6",
//"11,5,17,-1,20,-1,1,4,2,18,15,11,15,20,1,10,7,5,8,1,19,18,9,13,10,1,8,20,15,11",
//"1,0,2,8,7,17,11,-1,12,12,-1,17,14,11,5,14,10,3,20,19,1,7,-1,12,9,17,17,15,1,10",
//"0,5,14,20,14,18,14,16,7,11,-1,4,4,0,11,4,8,11,20,-1,16,4,15,0,14,11,13,10,17,11",
//"20,7,5,16,0,7,-1,17,3,0,18,2,20,14,6,16,10,3,17,3,-1,7,12,11,16,19,13,20,7,5",
//"14,20,20,10,2,11,9,11,12,4,16,3,11,7,20,18,9,17,9,7,16,8,8,10,14,6,15,9,5,17",
//"3,11,1,10,0,6,15,5,11,3,7,0,5,2,9,17,15,19,17,11,1,7,12,17,5,16,14,10,8,6",
//"0,15,17,3,9,14,5,2,16,20,-1,10,14,12,11,14,19,10,1,3,16,17,16,19,-1,0,7,5,0,7",
//"20,15,3,8,3,14,4,12,15,15,9,19,9,7,18,6,10,8,17,2,19,1,3,5,14,1,19,19,20,11",
//"5,16,13,9,18,18,5,11,17,18,8,5,13,19,11,4,4,9,17,12,15,15,19,5,15,1,13,12,1,11",
//"7,15,10,11,4,4,13,11,0,16,1,11,15,3,9,5,2,4,11,12,-1,4,14,12,8,1,9,15,5,4",
//"19,10,1,3,8,6,16,11,3,3,11,7,17,19,12,15,14,-1,1,8,12,1,19,-1,9,3,19,-1,11,2",
//"15,7,5,0,8,15,9,13,2,8,7,6,7,18,16,4,7,16,0,4,0,6,4,1,2,6,15,8,0,19",
//"5,0,19,18,2,7,1,19,3,11,19,13,18,5,11,6,20,14,1,9,2,13,17,17,0,15,15,18,10,12",
//"16,2,15,19,1,6,14,2,18,19,3,11,18,13,7,17,20,10,19,16,12,-1,19,19,9,5,18,20,10,3",
//"8,10,15,13,11,12,13,2,3,15,10,19,-1,16,4,5,1,1,0,14,14,20,15,-1,5,17,11,5,11,11",
//"20,6,9,17,15,13,5,-1,12,1,18,10,1,4,-1,17,14,18,2,3,9,0,3,13,17,18,2,20,12,1",
//"-1,4,17,16,18,15,17,8,20,-1,-1,4,3,16,18,8,8,12,8,15,16,16,14,-1,3,12,19,10,-1,7",
//"0,0",
//"29,29",
//"end"