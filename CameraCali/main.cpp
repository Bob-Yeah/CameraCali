#include <opencv2\core.hpp>
#include <opencv2\highgui.hpp>
#include <opencv2\calib3d.hpp>
#include <opencv2\imgproc.hpp>
#include <iostream>
#include <fstream>
using namespace std;
using namespace cv;
int main(int argc, char* argv) {
	VideoCapture cap(1);
	cap.set(CV_CAP_PROP_FRAME_WIDTH, 640);
	cap.set(CV_CAP_PROP_FRAME_HEIGHT, 480);
	if (!cap.isOpened()) {
		cout << "打开摄像头失败，退出";
		exit(-1);

	}
	namedWindow("CameraCali");
	cout << "Press g to start capture images!"<<endl;


}