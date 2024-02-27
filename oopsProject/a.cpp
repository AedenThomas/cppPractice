//Minimum Spanning tree using Kruskal's algorithm

//Steps to Kruskal's algorithm 
//1. Sort the edges in non-decreasing order of their weight.
//2. Pick the smallest edge. Check if it forms a cycle with the spanning tree formed so far. If is not formed, include this edge.
//3. Repeat step#2 until all edges are included in the spanning tree.
#include <iostream>
#include <vector> 
#include <algorithm> // for sort()
#include <fstream> // for file handling
#include <string> // for string handling
#include "edge.cpp"

using namespace std;

vector<Edge> question;      // vector of edges (edges are sorted by weight) 
vector<Edge> selected;

class perform : public Edge //perform class inherits from Edge class
{ 
public:
    vector<int> parent; // parent of each node 
    int points, edges, total;
    Edge E;

    void input()
    {

        cout << "\n\nEnter the number of points" << endl;
        cin >> points; // number of points
        if (points <= 1)
        {
            cout << "\n\nNo tree exists";
            exit(0);
        }
        cout << "\n\nEnter the number of edges" << endl;
        cin >> edges; 
        if (edges <= 0)
        {
            cout << "\n\nNo tree exists"; //
            exit(0);
        }

        parent = vector<int>(points); // parent is used to store the parent of each node
        cout << "\nEnter the points and distance between them in the form (point 1,point 2,cost)" << endl; 
        for (int i = 1; i <= edges; i++)
        {
            cout << "Edge :" << i << endl;
            cin >> u >> v >> w; // u,v,w are the points and cost of the edge
            if (u > points || v > points)
            {
                cout << "\n This edge is ignored as it is invalid" << endl; 
                continue;
            }
            E.u = u; 
            E.v = v;
            E.w = w;
            question.push_back(E); // push the edge into the vector of edges (edges are sorted by weight)
        }
        if (edges == 1)
        {
            cout << "\n\nOnly one edge exists so that is selected.\n Total cost =" << E.w; 
            exit(0);
        }
    }

    int findParent(int ele)
    {
        if (ele == parent[ele]) // if the parent of the element is itself
            return ele;
        parent[ele] = findParent(parent[ele]); // recursively call the function till the parent of the element is found
        return parent[ele];
    }

    int kruskal()
    {

        for (int i = 1; i <= points; i++) 
        {
            parent[i] = i; // initially all the points are their own parent (i.e. they are their own set) 
        }
        int count = 0, total = 0;
        sort(question.begin(), question.end()); // sort the edges in increasing order of weight
        int l = question.size();
        for (int i = 0; i < l; i++) 
        {
            int parentOfU = findParent(question[i].u); // find the parent of the first point of the edge 

            int parentOfV = findParent(question[i].v); // find the parent of the second point of the edge
 
            if (parentOfU != parentOfV) 
            {
                parent[parentOfU] = parentOfV; // if the parents of the two points are different, then make the parent of the first point as the parent of the second point
                total += question[i].w; // add the cost of the edge to the total cost
                selected.push_back(question[i]); // push the edge into the vector of selected edges
                count++;
                if (count == points - 1)
                    break;
            }
        }
        // cout<<"\n Total cost: "<<total<<endl;

        return total;
    }

    friend void output(perform &q); // friend function to output the selected edges
}; 

void output(perform &q) // friend function and passing reference
{
    cout << "\n\nSelected Edges and their costs" << endl;
    for (int i = 0; i < selected.size(); i++)
    {
        cout << "Edge " << i + 1 << " : " << selected[i].u << "---- " << selected[i].v << "  cost: " << selected[i].w << endl; // output the selected edges and their costs
    }
}

int main()
{
    string line;
    ifstream MyReadFile("Welcome.txt"); //ifstream object to read the file
    while (getline(MyReadFile,line)) 
    {
    cout <<line<<endl;
    }
    MyReadFile.close(); // close the file


    perform qn; // object of the class
    qn.input(); 
    int total = 0;
    total = qn.kruskal(); // call the function to find the minimum spanning tree using Kruskal's algorithm
    output(qn); // call the friend function to output the selected edges
    cout << "\n\nTotal cost: " << total << endl;
    return 0;
}
