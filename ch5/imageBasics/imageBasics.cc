#include <iostream>
#include <chrono>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
int main(int argc, char** argv) {
    cv::Mat image;
    image = cv::imread(argv[1]);

    if (image.data == NULL) {
        cerr << "The file " << argv[1] << "doesn't exist!\n";
        return 0;
    }

    cout << "image.cols: " << image.cols 
        << ", image.rows" << image.rows
        << ", image.channels: " << image.channels() << endl;

    cv::imshow("image", image);
    cv::waitKey(0);

    if (image.type() != CV_8UC1 && image.type() != CV_8UC3) {
        cout << "invaild image type\n";
        return 0;
    }
    return 0;
}