#include "iostream"
#include <unistd.h>
#include <opencv2/opencv.hpp>
#include <strings.h>
using namespace cv;
using namespace std;

int main(int argc, char **argv)
{
    if (argc <= 1)
    {
        cout << "no file input";
        return -1;
    }
    Mat img=imread(argv[1],IMREAD_COLOR);
    if(!img.data){
        cout<<"this file does not exist!";
        return -2;
    }

    Mat gray_img;
    cvtColor(img,gray_img,COLOR_BGR2GRAY);
    imshow("window1", img);
    imshow("window2",gray_img);
    waitKey(0);
    return 0;
}