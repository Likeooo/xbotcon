#include<iostream>
#include<opencv4/opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main(){
    cout<<"go get ";
     cout<<"i change it";
      cout<<"love";
      cout<<"like";
     Mat a=imread("chess1.png");
     if(a.empty())
     cout<<"enpty";
     imshow("a",a);

     waitKey(0);
    return 0;
}
