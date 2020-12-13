#include <iostream>

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>

const int MATRIX_SIZE = 50;

int main(int argc, char** argv) {

    Eigen::Matrix<float, 2, 3> matrix_23;

    Eigen::Vector3d v_3d;

    Eigen::Matrix3d matrix_33 = Eigen::Matrix3d::Zero();

    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> matrix_dynamic;

    matrix_23  << 1, 2, 3, 4, 5, 6;

    std::cout << matrix_23 << std::endl;

    for (int i = 0; i < 1; ++i)
        for (int j = 0; j < 2; ++j)
            std::cout << matrix_23(i, j) << std::endl;

    v_3d << 3, 2, 1;

    Eigen::Matrix<double, 2, 1> result = matrix_23.cast<double>() * v_3d;
    std::cout << result << std::endl;

    
    return 0;
}