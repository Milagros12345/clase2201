#ifndef POINT_H
#define POINT_H


class point
{
    public:
        int x,y;
        //point();
        point(double nx,double ny);
        void print();
        virtual ~point();
    private:
};

#endif // POINT_H
