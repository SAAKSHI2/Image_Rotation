#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main()
{
	string path;
	cout << "enter the path or name of the image : ";
	getline(cin, path);
	Mat image = imread(path);     //read the input image
	if (image.empty())
	{
		cout << "error!!\n";
		return -1;
	}
	string window_name;
	cout << "enter the name to window : ";
	getline(cin, window_name);

	Mat result_image;
	double degree;
	cout << "enter the angle to rotate the image : ";
	cin >> degree;

	Point2f center(image.cols / 2.0, image.rows / 2.0);   //points from where to rotate the image
	Mat rot = getRotationMatrix2D(center, degree, 1.0);  // to rotate image and store it in Mat object
	Rect2f bbox = RotatedRect(Point2f(), image.size(), degree).boundingRect2f();
	rot.at<double>(0, 2) += bbox.width / 2.0 - image.cols/2.0;
    rot.at<double>(1,2) += bbox.height / 2.0 - image.rows / 2.0;

	warpAffine(image,result_image, rot, bbox.size());  
	
	namedWindow(window_name,WINDOW_NORMAL);   //create window to display image
	imshow(window_name,result_image);   //display image after rotation
	waitKey(0);
	destroyWindow(window_name);
}