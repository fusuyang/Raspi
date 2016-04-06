/*#include <opencv2/highgui/highgui.hpp>
#include <opencv/cv.h>
#include <opencv2/core/core.hpp>
#include <iostream>
int main(int argc, char* argv[]) {
	CvCapture *capture = NULL;
	//capture = cvCreateCameraCapture(-1);
	capture = cvCaptureFromCAM(1);
	if (capture = NULL) {
		std::cout << "Open Camera Failed! " << std::endl;
		return -1;
	}
	std::cout << "Open Camera Successful! " << std::endl;
	IplImage *image = NULL;
	while (1)
	{
		image = cvQueryFrame(capture);
		if (!image) {
			std::cout << "Capture Frame Failed! " << std::endl;
			break;
		}
		cvShowImage("Camera", image);
		char c = cvWaitKey(33);
		if (c == 27)break;
	}
	cvDestroyWindow("Camera");
	cvReleaseCapture(&capture);
	return 0;
}*/
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <iostream>
using namespace std;
using namespace cv;

int main()
{
	char c;
	CvCapture* capture = cvCreateCameraCapture(-1);   //0ÎªÍâ²¿ÉãÏñÍ·µÄID£¬1Îª±ÊŒÇ±ŸÄÚÖÃÉãÏñÍ·µÄID
	IplImage* src;
	for (;;)
	{
		src = cvQueryFrame(capture);
		cvShowImage("Input", src);
		c = cvWaitKey(10);
		if (c == 27) break;
	}
	return 0;
}
