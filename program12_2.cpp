#include <iostream>
using namespace std;

const size = 3;
template <class t>
class vector{
    t *v;
    public:
    vector(){
        v=new t[size];
        for(int i=0; i<size; i++)
            v[i] = 0;
    }

    vector(t *a){
        for(int i =0; i<size; i++)
            v[i] = a[i];
    }
    t operator*(vector &y){
        t sum = 0;
        for(int i = 0; i<size; i++)
            sum += this ->v[i]*y.v[i];
        return sum;
    }
    void display(void){
        for(int i=0; i<size; i++)
            cout<<v[i]<<"\t";
        cout<<endl;
    }
};

int main(){
    float x[3] = {1.1,2.2,3.3};
    float y[3] = {4.4,5.5,6.6};
    vector <float> v1;
    vector <float> v2;
    v1 = x;
    v2 = y;

    cout<<"v1 = ";
    v1.display();

    cout<<"v2 = ";
    v2.display();

    cout<<"v1*v2 = "<<v1*v2;
    return 0;
}