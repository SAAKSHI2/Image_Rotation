# Image_Rotation
Readme
About the project :
•	This project is about rotating an image by an angle given by the user.
•	OpenCV library is used in this program for processing the image.
•	OpenCV is a cross-platform library using which we can develop real-time computer vision applications. It mainly focuses on image processing, video capture and analysis including features like face detection and object detection.

OpenCV Inbuilt Functions :
1 – imread(const String & filename, int flags) :This function loads an image from the specified   position.
2 – imshow(windowName, inputArray Mat) : This function display the image in gthe specified window.
3 – namedWindow(const string & windowName, int flags) : This function creates a window that can be used as a placeholder for images. 
4 – waitKey(0) : This function will display the window infinite times until any key is press.
5 – Rotation : To rotate an image getRotationMatrix2D and wrapAffine are used .

Programming language used :
•	C++

How to run this project :

•	Install Visual Studio on your PC.
•	Install OpenCV.
•	Include OpenCV to system path
o	Go to Advanced System Settings > Environment Variables >System Variables > Path.
o	Copy and paste the path of bin folder inside OpenCV package.
•	Open up Visual Studio. Create empty project and Add a new .cpp file inside the Source Files. This will open up the newly created cpp file in the editor. Write this code there.
•	Take an image that you want to rotate and save it inside project location.
•	Include OpenCV in visual studio.
   o	Select debug environment to x64.
   o	Inside Properties of the project, then C/C++ > General. Copy the path to include folder of OpenCV and paste it inside Additional Include Directories. The path will      look similar to C:\opencv\build\include. Then, click Apply.

   o	Go to linker > General. Copy the path to folder containing OpenCV  lib files and paste it inside Additional Library Directories. The path will look similar to            C:\opencv\build\x64\vc14\lib. Then, click Apply.
   o	Go to Input. Edit Additional Dependencies and paste the .lib file’s name. Choose the .lib file according to your configuration. For debug mode, the file ends with        ‘d’, e. g., opencv_world341d.lib.. Then, click Apply.
   o	Exit the Properties by clicking OK.
•	As you run the code it will ask you to enter the path of the image to be rotated ,the angle at which you want to rotate the image and the name you want to give to the window which will display the rotated image. As you enter these information an image rotated at a given angle will appear in a new window.
