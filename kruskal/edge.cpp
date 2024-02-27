class Edge    //class concept
{
   public:
    int u,v,w; // u,v,w are the points and cost of the edge
   
    bool operator < (const Edge& A) const // operator overloading
    {
        return w < A.w; // if the weight of the edge is less than the weight of the edge in the vector
    }
   
};
